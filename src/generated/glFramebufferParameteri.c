#include <glTraceCommon.h>
#include <generated.h>

#define glFramebufferParameteri_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLint param                                        \
    ))GL_ENTRY_PTR(glFramebufferParameteri_Idx))


GLAPI void  APIENTRY glFramebufferParameteri(GLenum target,GLenum pname,GLint param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glFramebufferParameteri_Idx))
	{
            GL_ENTRY_PTR(glFramebufferParameteri_Idx) = dlsym(RTLD_NEXT,"glFramebufferParameteri");
            if(!GL_ENTRY_PTR(glFramebufferParameteri_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glFramebufferParameteri_Idx))
    	{
            GL_ENTRY_PREV_TS(glFramebufferParameteri_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFramebufferParameteri_wrp(target,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFramebufferParameteri_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFramebufferParameteri_Idx) ++;

        GL_ENTRY_LAST_TS(glFramebufferParameteri_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFramebufferParameteri_Idx),
				 GL_ENTRY_LAST_TS(glFramebufferParameteri_Idx));
        if(last_diff > 1000000000){
            printf("glFramebufferParameteri %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFramebufferParameteri_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferParameteri_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferParameteri_Idx) /
	             GL_ENTRY_CALL_COUNT(glFramebufferParameteri_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFramebufferParameteri_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFramebufferParameteri_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFramebufferParameteri_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFramebufferParameteri_Idx) = get_ts();
        }


	

}