#include <glTraceCommon.h>
#include <generated.h>

#define glProgramStringARB_wrp						\
    ((void  (*)(GLenum target,GLenum format,GLsizei len,const void *string                                        \
    ))GL_ENTRY_PTR(glProgramStringARB_Idx))


GLAPI void  APIENTRY glProgramStringARB(GLenum target,GLenum format,GLsizei len,const void *string)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramStringARB_Idx))
	{
            GL_ENTRY_PTR(glProgramStringARB_Idx) = dlsym(RTLD_NEXT,"glProgramStringARB");
            if(!GL_ENTRY_PTR(glProgramStringARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramStringARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramStringARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramStringARB_wrp(target,format,len,string);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramStringARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramStringARB_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramStringARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramStringARB_Idx),
				 GL_ENTRY_LAST_TS(glProgramStringARB_Idx));
        if(last_diff > 1000000000){
            printf("glProgramStringARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramStringARB_Idx),
	             GL_ENTRY_CALL_TIME(glProgramStringARB_Idx),
	             GL_ENTRY_CALL_TIME(glProgramStringARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramStringARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramStringARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramStringARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramStringARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramStringARB_Idx) = get_ts();
        }


	

}