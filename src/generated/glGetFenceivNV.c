#include <glTraceCommon.h>
#include <generated.h>

#define glGetFenceivNV_wrp						\
    ((void  (*)(GLuint fence,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetFenceivNV_Idx))


GLAPI void  APIENTRY glGetFenceivNV(GLuint fence,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetFenceivNV_Idx))
	{
            GL_ENTRY_PTR(glGetFenceivNV_Idx) = dlsym(RTLD_NEXT,"glGetFenceivNV");
            if(!GL_ENTRY_PTR(glGetFenceivNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetFenceivNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetFenceivNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetFenceivNV_wrp(fence,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetFenceivNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetFenceivNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetFenceivNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetFenceivNV_Idx),
				 GL_ENTRY_LAST_TS(glGetFenceivNV_Idx));
        if(last_diff > 1000000000){
            printf("glGetFenceivNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetFenceivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetFenceivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetFenceivNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetFenceivNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetFenceivNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetFenceivNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetFenceivNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetFenceivNV_Idx) = get_ts();
        }


	

}