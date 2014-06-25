#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribFormatNV_wrp						\
    ((void  (*)(GLuint index,GLint size,GLenum type,GLboolean normalized,GLsizei stride                                        \
    ))GL_ENTRY_PTR(glVertexAttribFormatNV_Idx))


GLAPI void  APIENTRY glVertexAttribFormatNV(GLuint index,GLint size,GLenum type,GLboolean normalized,GLsizei stride)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribFormatNV_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribFormatNV_Idx) = dlsym(RTLD_NEXT,"glVertexAttribFormatNV");
            if(!GL_ENTRY_PTR(glVertexAttribFormatNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribFormatNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribFormatNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribFormatNV_wrp(index,size,type,normalized,stride);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribFormatNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribFormatNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribFormatNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribFormatNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribFormatNV_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribFormatNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribFormatNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribFormatNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribFormatNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribFormatNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribFormatNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribFormatNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribFormatNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribFormatNV_Idx) = get_ts();
        }


	

}