#include <glTraceCommon.h>
#include <generated.h>

#define glGetNamedBufferParameterui64vNV_wrp						\
    ((void  (*)(GLuint buffer,GLenum pname,GLuint64EXT *params                                        \
    ))GL_ENTRY_PTR(glGetNamedBufferParameterui64vNV_Idx))


GLAPI void  APIENTRY glGetNamedBufferParameterui64vNV(GLuint buffer,GLenum pname,GLuint64EXT *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetNamedBufferParameterui64vNV_Idx))
	{
            GL_ENTRY_PTR(glGetNamedBufferParameterui64vNV_Idx) = dlsym(RTLD_NEXT,"glGetNamedBufferParameterui64vNV");
            if(!GL_ENTRY_PTR(glGetNamedBufferParameterui64vNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetNamedBufferParameterui64vNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetNamedBufferParameterui64vNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetNamedBufferParameterui64vNV_wrp(buffer,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetNamedBufferParameterui64vNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetNamedBufferParameterui64vNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetNamedBufferParameterui64vNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetNamedBufferParameterui64vNV_Idx),
				 GL_ENTRY_LAST_TS(glGetNamedBufferParameterui64vNV_Idx));
        if(last_diff > 1000000000){
            printf("glGetNamedBufferParameterui64vNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetNamedBufferParameterui64vNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetNamedBufferParameterui64vNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetNamedBufferParameterui64vNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetNamedBufferParameterui64vNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetNamedBufferParameterui64vNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetNamedBufferParameterui64vNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetNamedBufferParameterui64vNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetNamedBufferParameterui64vNV_Idx) = get_ts();
        }


	

}