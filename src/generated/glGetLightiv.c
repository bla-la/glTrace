#include <glTraceCommon.h>
#include <generated.h>

#define glGetLightiv_wrp						\
    ((void  (*)(GLenum light,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetLightiv_Idx))


GLAPI void  APIENTRY glGetLightiv(GLenum light,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetLightiv_Idx))
	{
            GL_ENTRY_PTR(glGetLightiv_Idx) = dlsym(RTLD_NEXT,"glGetLightiv");
            if(!GL_ENTRY_PTR(glGetLightiv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetLightiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetLightiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetLightiv_wrp(light,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetLightiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetLightiv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetLightiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetLightiv_Idx),
				 GL_ENTRY_LAST_TS(glGetLightiv_Idx));
        if(last_diff > 1000000000){
            printf("glGetLightiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetLightiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetLightiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetLightiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetLightiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetLightiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetLightiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetLightiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetLightiv_Idx) = get_ts();
        }


	

}