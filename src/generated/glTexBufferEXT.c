#include <glTraceCommon.h>
#include <generated.h>

#define glTexBufferEXT_wrp						\
    ((void  (*)(GLenum target,GLenum internalformat,GLuint buffer                                        \
    ))GL_ENTRY_PTR(glTexBufferEXT_Idx))


GLAPI void  APIENTRY glTexBufferEXT(GLenum target,GLenum internalformat,GLuint buffer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexBufferEXT_Idx))
	{
            GL_ENTRY_PTR(glTexBufferEXT_Idx) = dlsym(RTLD_NEXT,"glTexBufferEXT");
            if(!GL_ENTRY_PTR(glTexBufferEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexBufferEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexBufferEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexBufferEXT_wrp(target,internalformat,buffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexBufferEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexBufferEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTexBufferEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexBufferEXT_Idx),
				 GL_ENTRY_LAST_TS(glTexBufferEXT_Idx));
        if(last_diff > 1000000000){
            printf("glTexBufferEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexBufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTexBufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTexBufferEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexBufferEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexBufferEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexBufferEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexBufferEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexBufferEXT_Idx) = get_ts();
        }


	

}