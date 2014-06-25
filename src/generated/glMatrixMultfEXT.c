#include <glTraceCommon.h>
#include <generated.h>

#define glMatrixMultfEXT_wrp						\
    ((void  (*)(GLenum mode,const GLfloat *m                                        \
    ))GL_ENTRY_PTR(glMatrixMultfEXT_Idx))


GLAPI void  APIENTRY glMatrixMultfEXT(GLenum mode,const GLfloat *m)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMatrixMultfEXT_Idx))
	{
            GL_ENTRY_PTR(glMatrixMultfEXT_Idx) = dlsym(RTLD_NEXT,"glMatrixMultfEXT");
            if(!GL_ENTRY_PTR(glMatrixMultfEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMatrixMultfEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMatrixMultfEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMatrixMultfEXT_wrp(mode,m);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMatrixMultfEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMatrixMultfEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMatrixMultfEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMatrixMultfEXT_Idx),
				 GL_ENTRY_LAST_TS(glMatrixMultfEXT_Idx));
        if(last_diff > 1000000000){
            printf("glMatrixMultfEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMatrixMultfEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixMultfEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixMultfEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMatrixMultfEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMatrixMultfEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMatrixMultfEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMatrixMultfEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMatrixMultfEXT_Idx) = get_ts();
        }


	

}