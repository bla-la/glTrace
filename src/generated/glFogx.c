#include <glTraceCommon.h>
#include <generated.h>

#define glFogx_wrp						\
    ((void  (*)(GLenum pname,GLfixed param                                        \
    ))GL_ENTRY_PTR(glFogx_Idx))


GLAPI void  APIENTRY glFogx(GLenum pname,GLfixed param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glFogx_Idx))
	{
            GL_ENTRY_PTR(glFogx_Idx) = dlsym(RTLD_NEXT,"glFogx");
            if(!GL_ENTRY_PTR(glFogx_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glFogx_Idx))
    	{
            GL_ENTRY_PREV_TS(glFogx_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFogx_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFogx_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFogx_Idx) ++;

        GL_ENTRY_LAST_TS(glFogx_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFogx_Idx),
				 GL_ENTRY_LAST_TS(glFogx_Idx));
        if(last_diff > 1000000000){
            printf("glFogx %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFogx_Idx),
	             GL_ENTRY_CALL_TIME(glFogx_Idx),
	             GL_ENTRY_CALL_TIME(glFogx_Idx) /
	             GL_ENTRY_CALL_COUNT(glFogx_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFogx_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFogx_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFogx_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFogx_Idx) = get_ts();
        }


	

}