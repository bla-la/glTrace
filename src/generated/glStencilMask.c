#include <glTraceCommon.h>
#include <generated.h>

#define glStencilMask_wrp						\
    ((void  (*)(GLuint mask                                        \
    ))GL_ENTRY_PTR(glStencilMask_Idx))


GLAPI void  APIENTRY glStencilMask(GLuint mask)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glStencilMask_Idx))
	{
            GL_ENTRY_PTR(glStencilMask_Idx) = dlsym(RTLD_NEXT,"glStencilMask");
            if(!GL_ENTRY_PTR(glStencilMask_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glStencilMask_Idx))
    	{
            GL_ENTRY_PREV_TS(glStencilMask_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glStencilMask_wrp(mask);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glStencilMask_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glStencilMask_Idx) ++;

        GL_ENTRY_LAST_TS(glStencilMask_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glStencilMask_Idx),
				 GL_ENTRY_LAST_TS(glStencilMask_Idx));
        if(last_diff > 1000000000){
            printf("glStencilMask %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glStencilMask_Idx),
	             GL_ENTRY_CALL_TIME(glStencilMask_Idx),
	             GL_ENTRY_CALL_TIME(glStencilMask_Idx) /
	             GL_ENTRY_CALL_COUNT(glStencilMask_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glStencilMask_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glStencilMask_Idx) = 0;
             GL_ENTRY_CALL_TIME(glStencilMask_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glStencilMask_Idx) = get_ts();
        }


	

}