#include <glTraceCommon.h>
#include <generated.h>

#define glGetQueryiv_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetQueryiv_Idx))


GLAPI void  APIENTRY glGetQueryiv(GLenum target,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetQueryiv_Idx))
	{
            GL_ENTRY_PTR(glGetQueryiv_Idx) = dlsym(RTLD_NEXT,"glGetQueryiv");
            if(!GL_ENTRY_PTR(glGetQueryiv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetQueryiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetQueryiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetQueryiv_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetQueryiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetQueryiv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetQueryiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetQueryiv_Idx),
				 GL_ENTRY_LAST_TS(glGetQueryiv_Idx));
        if(last_diff > 1000000000){
            printf("glGetQueryiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetQueryiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetQueryiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetQueryiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetQueryiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetQueryiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetQueryiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetQueryiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetQueryiv_Idx) = get_ts();
        }


	

}