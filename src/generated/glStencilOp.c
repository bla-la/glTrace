#include <glTraceCommon.h>
#include <generated.h>

#define glStencilOp_wrp						\
    ((void  (*)(GLenum fail,GLenum zfail,GLenum zpass                                        \
    ))GL_ENTRY_PTR(glStencilOp_Idx))


GLAPI void  APIENTRY glStencilOp(GLenum fail,GLenum zfail,GLenum zpass)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glStencilOp_Idx))
    	{
            GL_ENTRY_PREV_TS(glStencilOp_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glStencilOp_wrp(fail,zfail,zpass);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glStencilOp_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glStencilOp_Idx) ++;

        GL_ENTRY_LAST_TS(glStencilOp_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glStencilOp_Idx),
				 GL_ENTRY_LAST_TS(glStencilOp_Idx));


        if(last_diff > 1000000000){
            printf("glStencilOp %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glStencilOp_Idx),
	             GL_ENTRY_CALL_TIME(glStencilOp_Idx),
	             GL_ENTRY_CALL_TIME(glStencilOp_Idx) /
	             GL_ENTRY_CALL_COUNT(glStencilOp_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glStencilOp_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glStencilOp_Idx) = 0;
             GL_ENTRY_CALL_TIME(glStencilOp_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glStencilOp_Idx) = get_ts();
        }


	

}