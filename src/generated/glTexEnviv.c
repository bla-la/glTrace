#include <glTraceCommon.h>
#include <generated.h>

#define glTexEnviv_wrp						\
    ((void  (*)(GLenum target,GLenum pname,const GLint *params                                        \
    ))GL_ENTRY_PTR(glTexEnviv_Idx))


GLAPI void  APIENTRY glTexEnviv(GLenum target,GLenum pname,const GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexEnviv_Idx))
	{
            GL_ENTRY_PTR(glTexEnviv_Idx) = dlsym(RTLD_NEXT,"glTexEnviv");
            if(!GL_ENTRY_PTR(glTexEnviv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexEnviv_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexEnviv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexEnviv_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexEnviv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexEnviv_Idx) ++;

        GL_ENTRY_LAST_TS(glTexEnviv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexEnviv_Idx),
				 GL_ENTRY_LAST_TS(glTexEnviv_Idx));
        if(last_diff > 1000000000){
            printf("glTexEnviv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexEnviv_Idx),
	             GL_ENTRY_CALL_TIME(glTexEnviv_Idx),
	             GL_ENTRY_CALL_TIME(glTexEnviv_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexEnviv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexEnviv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexEnviv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexEnviv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexEnviv_Idx) = get_ts();
        }


	

}