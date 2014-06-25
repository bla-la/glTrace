#include <glTraceCommon.h>
#include <generated.h>

#define glStencilFuncSeparateATI_wrp						\
    ((void  (*)(GLenum frontfunc,GLenum backfunc,GLint ref,GLuint mask                                        \
    ))GL_ENTRY_PTR(glStencilFuncSeparateATI_Idx))


GLAPI void  APIENTRY glStencilFuncSeparateATI(GLenum frontfunc,GLenum backfunc,GLint ref,GLuint mask)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glStencilFuncSeparateATI_Idx))
	{
            GL_ENTRY_PTR(glStencilFuncSeparateATI_Idx) = dlsym(RTLD_NEXT,"glStencilFuncSeparateATI");
            if(!GL_ENTRY_PTR(glStencilFuncSeparateATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glStencilFuncSeparateATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glStencilFuncSeparateATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glStencilFuncSeparateATI_wrp(frontfunc,backfunc,ref,mask);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glStencilFuncSeparateATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glStencilFuncSeparateATI_Idx) ++;

        GL_ENTRY_LAST_TS(glStencilFuncSeparateATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glStencilFuncSeparateATI_Idx),
				 GL_ENTRY_LAST_TS(glStencilFuncSeparateATI_Idx));
        if(last_diff > 1000000000){
            printf("glStencilFuncSeparateATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glStencilFuncSeparateATI_Idx),
	             GL_ENTRY_CALL_TIME(glStencilFuncSeparateATI_Idx),
	             GL_ENTRY_CALL_TIME(glStencilFuncSeparateATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glStencilFuncSeparateATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glStencilFuncSeparateATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glStencilFuncSeparateATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glStencilFuncSeparateATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glStencilFuncSeparateATI_Idx) = get_ts();
        }


	

}