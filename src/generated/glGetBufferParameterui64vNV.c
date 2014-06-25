#include <glTraceCommon.h>
#include <generated.h>

#define glGetBufferParameterui64vNV_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLuint64EXT *params                                        \
    ))GL_ENTRY_PTR(glGetBufferParameterui64vNV_Idx))


GLAPI void  APIENTRY glGetBufferParameterui64vNV(GLenum target,GLenum pname,GLuint64EXT *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetBufferParameterui64vNV_Idx))
	{
            GL_ENTRY_PTR(glGetBufferParameterui64vNV_Idx) = dlsym(RTLD_NEXT,"glGetBufferParameterui64vNV");
            if(!GL_ENTRY_PTR(glGetBufferParameterui64vNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetBufferParameterui64vNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetBufferParameterui64vNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetBufferParameterui64vNV_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetBufferParameterui64vNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetBufferParameterui64vNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetBufferParameterui64vNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetBufferParameterui64vNV_Idx),
				 GL_ENTRY_LAST_TS(glGetBufferParameterui64vNV_Idx));
        if(last_diff > 1000000000){
            printf("glGetBufferParameterui64vNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetBufferParameterui64vNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetBufferParameterui64vNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetBufferParameterui64vNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetBufferParameterui64vNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetBufferParameterui64vNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetBufferParameterui64vNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetBufferParameterui64vNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetBufferParameterui64vNV_Idx) = get_ts();
        }


	

}