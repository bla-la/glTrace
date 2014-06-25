#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribPointerNV_wrp						\
    ((void  (*)(GLuint index,GLint fsize,GLenum type,GLsizei stride,const void *pointer                                        \
    ))GL_ENTRY_PTR(glVertexAttribPointerNV_Idx))


GLAPI void  APIENTRY glVertexAttribPointerNV(GLuint index,GLint fsize,GLenum type,GLsizei stride,const void *pointer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribPointerNV_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribPointerNV_Idx) = dlsym(RTLD_NEXT,"glVertexAttribPointerNV");
            if(!GL_ENTRY_PTR(glVertexAttribPointerNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribPointerNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribPointerNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribPointerNV_wrp(index,fsize,type,stride,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribPointerNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribPointerNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribPointerNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribPointerNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribPointerNV_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribPointerNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribPointerNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribPointerNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribPointerNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribPointerNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribPointerNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribPointerNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribPointerNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribPointerNV_Idx) = get_ts();
        }


	

}