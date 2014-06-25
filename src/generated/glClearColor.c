#include <glTraceCommon.h>
#include <generated.h>

#define glClearColor_wrp						\
    ((void  (*)(GLfloat red,GLfloat green,GLfloat blue,GLfloat alpha                                        \
    ))GL_ENTRY_PTR(glClearColor_Idx))


GLAPI void  APIENTRY glClearColor(GLfloat red,GLfloat green,GLfloat blue,GLfloat alpha)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glClearColor_Idx))
	{
            GL_ENTRY_PTR(glClearColor_Idx) = dlsym(RTLD_NEXT,"glClearColor");
            if(!GL_ENTRY_PTR(glClearColor_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glClearColor_Idx))
    	{
            GL_ENTRY_PREV_TS(glClearColor_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClearColor_wrp(red,green,blue,alpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClearColor_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClearColor_Idx) ++;

        GL_ENTRY_LAST_TS(glClearColor_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClearColor_Idx),
				 GL_ENTRY_LAST_TS(glClearColor_Idx));
        if(last_diff > 1000000000){
            printf("glClearColor %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClearColor_Idx),
	             GL_ENTRY_CALL_TIME(glClearColor_Idx),
	             GL_ENTRY_CALL_TIME(glClearColor_Idx) /
	             GL_ENTRY_CALL_COUNT(glClearColor_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClearColor_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClearColor_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClearColor_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClearColor_Idx) = get_ts();
        }


	

}