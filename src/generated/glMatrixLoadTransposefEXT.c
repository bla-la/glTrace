#include <glTraceCommon.h>
#include <generated.h>

#define glMatrixLoadTransposefEXT_wrp						\
    ((void  (*)(GLenum mode,const GLfloat *m                                        \
    ))GL_ENTRY_PTR(glMatrixLoadTransposefEXT_Idx))


GLAPI void  APIENTRY glMatrixLoadTransposefEXT(GLenum mode,const GLfloat *m)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMatrixLoadTransposefEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMatrixLoadTransposefEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMatrixLoadTransposefEXT_wrp(mode,m);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMatrixLoadTransposefEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMatrixLoadTransposefEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMatrixLoadTransposefEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMatrixLoadTransposefEXT_Idx),
				 GL_ENTRY_LAST_TS(glMatrixLoadTransposefEXT_Idx));


        if(last_diff > 1000000000){
            printf("glMatrixLoadTransposefEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMatrixLoadTransposefEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixLoadTransposefEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixLoadTransposefEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMatrixLoadTransposefEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMatrixLoadTransposefEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMatrixLoadTransposefEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMatrixLoadTransposefEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMatrixLoadTransposefEXT_Idx) = get_ts();
        }


	

}