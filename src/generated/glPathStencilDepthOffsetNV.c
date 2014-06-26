#include <glTraceCommon.h>
#include <generated.h>

#define glPathStencilDepthOffsetNV_wrp						\
    ((void  (*)(GLfloat factor,GLfloat units                                        \
    ))GL_ENTRY_PTR(glPathStencilDepthOffsetNV_Idx))


GLAPI void  APIENTRY glPathStencilDepthOffsetNV(GLfloat factor,GLfloat units)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPathStencilDepthOffsetNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glPathStencilDepthOffsetNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPathStencilDepthOffsetNV_wrp(factor,units);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPathStencilDepthOffsetNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPathStencilDepthOffsetNV_Idx) ++;

        GL_ENTRY_LAST_TS(glPathStencilDepthOffsetNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPathStencilDepthOffsetNV_Idx),
				 GL_ENTRY_LAST_TS(glPathStencilDepthOffsetNV_Idx));


        if(last_diff > 1000000000){
            printf("glPathStencilDepthOffsetNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPathStencilDepthOffsetNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathStencilDepthOffsetNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathStencilDepthOffsetNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glPathStencilDepthOffsetNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPathStencilDepthOffsetNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPathStencilDepthOffsetNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPathStencilDepthOffsetNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPathStencilDepthOffsetNV_Idx) = get_ts();
        }


	

}