#include <glTraceCommon.h>
#include <generated.h>

#define glVertexFormatNV_wrp						\
    ((void  (*)(GLint size,GLenum type,GLsizei stride                                        \
    ))GL_ENTRY_PTR(glVertexFormatNV_Idx))


GLAPI void  APIENTRY glVertexFormatNV(GLint size,GLenum type,GLsizei stride)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexFormatNV_Idx))
	{
            GL_ENTRY_PTR(glVertexFormatNV_Idx) = dlsym(RTLD_NEXT,"glVertexFormatNV");
            if(!GL_ENTRY_PTR(glVertexFormatNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexFormatNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexFormatNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexFormatNV_wrp(size,type,stride);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexFormatNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexFormatNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexFormatNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexFormatNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexFormatNV_Idx));
        if(last_diff > 1000000000){
            printf("glVertexFormatNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexFormatNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexFormatNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexFormatNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexFormatNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexFormatNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexFormatNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexFormatNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexFormatNV_Idx) = get_ts();
        }


	

}