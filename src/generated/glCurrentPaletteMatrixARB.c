#include <glTraceCommon.h>
#include <generated.h>

#define glCurrentPaletteMatrixARB_wrp						\
    ((void  (*)(GLint index                                        \
    ))GL_ENTRY_PTR(glCurrentPaletteMatrixARB_Idx))


GLAPI void  APIENTRY glCurrentPaletteMatrixARB(GLint index)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCurrentPaletteMatrixARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glCurrentPaletteMatrixARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCurrentPaletteMatrixARB_wrp(index);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCurrentPaletteMatrixARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCurrentPaletteMatrixARB_Idx) ++;

        GL_ENTRY_LAST_TS(glCurrentPaletteMatrixARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCurrentPaletteMatrixARB_Idx),
				 GL_ENTRY_LAST_TS(glCurrentPaletteMatrixARB_Idx));


        if(last_diff > 1000000000){
            printf("glCurrentPaletteMatrixARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCurrentPaletteMatrixARB_Idx),
	             GL_ENTRY_CALL_TIME(glCurrentPaletteMatrixARB_Idx),
	             GL_ENTRY_CALL_TIME(glCurrentPaletteMatrixARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glCurrentPaletteMatrixARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCurrentPaletteMatrixARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCurrentPaletteMatrixARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCurrentPaletteMatrixARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCurrentPaletteMatrixARB_Idx) = get_ts();
        }


	

}