#include <glTraceCommon.h>
#include <generated.h>

#define glClearAccum_wrp						\
    ((void  (*)(GLfloat red,GLfloat green,GLfloat blue,GLfloat alpha                                        \
    ))GL_ENTRY_PTR(glClearAccum_Idx))


GLAPI void  APIENTRY glClearAccum(GLfloat red,GLfloat green,GLfloat blue,GLfloat alpha)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glClearAccum_Idx))
	{
            GL_ENTRY_PTR(glClearAccum_Idx) = dlsym(RTLD_NEXT,"glClearAccum");
            if(!GL_ENTRY_PTR(glClearAccum_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glClearAccum_Idx))
    	{
            GL_ENTRY_PREV_TS(glClearAccum_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClearAccum_wrp(red,green,blue,alpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClearAccum_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClearAccum_Idx) ++;

        GL_ENTRY_LAST_TS(glClearAccum_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClearAccum_Idx),
				 GL_ENTRY_LAST_TS(glClearAccum_Idx));
        if(last_diff > 1000000000){
            printf("glClearAccum %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClearAccum_Idx),
	             GL_ENTRY_CALL_TIME(glClearAccum_Idx),
	             GL_ENTRY_CALL_TIME(glClearAccum_Idx) /
	             GL_ENTRY_CALL_COUNT(glClearAccum_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClearAccum_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClearAccum_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClearAccum_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClearAccum_Idx) = get_ts();
        }


	

}