#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoordFormatNV_wrp						\
    ((void  (*)(GLint size,GLenum type,GLsizei stride                                        \
    ))GL_ENTRY_PTR(glTexCoordFormatNV_Idx))


GLAPI void  APIENTRY glTexCoordFormatNV(GLint size,GLenum type,GLsizei stride)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexCoordFormatNV_Idx))
	{
            GL_ENTRY_PTR(glTexCoordFormatNV_Idx) = dlsym(RTLD_NEXT,"glTexCoordFormatNV");
            if(!GL_ENTRY_PTR(glTexCoordFormatNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexCoordFormatNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoordFormatNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoordFormatNV_wrp(size,type,stride);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoordFormatNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoordFormatNV_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoordFormatNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoordFormatNV_Idx),
				 GL_ENTRY_LAST_TS(glTexCoordFormatNV_Idx));
        if(last_diff > 1000000000){
            printf("glTexCoordFormatNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoordFormatNV_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoordFormatNV_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoordFormatNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoordFormatNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoordFormatNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoordFormatNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoordFormatNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoordFormatNV_Idx) = get_ts();
        }


	

}