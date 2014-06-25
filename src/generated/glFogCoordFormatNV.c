#include <glTraceCommon.h>
#include <generated.h>

#define glFogCoordFormatNV_wrp						\
    ((void  (*)(GLenum type,GLsizei stride                                        \
    ))GL_ENTRY_PTR(glFogCoordFormatNV_Idx))


GLAPI void  APIENTRY glFogCoordFormatNV(GLenum type,GLsizei stride)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glFogCoordFormatNV_Idx))
	{
            GL_ENTRY_PTR(glFogCoordFormatNV_Idx) = dlsym(RTLD_NEXT,"glFogCoordFormatNV");
            if(!GL_ENTRY_PTR(glFogCoordFormatNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glFogCoordFormatNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glFogCoordFormatNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFogCoordFormatNV_wrp(type,stride);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFogCoordFormatNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFogCoordFormatNV_Idx) ++;

        GL_ENTRY_LAST_TS(glFogCoordFormatNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFogCoordFormatNV_Idx),
				 GL_ENTRY_LAST_TS(glFogCoordFormatNV_Idx));
        if(last_diff > 1000000000){
            printf("glFogCoordFormatNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFogCoordFormatNV_Idx),
	             GL_ENTRY_CALL_TIME(glFogCoordFormatNV_Idx),
	             GL_ENTRY_CALL_TIME(glFogCoordFormatNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glFogCoordFormatNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFogCoordFormatNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFogCoordFormatNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFogCoordFormatNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFogCoordFormatNV_Idx) = get_ts();
        }


	

}