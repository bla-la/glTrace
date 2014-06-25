#include <glTraceCommon.h>
#include <generated.h>

#define glPathStencilFuncNV_wrp						\
    ((void  (*)(GLenum func,GLint ref,GLuint mask                                        \
    ))GL_ENTRY_PTR(glPathStencilFuncNV_Idx))


GLAPI void  APIENTRY glPathStencilFuncNV(GLenum func,GLint ref,GLuint mask)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPathStencilFuncNV_Idx))
	{
            GL_ENTRY_PTR(glPathStencilFuncNV_Idx) = dlsym(RTLD_NEXT,"glPathStencilFuncNV");
            if(!GL_ENTRY_PTR(glPathStencilFuncNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPathStencilFuncNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glPathStencilFuncNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPathStencilFuncNV_wrp(func,ref,mask);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPathStencilFuncNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPathStencilFuncNV_Idx) ++;

        GL_ENTRY_LAST_TS(glPathStencilFuncNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPathStencilFuncNV_Idx),
				 GL_ENTRY_LAST_TS(glPathStencilFuncNV_Idx));
        if(last_diff > 1000000000){
            printf("glPathStencilFuncNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPathStencilFuncNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathStencilFuncNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathStencilFuncNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glPathStencilFuncNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPathStencilFuncNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPathStencilFuncNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPathStencilFuncNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPathStencilFuncNV_Idx) = get_ts();
        }


	

}