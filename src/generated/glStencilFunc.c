#include <glTraceCommon.h>
#include <generated.h>

#define glStencilFunc_wrp						\
    ((void  (*)(GLenum func,GLint ref,GLuint mask                                        \
    ))GL_ENTRY_PTR(glStencilFunc_Idx))


GLAPI void  APIENTRY glStencilFunc(GLenum func,GLint ref,GLuint mask)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glStencilFunc_Idx))
	{
            GL_ENTRY_PTR(glStencilFunc_Idx) = dlsym(RTLD_NEXT,"glStencilFunc");
            if(!GL_ENTRY_PTR(glStencilFunc_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glStencilFunc_Idx))
    	{
            GL_ENTRY_PREV_TS(glStencilFunc_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glStencilFunc_wrp(func,ref,mask);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glStencilFunc_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glStencilFunc_Idx) ++;

        GL_ENTRY_LAST_TS(glStencilFunc_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glStencilFunc_Idx),
				 GL_ENTRY_LAST_TS(glStencilFunc_Idx));
        if(last_diff > 1000000000){
            printf("glStencilFunc %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glStencilFunc_Idx),
	             GL_ENTRY_CALL_TIME(glStencilFunc_Idx),
	             GL_ENTRY_CALL_TIME(glStencilFunc_Idx) /
	             GL_ENTRY_CALL_COUNT(glStencilFunc_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glStencilFunc_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glStencilFunc_Idx) = 0;
             GL_ENTRY_CALL_TIME(glStencilFunc_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glStencilFunc_Idx) = get_ts();
        }


	

}