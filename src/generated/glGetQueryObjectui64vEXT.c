#include <glTraceCommon.h>
#include <generated.h>

#define glGetQueryObjectui64vEXT_wrp						\
    ((void  (*)(GLuint id,GLenum pname,GLuint64 *params                                        \
    ))GL_ENTRY_PTR(glGetQueryObjectui64vEXT_Idx))


GLAPI void  APIENTRY glGetQueryObjectui64vEXT(GLuint id,GLenum pname,GLuint64 *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetQueryObjectui64vEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetQueryObjectui64vEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetQueryObjectui64vEXT_wrp(id,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetQueryObjectui64vEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetQueryObjectui64vEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetQueryObjectui64vEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetQueryObjectui64vEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetQueryObjectui64vEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetQueryObjectui64vEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetQueryObjectui64vEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetQueryObjectui64vEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetQueryObjectui64vEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetQueryObjectui64vEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetQueryObjectui64vEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetQueryObjectui64vEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetQueryObjectui64vEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetQueryObjectui64vEXT_Idx) = get_ts();
        }


	

}