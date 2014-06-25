#include <glTraceCommon.h>
#include <generated.h>

#define glTbufferMask3DFX_wrp						\
    ((void  (*)(GLuint mask                                        \
    ))GL_ENTRY_PTR(glTbufferMask3DFX_Idx))


GLAPI void  APIENTRY glTbufferMask3DFX(GLuint mask)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTbufferMask3DFX_Idx))
	{
            GL_ENTRY_PTR(glTbufferMask3DFX_Idx) = dlsym(RTLD_NEXT,"glTbufferMask3DFX");
            if(!GL_ENTRY_PTR(glTbufferMask3DFX_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTbufferMask3DFX_Idx))
    	{
            GL_ENTRY_PREV_TS(glTbufferMask3DFX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTbufferMask3DFX_wrp(mask);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTbufferMask3DFX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTbufferMask3DFX_Idx) ++;

        GL_ENTRY_LAST_TS(glTbufferMask3DFX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTbufferMask3DFX_Idx),
				 GL_ENTRY_LAST_TS(glTbufferMask3DFX_Idx));
        if(last_diff > 1000000000){
            printf("glTbufferMask3DFX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTbufferMask3DFX_Idx),
	             GL_ENTRY_CALL_TIME(glTbufferMask3DFX_Idx),
	             GL_ENTRY_CALL_TIME(glTbufferMask3DFX_Idx) /
	             GL_ENTRY_CALL_COUNT(glTbufferMask3DFX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTbufferMask3DFX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTbufferMask3DFX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTbufferMask3DFX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTbufferMask3DFX_Idx) = get_ts();
        }


	

}