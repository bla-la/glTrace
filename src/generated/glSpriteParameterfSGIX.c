#include <glTraceCommon.h>
#include <generated.h>

#define glSpriteParameterfSGIX_wrp						\
    ((void  (*)(GLenum pname,GLfloat param                                        \
    ))GL_ENTRY_PTR(glSpriteParameterfSGIX_Idx))


GLAPI void  APIENTRY glSpriteParameterfSGIX(GLenum pname,GLfloat param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSpriteParameterfSGIX_Idx))
	{
            GL_ENTRY_PTR(glSpriteParameterfSGIX_Idx) = dlsym(RTLD_NEXT,"glSpriteParameterfSGIX");
            if(!GL_ENTRY_PTR(glSpriteParameterfSGIX_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSpriteParameterfSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glSpriteParameterfSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSpriteParameterfSGIX_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSpriteParameterfSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSpriteParameterfSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glSpriteParameterfSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSpriteParameterfSGIX_Idx),
				 GL_ENTRY_LAST_TS(glSpriteParameterfSGIX_Idx));
        if(last_diff > 1000000000){
            printf("glSpriteParameterfSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSpriteParameterfSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glSpriteParameterfSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glSpriteParameterfSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glSpriteParameterfSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSpriteParameterfSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSpriteParameterfSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSpriteParameterfSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSpriteParameterfSGIX_Idx) = get_ts();
        }


	

}