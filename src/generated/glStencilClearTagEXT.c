#include <glTraceCommon.h>
#include <generated.h>

#define glStencilClearTagEXT_wrp						\
    ((void  (*)(GLsizei stencilTagBits,GLuint stencilClearTag                                        \
    ))GL_ENTRY_PTR(glStencilClearTagEXT_Idx))


GLAPI void  APIENTRY glStencilClearTagEXT(GLsizei stencilTagBits,GLuint stencilClearTag)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glStencilClearTagEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glStencilClearTagEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glStencilClearTagEXT_wrp(stencilTagBits,stencilClearTag);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glStencilClearTagEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glStencilClearTagEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glStencilClearTagEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glStencilClearTagEXT_Idx),
				 GL_ENTRY_LAST_TS(glStencilClearTagEXT_Idx));


        if(last_diff > 1000000000){
            printf("glStencilClearTagEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glStencilClearTagEXT_Idx),
	             GL_ENTRY_CALL_TIME(glStencilClearTagEXT_Idx),
	             GL_ENTRY_CALL_TIME(glStencilClearTagEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glStencilClearTagEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glStencilClearTagEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glStencilClearTagEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glStencilClearTagEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glStencilClearTagEXT_Idx) = get_ts();
        }


	

}