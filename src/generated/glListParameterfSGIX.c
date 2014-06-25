#include <glTraceCommon.h>
#include <generated.h>

#define glListParameterfSGIX_wrp						\
    ((void  (*)(GLuint list,GLenum pname,GLfloat param                                        \
    ))GL_ENTRY_PTR(glListParameterfSGIX_Idx))


GLAPI void  APIENTRY glListParameterfSGIX(GLuint list,GLenum pname,GLfloat param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glListParameterfSGIX_Idx))
	{
            GL_ENTRY_PTR(glListParameterfSGIX_Idx) = dlsym(RTLD_NEXT,"glListParameterfSGIX");
            if(!GL_ENTRY_PTR(glListParameterfSGIX_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glListParameterfSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glListParameterfSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glListParameterfSGIX_wrp(list,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glListParameterfSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glListParameterfSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glListParameterfSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glListParameterfSGIX_Idx),
				 GL_ENTRY_LAST_TS(glListParameterfSGIX_Idx));
        if(last_diff > 1000000000){
            printf("glListParameterfSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glListParameterfSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glListParameterfSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glListParameterfSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glListParameterfSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glListParameterfSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glListParameterfSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glListParameterfSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glListParameterfSGIX_Idx) = get_ts();
        }


	

}