#include <glTraceCommon.h>
#include <generated.h>

#define glRenderbufferStorageMultisample_wrp						\
    ((void  (*)(GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height                                        \
    ))GL_ENTRY_PTR(glRenderbufferStorageMultisample_Idx))


GLAPI void  APIENTRY glRenderbufferStorageMultisample(GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glRenderbufferStorageMultisample_Idx))
	{
            GL_ENTRY_PTR(glRenderbufferStorageMultisample_Idx) = dlsym(RTLD_NEXT,"glRenderbufferStorageMultisample");
            if(!GL_ENTRY_PTR(glRenderbufferStorageMultisample_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glRenderbufferStorageMultisample_Idx))
    	{
            GL_ENTRY_PREV_TS(glRenderbufferStorageMultisample_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRenderbufferStorageMultisample_wrp(target,samples,internalformat,width,height);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRenderbufferStorageMultisample_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRenderbufferStorageMultisample_Idx) ++;

        GL_ENTRY_LAST_TS(glRenderbufferStorageMultisample_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRenderbufferStorageMultisample_Idx),
				 GL_ENTRY_LAST_TS(glRenderbufferStorageMultisample_Idx));
        if(last_diff > 1000000000){
            printf("glRenderbufferStorageMultisample %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRenderbufferStorageMultisample_Idx),
	             GL_ENTRY_CALL_TIME(glRenderbufferStorageMultisample_Idx),
	             GL_ENTRY_CALL_TIME(glRenderbufferStorageMultisample_Idx) /
	             GL_ENTRY_CALL_COUNT(glRenderbufferStorageMultisample_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRenderbufferStorageMultisample_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRenderbufferStorageMultisample_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRenderbufferStorageMultisample_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRenderbufferStorageMultisample_Idx) = get_ts();
        }


	

}