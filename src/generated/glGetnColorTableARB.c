#include <glTraceCommon.h>
#include <generated.h>

#define glGetnColorTableARB_wrp						\
    ((void  (*)(GLenum target,GLenum format,GLenum type,GLsizei bufSize,void *table                                        \
    ))GL_ENTRY_PTR(glGetnColorTableARB_Idx))


GLAPI void  APIENTRY glGetnColorTableARB(GLenum target,GLenum format,GLenum type,GLsizei bufSize,void *table)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetnColorTableARB_Idx))
	{
            GL_ENTRY_PTR(glGetnColorTableARB_Idx) = dlsym(RTLD_NEXT,"glGetnColorTableARB");
            if(!GL_ENTRY_PTR(glGetnColorTableARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetnColorTableARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetnColorTableARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetnColorTableARB_wrp(target,format,type,bufSize,table);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetnColorTableARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetnColorTableARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetnColorTableARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetnColorTableARB_Idx),
				 GL_ENTRY_LAST_TS(glGetnColorTableARB_Idx));
        if(last_diff > 1000000000){
            printf("glGetnColorTableARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetnColorTableARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnColorTableARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnColorTableARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetnColorTableARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetnColorTableARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetnColorTableARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetnColorTableARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetnColorTableARB_Idx) = get_ts();
        }


	

}