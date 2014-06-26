#include <glTraceCommon.h>
#include <generated.h>

#define glNormalPointervINTEL_wrp						\
    ((void  (*)(GLenum type,const void **pointer                                        \
    ))GL_ENTRY_PTR(glNormalPointervINTEL_Idx))


GLAPI void  APIENTRY glNormalPointervINTEL(GLenum type,const void **pointer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glNormalPointervINTEL_Idx))
    	{
            GL_ENTRY_PREV_TS(glNormalPointervINTEL_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNormalPointervINTEL_wrp(type,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNormalPointervINTEL_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNormalPointervINTEL_Idx) ++;

        GL_ENTRY_LAST_TS(glNormalPointervINTEL_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNormalPointervINTEL_Idx),
				 GL_ENTRY_LAST_TS(glNormalPointervINTEL_Idx));


        if(last_diff > 1000000000){
            printf("glNormalPointervINTEL %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNormalPointervINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glNormalPointervINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glNormalPointervINTEL_Idx) /
	             GL_ENTRY_CALL_COUNT(glNormalPointervINTEL_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNormalPointervINTEL_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNormalPointervINTEL_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNormalPointervINTEL_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNormalPointervINTEL_Idx) = get_ts();
        }


	

}