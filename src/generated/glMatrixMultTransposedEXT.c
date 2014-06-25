#include <glTraceCommon.h>
#include <generated.h>

#define glMatrixMultTransposedEXT_wrp						\
    ((void  (*)(GLenum mode,const GLdouble *m                                        \
    ))GL_ENTRY_PTR(glMatrixMultTransposedEXT_Idx))


GLAPI void  APIENTRY glMatrixMultTransposedEXT(GLenum mode,const GLdouble *m)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMatrixMultTransposedEXT_Idx))
	{
            GL_ENTRY_PTR(glMatrixMultTransposedEXT_Idx) = dlsym(RTLD_NEXT,"glMatrixMultTransposedEXT");
            if(!GL_ENTRY_PTR(glMatrixMultTransposedEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMatrixMultTransposedEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMatrixMultTransposedEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMatrixMultTransposedEXT_wrp(mode,m);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMatrixMultTransposedEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMatrixMultTransposedEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMatrixMultTransposedEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMatrixMultTransposedEXT_Idx),
				 GL_ENTRY_LAST_TS(glMatrixMultTransposedEXT_Idx));
        if(last_diff > 1000000000){
            printf("glMatrixMultTransposedEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMatrixMultTransposedEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixMultTransposedEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixMultTransposedEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMatrixMultTransposedEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMatrixMultTransposedEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMatrixMultTransposedEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMatrixMultTransposedEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMatrixMultTransposedEXT_Idx) = get_ts();
        }


	

}