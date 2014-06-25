#include <glTraceCommon.h>
#include <generated.h>

#define glGetnMinmaxARB_wrp						\
    ((void  (*)(GLenum target,GLboolean reset,GLenum format,GLenum type,GLsizei bufSize,void *values                                        \
    ))GL_ENTRY_PTR(glGetnMinmaxARB_Idx))


GLAPI void  APIENTRY glGetnMinmaxARB(GLenum target,GLboolean reset,GLenum format,GLenum type,GLsizei bufSize,void *values)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetnMinmaxARB_Idx))
	{
            GL_ENTRY_PTR(glGetnMinmaxARB_Idx) = dlsym(RTLD_NEXT,"glGetnMinmaxARB");
            if(!GL_ENTRY_PTR(glGetnMinmaxARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetnMinmaxARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetnMinmaxARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetnMinmaxARB_wrp(target,reset,format,type,bufSize,values);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetnMinmaxARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetnMinmaxARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetnMinmaxARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetnMinmaxARB_Idx),
				 GL_ENTRY_LAST_TS(glGetnMinmaxARB_Idx));
        if(last_diff > 1000000000){
            printf("glGetnMinmaxARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetnMinmaxARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnMinmaxARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnMinmaxARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetnMinmaxARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetnMinmaxARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetnMinmaxARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetnMinmaxARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetnMinmaxARB_Idx) = get_ts();
        }


	

}