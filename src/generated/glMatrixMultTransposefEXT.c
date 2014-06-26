#include <glTraceCommon.h>
#include <generated.h>

#define glMatrixMultTransposefEXT_wrp						\
    ((void  (*)(GLenum mode,const GLfloat *m                                        \
    ))GL_ENTRY_PTR(glMatrixMultTransposefEXT_Idx))


GLAPI void  APIENTRY glMatrixMultTransposefEXT(GLenum mode,const GLfloat *m)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMatrixMultTransposefEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMatrixMultTransposefEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMatrixMultTransposefEXT_wrp(mode,m);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMatrixMultTransposefEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMatrixMultTransposefEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMatrixMultTransposefEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMatrixMultTransposefEXT_Idx),
				 GL_ENTRY_LAST_TS(glMatrixMultTransposefEXT_Idx));


        if(last_diff > 1000000000){
            printf("glMatrixMultTransposefEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMatrixMultTransposefEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixMultTransposefEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixMultTransposefEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMatrixMultTransposefEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMatrixMultTransposefEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMatrixMultTransposefEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMatrixMultTransposefEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMatrixMultTransposefEXT_Idx) = get_ts();
        }


	

}