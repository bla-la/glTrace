#include <glTraceCommon.h>
#include <generated.h>

#define glColor4f_wrp						\
    ((void  (*)(GLfloat red,GLfloat green,GLfloat blue,GLfloat alpha                                        \
    ))GL_ENTRY_PTR(glColor4f_Idx))


GLAPI void  APIENTRY glColor4f(GLfloat red,GLfloat green,GLfloat blue,GLfloat alpha)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glColor4f_Idx))
	{
            GL_ENTRY_PTR(glColor4f_Idx) = dlsym(RTLD_NEXT,"glColor4f");
            if(!GL_ENTRY_PTR(glColor4f_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glColor4f_Idx))
    	{
            GL_ENTRY_PREV_TS(glColor4f_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColor4f_wrp(red,green,blue,alpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColor4f_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColor4f_Idx) ++;

        GL_ENTRY_LAST_TS(glColor4f_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColor4f_Idx),
				 GL_ENTRY_LAST_TS(glColor4f_Idx));
        if(last_diff > 1000000000){
            printf("glColor4f %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColor4f_Idx),
	             GL_ENTRY_CALL_TIME(glColor4f_Idx),
	             GL_ENTRY_CALL_TIME(glColor4f_Idx) /
	             GL_ENTRY_CALL_COUNT(glColor4f_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColor4f_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColor4f_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColor4f_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColor4f_Idx) = get_ts();
        }


	

}