#include <glTraceCommon.h>
#include <generated.h>

#define glGetVertexAttribPointervNV_wrp						\
    ((void  (*)(GLuint index,GLenum pname,void **pointer                                        \
    ))GL_ENTRY_PTR(glGetVertexAttribPointervNV_Idx))


GLAPI void  APIENTRY glGetVertexAttribPointervNV(GLuint index,GLenum pname,void **pointer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetVertexAttribPointervNV_Idx))
	{
            GL_ENTRY_PTR(glGetVertexAttribPointervNV_Idx) = dlsym(RTLD_NEXT,"glGetVertexAttribPointervNV");
            if(!GL_ENTRY_PTR(glGetVertexAttribPointervNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetVertexAttribPointervNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVertexAttribPointervNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVertexAttribPointervNV_wrp(index,pname,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVertexAttribPointervNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVertexAttribPointervNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVertexAttribPointervNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVertexAttribPointervNV_Idx),
				 GL_ENTRY_LAST_TS(glGetVertexAttribPointervNV_Idx));
        if(last_diff > 1000000000){
            printf("glGetVertexAttribPointervNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribPointervNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribPointervNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribPointervNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribPointervNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVertexAttribPointervNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVertexAttribPointervNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVertexAttribPointervNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVertexAttribPointervNV_Idx) = get_ts();
        }


	

}