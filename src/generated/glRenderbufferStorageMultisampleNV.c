#include <glTraceCommon.h>
#include <generated.h>

#define glRenderbufferStorageMultisampleNV_wrp						\
    ((void  (*)(GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height                                        \
    ))GL_ENTRY_PTR(glRenderbufferStorageMultisampleNV_Idx))


GLAPI void  APIENTRY glRenderbufferStorageMultisampleNV(GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glRenderbufferStorageMultisampleNV_Idx))
	{
            GL_ENTRY_PTR(glRenderbufferStorageMultisampleNV_Idx) = dlsym(RTLD_NEXT,"glRenderbufferStorageMultisampleNV");
            if(!GL_ENTRY_PTR(glRenderbufferStorageMultisampleNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glRenderbufferStorageMultisampleNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glRenderbufferStorageMultisampleNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRenderbufferStorageMultisampleNV_wrp(target,samples,internalformat,width,height);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRenderbufferStorageMultisampleNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRenderbufferStorageMultisampleNV_Idx) ++;

        GL_ENTRY_LAST_TS(glRenderbufferStorageMultisampleNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRenderbufferStorageMultisampleNV_Idx),
				 GL_ENTRY_LAST_TS(glRenderbufferStorageMultisampleNV_Idx));
        if(last_diff > 1000000000){
            printf("glRenderbufferStorageMultisampleNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRenderbufferStorageMultisampleNV_Idx),
	             GL_ENTRY_CALL_TIME(glRenderbufferStorageMultisampleNV_Idx),
	             GL_ENTRY_CALL_TIME(glRenderbufferStorageMultisampleNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glRenderbufferStorageMultisampleNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRenderbufferStorageMultisampleNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRenderbufferStorageMultisampleNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRenderbufferStorageMultisampleNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRenderbufferStorageMultisampleNV_Idx) = get_ts();
        }


	

}