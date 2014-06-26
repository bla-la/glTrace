#include <glTraceCommon.h>
#include <generated.h>

#define glCurrentPaletteMatrixOES_wrp						\
    ((void  (*)(GLuint matrixpaletteindex                                        \
    ))GL_ENTRY_PTR(glCurrentPaletteMatrixOES_Idx))


GLAPI void  APIENTRY glCurrentPaletteMatrixOES(GLuint matrixpaletteindex)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCurrentPaletteMatrixOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glCurrentPaletteMatrixOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCurrentPaletteMatrixOES_wrp(matrixpaletteindex);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCurrentPaletteMatrixOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCurrentPaletteMatrixOES_Idx) ++;

        GL_ENTRY_LAST_TS(glCurrentPaletteMatrixOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCurrentPaletteMatrixOES_Idx),
				 GL_ENTRY_LAST_TS(glCurrentPaletteMatrixOES_Idx));


        if(last_diff > 1000000000){
            printf("glCurrentPaletteMatrixOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCurrentPaletteMatrixOES_Idx),
	             GL_ENTRY_CALL_TIME(glCurrentPaletteMatrixOES_Idx),
	             GL_ENTRY_CALL_TIME(glCurrentPaletteMatrixOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glCurrentPaletteMatrixOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCurrentPaletteMatrixOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCurrentPaletteMatrixOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCurrentPaletteMatrixOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCurrentPaletteMatrixOES_Idx) = get_ts();
        }


	

}