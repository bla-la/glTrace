#include <glTraceCommon.h>
#include <generated.h>

#define glGetVideoivNV_wrp						\
    ((void  (*)(GLuint video_slot,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetVideoivNV_Idx))


GLAPI void  APIENTRY glGetVideoivNV(GLuint video_slot,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetVideoivNV_Idx))
	{
            GL_ENTRY_PTR(glGetVideoivNV_Idx) = dlsym(RTLD_NEXT,"glGetVideoivNV");
            if(!GL_ENTRY_PTR(glGetVideoivNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetVideoivNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVideoivNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVideoivNV_wrp(video_slot,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVideoivNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVideoivNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVideoivNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVideoivNV_Idx),
				 GL_ENTRY_LAST_TS(glGetVideoivNV_Idx));
        if(last_diff > 1000000000){
            printf("glGetVideoivNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVideoivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetVideoivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetVideoivNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVideoivNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVideoivNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVideoivNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVideoivNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVideoivNV_Idx) = get_ts();
        }


	

}