#include <glTraceCommon.h>
#include <generated.h>

#define glStencilOpSeparateATI_wrp						\
    ((void  (*)(GLenum face,GLenum sfail,GLenum dpfail,GLenum dppass                                        \
    ))GL_ENTRY_PTR(glStencilOpSeparateATI_Idx))


GLAPI void  APIENTRY glStencilOpSeparateATI(GLenum face,GLenum sfail,GLenum dpfail,GLenum dppass)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glStencilOpSeparateATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glStencilOpSeparateATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glStencilOpSeparateATI_wrp(face,sfail,dpfail,dppass);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glStencilOpSeparateATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glStencilOpSeparateATI_Idx) ++;

        GL_ENTRY_LAST_TS(glStencilOpSeparateATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glStencilOpSeparateATI_Idx),
				 GL_ENTRY_LAST_TS(glStencilOpSeparateATI_Idx));


        if(last_diff > 1000000000){
            printf("glStencilOpSeparateATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glStencilOpSeparateATI_Idx),
	             GL_ENTRY_CALL_TIME(glStencilOpSeparateATI_Idx),
	             GL_ENTRY_CALL_TIME(glStencilOpSeparateATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glStencilOpSeparateATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glStencilOpSeparateATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glStencilOpSeparateATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glStencilOpSeparateATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glStencilOpSeparateATI_Idx) = get_ts();
        }


	

}