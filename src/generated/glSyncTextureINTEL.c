#include <glTraceCommon.h>
#include <generated.h>

#define glSyncTextureINTEL_wrp						\
    ((void  (*)(GLuint texture                                        \
    ))GL_ENTRY_PTR(glSyncTextureINTEL_Idx))


GLAPI void  APIENTRY glSyncTextureINTEL(GLuint texture)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSyncTextureINTEL_Idx))
	{
            GL_ENTRY_PTR(glSyncTextureINTEL_Idx) = dlsym(RTLD_NEXT,"glSyncTextureINTEL");
            if(!GL_ENTRY_PTR(glSyncTextureINTEL_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSyncTextureINTEL_Idx))
    	{
            GL_ENTRY_PREV_TS(glSyncTextureINTEL_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSyncTextureINTEL_wrp(texture);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSyncTextureINTEL_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSyncTextureINTEL_Idx) ++;

        GL_ENTRY_LAST_TS(glSyncTextureINTEL_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSyncTextureINTEL_Idx),
				 GL_ENTRY_LAST_TS(glSyncTextureINTEL_Idx));
        if(last_diff > 1000000000){
            printf("glSyncTextureINTEL %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSyncTextureINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glSyncTextureINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glSyncTextureINTEL_Idx) /
	             GL_ENTRY_CALL_COUNT(glSyncTextureINTEL_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSyncTextureINTEL_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSyncTextureINTEL_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSyncTextureINTEL_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSyncTextureINTEL_Idx) = get_ts();
        }


	

}