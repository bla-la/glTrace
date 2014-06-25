#include <glTraceCommon.h>
#include <generated.h>

#define glLightiv_wrp						\
    ((void  (*)(GLenum light,GLenum pname,const GLint *params                                        \
    ))GL_ENTRY_PTR(glLightiv_Idx))


GLAPI void  APIENTRY glLightiv(GLenum light,GLenum pname,const GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glLightiv_Idx))
	{
            GL_ENTRY_PTR(glLightiv_Idx) = dlsym(RTLD_NEXT,"glLightiv");
            if(!GL_ENTRY_PTR(glLightiv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glLightiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glLightiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLightiv_wrp(light,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLightiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLightiv_Idx) ++;

        GL_ENTRY_LAST_TS(glLightiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLightiv_Idx),
				 GL_ENTRY_LAST_TS(glLightiv_Idx));
        if(last_diff > 1000000000){
            printf("glLightiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLightiv_Idx),
	             GL_ENTRY_CALL_TIME(glLightiv_Idx),
	             GL_ENTRY_CALL_TIME(glLightiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glLightiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLightiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLightiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLightiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLightiv_Idx) = get_ts();
        }


	

}