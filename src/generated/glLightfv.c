#include <glTraceCommon.h>
#include <generated.h>

#define glLightfv_wrp						\
    ((void  (*)(GLenum light,GLenum pname,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glLightfv_Idx))


GLAPI void  APIENTRY glLightfv(GLenum light,GLenum pname,const GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glLightfv_Idx))
	{
            GL_ENTRY_PTR(glLightfv_Idx) = dlsym(RTLD_NEXT,"glLightfv");
            if(!GL_ENTRY_PTR(glLightfv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glLightfv_Idx))
    	{
            GL_ENTRY_PREV_TS(glLightfv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLightfv_wrp(light,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLightfv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLightfv_Idx) ++;

        GL_ENTRY_LAST_TS(glLightfv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLightfv_Idx),
				 GL_ENTRY_LAST_TS(glLightfv_Idx));
        if(last_diff > 1000000000){
            printf("glLightfv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLightfv_Idx),
	             GL_ENTRY_CALL_TIME(glLightfv_Idx),
	             GL_ENTRY_CALL_TIME(glLightfv_Idx) /
	             GL_ENTRY_CALL_COUNT(glLightfv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLightfv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLightfv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLightfv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLightfv_Idx) = get_ts();
        }


	

}