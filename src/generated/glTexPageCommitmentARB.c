#include <glTraceCommon.h>
#include <generated.h>

#define glTexPageCommitmentARB_wrp						\
    ((void  (*)(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLboolean resident                                        \
    ))GL_ENTRY_PTR(glTexPageCommitmentARB_Idx))


GLAPI void  APIENTRY glTexPageCommitmentARB(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLboolean resident)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexPageCommitmentARB_Idx))
	{
            GL_ENTRY_PTR(glTexPageCommitmentARB_Idx) = dlsym(RTLD_NEXT,"glTexPageCommitmentARB");
            if(!GL_ENTRY_PTR(glTexPageCommitmentARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexPageCommitmentARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexPageCommitmentARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexPageCommitmentARB_wrp(target,level,xoffset,yoffset,zoffset,width,height,depth,resident);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexPageCommitmentARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexPageCommitmentARB_Idx) ++;

        GL_ENTRY_LAST_TS(glTexPageCommitmentARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexPageCommitmentARB_Idx),
				 GL_ENTRY_LAST_TS(glTexPageCommitmentARB_Idx));
        if(last_diff > 1000000000){
            printf("glTexPageCommitmentARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexPageCommitmentARB_Idx),
	             GL_ENTRY_CALL_TIME(glTexPageCommitmentARB_Idx),
	             GL_ENTRY_CALL_TIME(glTexPageCommitmentARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexPageCommitmentARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexPageCommitmentARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexPageCommitmentARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexPageCommitmentARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexPageCommitmentARB_Idx) = get_ts();
        }


	

}