#include <glTraceCommon.h>
#include <generated.h>

#define glRenderbufferStorageOES_wrp						\
    ((void  (*)(GLenum target,GLenum internalformat,GLsizei width,GLsizei height                                        \
    ))GL_ENTRY_PTR(glRenderbufferStorageOES_Idx))


GLAPI void  APIENTRY glRenderbufferStorageOES(GLenum target,GLenum internalformat,GLsizei width,GLsizei height)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glRenderbufferStorageOES_Idx))
	{
            GL_ENTRY_PTR(glRenderbufferStorageOES_Idx) = dlsym(RTLD_NEXT,"glRenderbufferStorageOES");
            if(!GL_ENTRY_PTR(glRenderbufferStorageOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glRenderbufferStorageOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glRenderbufferStorageOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRenderbufferStorageOES_wrp(target,internalformat,width,height);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRenderbufferStorageOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRenderbufferStorageOES_Idx) ++;

        GL_ENTRY_LAST_TS(glRenderbufferStorageOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRenderbufferStorageOES_Idx),
				 GL_ENTRY_LAST_TS(glRenderbufferStorageOES_Idx));
        if(last_diff > 1000000000){
            printf("glRenderbufferStorageOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRenderbufferStorageOES_Idx),
	             GL_ENTRY_CALL_TIME(glRenderbufferStorageOES_Idx),
	             GL_ENTRY_CALL_TIME(glRenderbufferStorageOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glRenderbufferStorageOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRenderbufferStorageOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRenderbufferStorageOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRenderbufferStorageOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRenderbufferStorageOES_Idx) = get_ts();
        }


	

}