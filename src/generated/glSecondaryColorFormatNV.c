#include <glTraceCommon.h>
#include <generated.h>

#define glSecondaryColorFormatNV_wrp						\
    ((void  (*)(GLint size,GLenum type,GLsizei stride                                        \
    ))GL_ENTRY_PTR(glSecondaryColorFormatNV_Idx))


GLAPI void  APIENTRY glSecondaryColorFormatNV(GLint size,GLenum type,GLsizei stride)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSecondaryColorFormatNV_Idx))
	{
            GL_ENTRY_PTR(glSecondaryColorFormatNV_Idx) = dlsym(RTLD_NEXT,"glSecondaryColorFormatNV");
            if(!GL_ENTRY_PTR(glSecondaryColorFormatNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSecondaryColorFormatNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glSecondaryColorFormatNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSecondaryColorFormatNV_wrp(size,type,stride);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSecondaryColorFormatNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSecondaryColorFormatNV_Idx) ++;

        GL_ENTRY_LAST_TS(glSecondaryColorFormatNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSecondaryColorFormatNV_Idx),
				 GL_ENTRY_LAST_TS(glSecondaryColorFormatNV_Idx));
        if(last_diff > 1000000000){
            printf("glSecondaryColorFormatNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSecondaryColorFormatNV_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColorFormatNV_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColorFormatNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glSecondaryColorFormatNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSecondaryColorFormatNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSecondaryColorFormatNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSecondaryColorFormatNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSecondaryColorFormatNV_Idx) = get_ts();
        }


	

}