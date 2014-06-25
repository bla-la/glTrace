#include <glTraceCommon.h>
#include <generated.h>

#define glTexImage3DMultisample_wrp						\
    ((void  (*)(GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLboolean fixedsamplelocations                                        \
    ))GL_ENTRY_PTR(glTexImage3DMultisample_Idx))


GLAPI void  APIENTRY glTexImage3DMultisample(GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLboolean fixedsamplelocations)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexImage3DMultisample_Idx))
	{
            GL_ENTRY_PTR(glTexImage3DMultisample_Idx) = dlsym(RTLD_NEXT,"glTexImage3DMultisample");
            if(!GL_ENTRY_PTR(glTexImage3DMultisample_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexImage3DMultisample_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexImage3DMultisample_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexImage3DMultisample_wrp(target,samples,internalformat,width,height,depth,fixedsamplelocations);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexImage3DMultisample_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexImage3DMultisample_Idx) ++;

        GL_ENTRY_LAST_TS(glTexImage3DMultisample_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexImage3DMultisample_Idx),
				 GL_ENTRY_LAST_TS(glTexImage3DMultisample_Idx));
        if(last_diff > 1000000000){
            printf("glTexImage3DMultisample %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexImage3DMultisample_Idx),
	             GL_ENTRY_CALL_TIME(glTexImage3DMultisample_Idx),
	             GL_ENTRY_CALL_TIME(glTexImage3DMultisample_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexImage3DMultisample_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexImage3DMultisample_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexImage3DMultisample_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexImage3DMultisample_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexImage3DMultisample_Idx) = get_ts();
        }


	

}