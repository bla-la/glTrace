#include <glTraceCommon.h>
#include <generated.h>

#define glStencilMaskSeparate_wrp						\
    ((void  (*)(GLenum face,GLuint mask                                        \
    ))GL_ENTRY_PTR(glStencilMaskSeparate_Idx))


GLAPI void  APIENTRY glStencilMaskSeparate(GLenum face,GLuint mask)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glStencilMaskSeparate_Idx))
	{
            GL_ENTRY_PTR(glStencilMaskSeparate_Idx) = dlsym(RTLD_NEXT,"glStencilMaskSeparate");
            if(!GL_ENTRY_PTR(glStencilMaskSeparate_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glStencilMaskSeparate_Idx))
    	{
            GL_ENTRY_PREV_TS(glStencilMaskSeparate_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glStencilMaskSeparate_wrp(face,mask);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glStencilMaskSeparate_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glStencilMaskSeparate_Idx) ++;

        GL_ENTRY_LAST_TS(glStencilMaskSeparate_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glStencilMaskSeparate_Idx),
				 GL_ENTRY_LAST_TS(glStencilMaskSeparate_Idx));
        if(last_diff > 1000000000){
            printf("glStencilMaskSeparate %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glStencilMaskSeparate_Idx),
	             GL_ENTRY_CALL_TIME(glStencilMaskSeparate_Idx),
	             GL_ENTRY_CALL_TIME(glStencilMaskSeparate_Idx) /
	             GL_ENTRY_CALL_COUNT(glStencilMaskSeparate_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glStencilMaskSeparate_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glStencilMaskSeparate_Idx) = 0;
             GL_ENTRY_CALL_TIME(glStencilMaskSeparate_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glStencilMaskSeparate_Idx) = get_ts();
        }


	

}