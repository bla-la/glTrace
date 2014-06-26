#include <glTraceCommon.h>
#include <generated.h>

#define glVertexWeighthvNV_wrp						\
    ((void  (*)(const GLhalfNV *weight                                        \
    ))GL_ENTRY_PTR(glVertexWeighthvNV_Idx))


GLAPI void  APIENTRY glVertexWeighthvNV(const GLhalfNV *weight)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexWeighthvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexWeighthvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexWeighthvNV_wrp(weight);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexWeighthvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexWeighthvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexWeighthvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexWeighthvNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexWeighthvNV_Idx));


        if(last_diff > 1000000000){
            printf("glVertexWeighthvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexWeighthvNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexWeighthvNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexWeighthvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexWeighthvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexWeighthvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexWeighthvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexWeighthvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexWeighthvNV_Idx) = get_ts();
        }


	

}