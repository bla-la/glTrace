#include <glTraceCommon.h>
#include <generated.h>

#define glGetProgramStringARB_wrp						\
    ((void  (*)(GLenum target,GLenum pname,void *string                                        \
    ))GL_ENTRY_PTR(glGetProgramStringARB_Idx))


GLAPI void  APIENTRY glGetProgramStringARB(GLenum target,GLenum pname,void *string)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetProgramStringARB_Idx))
	{
            GL_ENTRY_PTR(glGetProgramStringARB_Idx) = dlsym(RTLD_NEXT,"glGetProgramStringARB");
            if(!GL_ENTRY_PTR(glGetProgramStringARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetProgramStringARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetProgramStringARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetProgramStringARB_wrp(target,pname,string);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetProgramStringARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetProgramStringARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetProgramStringARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetProgramStringARB_Idx),
				 GL_ENTRY_LAST_TS(glGetProgramStringARB_Idx));
        if(last_diff > 1000000000){
            printf("glGetProgramStringARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetProgramStringARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramStringARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramStringARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetProgramStringARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetProgramStringARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetProgramStringARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetProgramStringARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetProgramStringARB_Idx) = get_ts();
        }


	

}