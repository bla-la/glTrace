#include <glTraceCommon.h>
#include <generated.h>

#define glRenderbufferStorageMultisampleEXT_wrp						\
    ((void  (*)(GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height                                        \
    ))GL_ENTRY_PTR(glRenderbufferStorageMultisampleEXT_Idx))


GLAPI void  APIENTRY glRenderbufferStorageMultisampleEXT(GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glRenderbufferStorageMultisampleEXT_Idx))
	{
            GL_ENTRY_PTR(glRenderbufferStorageMultisampleEXT_Idx) = dlsym(RTLD_NEXT,"glRenderbufferStorageMultisampleEXT");
            if(!GL_ENTRY_PTR(glRenderbufferStorageMultisampleEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glRenderbufferStorageMultisampleEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glRenderbufferStorageMultisampleEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRenderbufferStorageMultisampleEXT_wrp(target,samples,internalformat,width,height);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRenderbufferStorageMultisampleEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRenderbufferStorageMultisampleEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glRenderbufferStorageMultisampleEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRenderbufferStorageMultisampleEXT_Idx),
				 GL_ENTRY_LAST_TS(glRenderbufferStorageMultisampleEXT_Idx));
        if(last_diff > 1000000000){
            printf("glRenderbufferStorageMultisampleEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRenderbufferStorageMultisampleEXT_Idx),
	             GL_ENTRY_CALL_TIME(glRenderbufferStorageMultisampleEXT_Idx),
	             GL_ENTRY_CALL_TIME(glRenderbufferStorageMultisampleEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glRenderbufferStorageMultisampleEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRenderbufferStorageMultisampleEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRenderbufferStorageMultisampleEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRenderbufferStorageMultisampleEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRenderbufferStorageMultisampleEXT_Idx) = get_ts();
        }


	

}