#include <glTraceCommon.h>
#include <generated.h>

#define glSpriteParameterivSGIX_wrp						\
    ((void  (*)(GLenum pname,const GLint *params                                        \
    ))GL_ENTRY_PTR(glSpriteParameterivSGIX_Idx))


GLAPI void  APIENTRY glSpriteParameterivSGIX(GLenum pname,const GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glSpriteParameterivSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glSpriteParameterivSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSpriteParameterivSGIX_wrp(pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSpriteParameterivSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSpriteParameterivSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glSpriteParameterivSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSpriteParameterivSGIX_Idx),
				 GL_ENTRY_LAST_TS(glSpriteParameterivSGIX_Idx));


        if(last_diff > 1000000000){
            printf("glSpriteParameterivSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSpriteParameterivSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glSpriteParameterivSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glSpriteParameterivSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glSpriteParameterivSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSpriteParameterivSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSpriteParameterivSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSpriteParameterivSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSpriteParameterivSGIX_Idx) = get_ts();
        }


	

}