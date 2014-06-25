#include <glTraceCommon.h>
#include <generated.h>

#define glGetVertexAttribPointerv_wrp						\
    ((void  (*)(GLuint index,GLenum pname,void **pointer                                        \
    ))GL_ENTRY_PTR(glGetVertexAttribPointerv_Idx))


GLAPI void  APIENTRY glGetVertexAttribPointerv(GLuint index,GLenum pname,void **pointer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetVertexAttribPointerv_Idx))
	{
            GL_ENTRY_PTR(glGetVertexAttribPointerv_Idx) = dlsym(RTLD_NEXT,"glGetVertexAttribPointerv");
            if(!GL_ENTRY_PTR(glGetVertexAttribPointerv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetVertexAttribPointerv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVertexAttribPointerv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVertexAttribPointerv_wrp(index,pname,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVertexAttribPointerv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVertexAttribPointerv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVertexAttribPointerv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVertexAttribPointerv_Idx),
				 GL_ENTRY_LAST_TS(glGetVertexAttribPointerv_Idx));
        if(last_diff > 1000000000){
            printf("glGetVertexAttribPointerv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribPointerv_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribPointerv_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribPointerv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribPointerv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVertexAttribPointerv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVertexAttribPointerv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVertexAttribPointerv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVertexAttribPointerv_Idx) = get_ts();
        }


	

}