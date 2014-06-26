#include <glTraceCommon.h>
#include <generated.h>

#define glVertexWeighthNV_wrp						\
    ((void  (*)(GLhalfNV weight                                        \
    ))GL_ENTRY_PTR(glVertexWeighthNV_Idx))


GLAPI void  APIENTRY glVertexWeighthNV(GLhalfNV weight)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexWeighthNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexWeighthNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexWeighthNV_wrp(weight);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexWeighthNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexWeighthNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexWeighthNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexWeighthNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexWeighthNV_Idx));


        if(last_diff > 1000000000){
            printf("glVertexWeighthNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexWeighthNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexWeighthNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexWeighthNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexWeighthNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexWeighthNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexWeighthNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexWeighthNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexWeighthNV_Idx) = get_ts();
        }


	

}