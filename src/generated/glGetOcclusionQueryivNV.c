#include <glTraceCommon.h>
#include <generated.h>

#define glGetOcclusionQueryivNV_wrp						\
    ((void  (*)(GLuint id,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetOcclusionQueryivNV_Idx))


GLAPI void  APIENTRY glGetOcclusionQueryivNV(GLuint id,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetOcclusionQueryivNV_Idx))
	{
            GL_ENTRY_PTR(glGetOcclusionQueryivNV_Idx) = dlsym(RTLD_NEXT,"glGetOcclusionQueryivNV");
            if(!GL_ENTRY_PTR(glGetOcclusionQueryivNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetOcclusionQueryivNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetOcclusionQueryivNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetOcclusionQueryivNV_wrp(id,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetOcclusionQueryivNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetOcclusionQueryivNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetOcclusionQueryivNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetOcclusionQueryivNV_Idx),
				 GL_ENTRY_LAST_TS(glGetOcclusionQueryivNV_Idx));
        if(last_diff > 1000000000){
            printf("glGetOcclusionQueryivNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetOcclusionQueryivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetOcclusionQueryivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetOcclusionQueryivNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetOcclusionQueryivNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetOcclusionQueryivNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetOcclusionQueryivNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetOcclusionQueryivNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetOcclusionQueryivNV_Idx) = get_ts();
        }


	

}