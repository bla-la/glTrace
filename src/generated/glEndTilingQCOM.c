#include <glTraceCommon.h>
#include <generated.h>

#define glEndTilingQCOM_wrp						\
    ((void  (*)(GLbitfield preserveMask                                        \
    ))GL_ENTRY_PTR(glEndTilingQCOM_Idx))


GLAPI void  APIENTRY glEndTilingQCOM(GLbitfield preserveMask)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glEndTilingQCOM_Idx))
	{
            GL_ENTRY_PTR(glEndTilingQCOM_Idx) = dlsym(RTLD_NEXT,"glEndTilingQCOM");
            if(!GL_ENTRY_PTR(glEndTilingQCOM_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glEndTilingQCOM_Idx))
    	{
            GL_ENTRY_PREV_TS(glEndTilingQCOM_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEndTilingQCOM_wrp(preserveMask);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEndTilingQCOM_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEndTilingQCOM_Idx) ++;

        GL_ENTRY_LAST_TS(glEndTilingQCOM_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEndTilingQCOM_Idx),
				 GL_ENTRY_LAST_TS(glEndTilingQCOM_Idx));
        if(last_diff > 1000000000){
            printf("glEndTilingQCOM %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEndTilingQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glEndTilingQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glEndTilingQCOM_Idx) /
	             GL_ENTRY_CALL_COUNT(glEndTilingQCOM_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEndTilingQCOM_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEndTilingQCOM_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEndTilingQCOM_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEndTilingQCOM_Idx) = get_ts();
        }


	

}