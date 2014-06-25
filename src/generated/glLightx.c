#include <glTraceCommon.h>
#include <generated.h>

#define glLightx_wrp						\
    ((void  (*)(GLenum light,GLenum pname,GLfixed param                                        \
    ))GL_ENTRY_PTR(glLightx_Idx))


GLAPI void  APIENTRY glLightx(GLenum light,GLenum pname,GLfixed param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glLightx_Idx))
	{
            GL_ENTRY_PTR(glLightx_Idx) = dlsym(RTLD_NEXT,"glLightx");
            if(!GL_ENTRY_PTR(glLightx_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glLightx_Idx))
    	{
            GL_ENTRY_PREV_TS(glLightx_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLightx_wrp(light,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLightx_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLightx_Idx) ++;

        GL_ENTRY_LAST_TS(glLightx_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLightx_Idx),
				 GL_ENTRY_LAST_TS(glLightx_Idx));
        if(last_diff > 1000000000){
            printf("glLightx %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLightx_Idx),
	             GL_ENTRY_CALL_TIME(glLightx_Idx),
	             GL_ENTRY_CALL_TIME(glLightx_Idx) /
	             GL_ENTRY_CALL_COUNT(glLightx_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLightx_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLightx_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLightx_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLightx_Idx) = get_ts();
        }


	

}