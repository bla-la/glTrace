#include <glTraceCommon.h>
#include <generated.h>

#define glStencilOpSeparate_wrp						\
    ((void  (*)(GLenum face,GLenum sfail,GLenum dpfail,GLenum dppass                                        \
    ))GL_ENTRY_PTR(glStencilOpSeparate_Idx))


GLAPI void  APIENTRY glStencilOpSeparate(GLenum face,GLenum sfail,GLenum dpfail,GLenum dppass)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glStencilOpSeparate_Idx))
    	{
            GL_ENTRY_PREV_TS(glStencilOpSeparate_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glStencilOpSeparate_wrp(face,sfail,dpfail,dppass);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glStencilOpSeparate_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glStencilOpSeparate_Idx) ++;

        GL_ENTRY_LAST_TS(glStencilOpSeparate_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glStencilOpSeparate_Idx),
				 GL_ENTRY_LAST_TS(glStencilOpSeparate_Idx));


        if(last_diff > 1000000000){
            printf("glStencilOpSeparate %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glStencilOpSeparate_Idx),
	             GL_ENTRY_CALL_TIME(glStencilOpSeparate_Idx),
	             GL_ENTRY_CALL_TIME(glStencilOpSeparate_Idx) /
	             GL_ENTRY_CALL_COUNT(glStencilOpSeparate_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glStencilOpSeparate_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glStencilOpSeparate_Idx) = 0;
             GL_ENTRY_CALL_TIME(glStencilOpSeparate_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glStencilOpSeparate_Idx) = get_ts();
        }


	

}