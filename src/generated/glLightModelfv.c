#include <glTraceCommon.h>
#include <generated.h>

#define glLightModelfv_wrp						\
    ((void  (*)(GLenum pname,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glLightModelfv_Idx))


GLAPI void  APIENTRY glLightModelfv(GLenum pname,const GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glLightModelfv_Idx))
	{
            GL_ENTRY_PTR(glLightModelfv_Idx) = dlsym(RTLD_NEXT,"glLightModelfv");
            if(!GL_ENTRY_PTR(glLightModelfv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glLightModelfv_Idx))
    	{
            GL_ENTRY_PREV_TS(glLightModelfv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLightModelfv_wrp(pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLightModelfv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLightModelfv_Idx) ++;

        GL_ENTRY_LAST_TS(glLightModelfv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLightModelfv_Idx),
				 GL_ENTRY_LAST_TS(glLightModelfv_Idx));
        if(last_diff > 1000000000){
            printf("glLightModelfv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLightModelfv_Idx),
	             GL_ENTRY_CALL_TIME(glLightModelfv_Idx),
	             GL_ENTRY_CALL_TIME(glLightModelfv_Idx) /
	             GL_ENTRY_CALL_COUNT(glLightModelfv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLightModelfv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLightModelfv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLightModelfv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLightModelfv_Idx) = get_ts();
        }


	

}