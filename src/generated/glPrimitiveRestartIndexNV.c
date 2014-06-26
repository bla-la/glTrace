#include <glTraceCommon.h>
#include <generated.h>

#define glPrimitiveRestartIndexNV_wrp						\
    ((void  (*)(GLuint index                                        \
    ))GL_ENTRY_PTR(glPrimitiveRestartIndexNV_Idx))


GLAPI void  APIENTRY glPrimitiveRestartIndexNV(GLuint index)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPrimitiveRestartIndexNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glPrimitiveRestartIndexNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPrimitiveRestartIndexNV_wrp(index);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPrimitiveRestartIndexNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPrimitiveRestartIndexNV_Idx) ++;

        GL_ENTRY_LAST_TS(glPrimitiveRestartIndexNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPrimitiveRestartIndexNV_Idx),
				 GL_ENTRY_LAST_TS(glPrimitiveRestartIndexNV_Idx));


        if(last_diff > 1000000000){
            printf("glPrimitiveRestartIndexNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPrimitiveRestartIndexNV_Idx),
	             GL_ENTRY_CALL_TIME(glPrimitiveRestartIndexNV_Idx),
	             GL_ENTRY_CALL_TIME(glPrimitiveRestartIndexNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glPrimitiveRestartIndexNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPrimitiveRestartIndexNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPrimitiveRestartIndexNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPrimitiveRestartIndexNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPrimitiveRestartIndexNV_Idx) = get_ts();
        }


	

}