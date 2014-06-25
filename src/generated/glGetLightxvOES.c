#include <glTraceCommon.h>
#include <generated.h>

#define glGetLightxvOES_wrp						\
    ((void  (*)(GLenum light,GLenum pname,GLfixed *params                                        \
    ))GL_ENTRY_PTR(glGetLightxvOES_Idx))


GLAPI void  APIENTRY glGetLightxvOES(GLenum light,GLenum pname,GLfixed *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetLightxvOES_Idx))
	{
            GL_ENTRY_PTR(glGetLightxvOES_Idx) = dlsym(RTLD_NEXT,"glGetLightxvOES");
            if(!GL_ENTRY_PTR(glGetLightxvOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetLightxvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetLightxvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetLightxvOES_wrp(light,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetLightxvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetLightxvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glGetLightxvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetLightxvOES_Idx),
				 GL_ENTRY_LAST_TS(glGetLightxvOES_Idx));
        if(last_diff > 1000000000){
            printf("glGetLightxvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetLightxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetLightxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetLightxvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetLightxvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetLightxvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetLightxvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetLightxvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetLightxvOES_Idx) = get_ts();
        }


	

}