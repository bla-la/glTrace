#include <glTraceCommon.h>
#include <generated.h>

#define glMatrixLoadTransposedEXT_wrp						\
    ((void  (*)(GLenum mode,const GLdouble *m                                        \
    ))GL_ENTRY_PTR(glMatrixLoadTransposedEXT_Idx))


GLAPI void  APIENTRY glMatrixLoadTransposedEXT(GLenum mode,const GLdouble *m)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMatrixLoadTransposedEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMatrixLoadTransposedEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMatrixLoadTransposedEXT_wrp(mode,m);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMatrixLoadTransposedEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMatrixLoadTransposedEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMatrixLoadTransposedEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMatrixLoadTransposedEXT_Idx),
				 GL_ENTRY_LAST_TS(glMatrixLoadTransposedEXT_Idx));


        if(last_diff > 1000000000){
            printf("glMatrixLoadTransposedEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMatrixLoadTransposedEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixLoadTransposedEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixLoadTransposedEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMatrixLoadTransposedEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMatrixLoadTransposedEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMatrixLoadTransposedEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMatrixLoadTransposedEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMatrixLoadTransposedEXT_Idx) = get_ts();
        }


	

}