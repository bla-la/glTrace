#include <glTraceCommon.h>
#include <generated.h>

#define glLightxv_wrp						\
    ((void  (*)(GLenum light,GLenum pname,const GLfixed *params                                        \
    ))GL_ENTRY_PTR(glLightxv_Idx))


GLAPI void  APIENTRY glLightxv(GLenum light,GLenum pname,const GLfixed *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glLightxv_Idx))
	{
            GL_ENTRY_PTR(glLightxv_Idx) = dlsym(RTLD_NEXT,"glLightxv");
            if(!GL_ENTRY_PTR(glLightxv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glLightxv_Idx))
    	{
            GL_ENTRY_PREV_TS(glLightxv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLightxv_wrp(light,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLightxv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLightxv_Idx) ++;

        GL_ENTRY_LAST_TS(glLightxv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLightxv_Idx),
				 GL_ENTRY_LAST_TS(glLightxv_Idx));
        if(last_diff > 1000000000){
            printf("glLightxv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLightxv_Idx),
	             GL_ENTRY_CALL_TIME(glLightxv_Idx),
	             GL_ENTRY_CALL_TIME(glLightxv_Idx) /
	             GL_ENTRY_CALL_COUNT(glLightxv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLightxv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLightxv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLightxv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLightxv_Idx) = get_ts();
        }


	

}