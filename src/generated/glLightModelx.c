#include <glTraceCommon.h>
#include <generated.h>

#define glLightModelx_wrp						\
    ((void  (*)(GLenum pname,GLfixed param                                        \
    ))GL_ENTRY_PTR(glLightModelx_Idx))


GLAPI void  APIENTRY glLightModelx(GLenum pname,GLfixed param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glLightModelx_Idx))
	{
            GL_ENTRY_PTR(glLightModelx_Idx) = dlsym(RTLD_NEXT,"glLightModelx");
            if(!GL_ENTRY_PTR(glLightModelx_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glLightModelx_Idx))
    	{
            GL_ENTRY_PREV_TS(glLightModelx_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLightModelx_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLightModelx_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLightModelx_Idx) ++;

        GL_ENTRY_LAST_TS(glLightModelx_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLightModelx_Idx),
				 GL_ENTRY_LAST_TS(glLightModelx_Idx));
        if(last_diff > 1000000000){
            printf("glLightModelx %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLightModelx_Idx),
	             GL_ENTRY_CALL_TIME(glLightModelx_Idx),
	             GL_ENTRY_CALL_TIME(glLightModelx_Idx) /
	             GL_ENTRY_CALL_COUNT(glLightModelx_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLightModelx_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLightModelx_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLightModelx_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLightModelx_Idx) = get_ts();
        }


	

}