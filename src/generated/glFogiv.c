#include <glTraceCommon.h>
#include <generated.h>

#define glFogiv_wrp						\
    ((void  (*)(GLenum pname,const GLint *params                                        \
    ))GL_ENTRY_PTR(glFogiv_Idx))


GLAPI void  APIENTRY glFogiv(GLenum pname,const GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glFogiv_Idx))
	{
            GL_ENTRY_PTR(glFogiv_Idx) = dlsym(RTLD_NEXT,"glFogiv");
            if(!GL_ENTRY_PTR(glFogiv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glFogiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glFogiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFogiv_wrp(pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFogiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFogiv_Idx) ++;

        GL_ENTRY_LAST_TS(glFogiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFogiv_Idx),
				 GL_ENTRY_LAST_TS(glFogiv_Idx));
        if(last_diff > 1000000000){
            printf("glFogiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFogiv_Idx),
	             GL_ENTRY_CALL_TIME(glFogiv_Idx),
	             GL_ENTRY_CALL_TIME(glFogiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glFogiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFogiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFogiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFogiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFogiv_Idx) = get_ts();
        }


	

}