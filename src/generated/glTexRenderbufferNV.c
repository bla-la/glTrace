#include <glTraceCommon.h>
#include <generated.h>

#define glTexRenderbufferNV_wrp						\
    ((void  (*)(GLenum target,GLuint renderbuffer                                        \
    ))GL_ENTRY_PTR(glTexRenderbufferNV_Idx))


GLAPI void  APIENTRY glTexRenderbufferNV(GLenum target,GLuint renderbuffer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexRenderbufferNV_Idx))
	{
            GL_ENTRY_PTR(glTexRenderbufferNV_Idx) = dlsym(RTLD_NEXT,"glTexRenderbufferNV");
            if(!GL_ENTRY_PTR(glTexRenderbufferNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexRenderbufferNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexRenderbufferNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexRenderbufferNV_wrp(target,renderbuffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexRenderbufferNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexRenderbufferNV_Idx) ++;

        GL_ENTRY_LAST_TS(glTexRenderbufferNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexRenderbufferNV_Idx),
				 GL_ENTRY_LAST_TS(glTexRenderbufferNV_Idx));
        if(last_diff > 1000000000){
            printf("glTexRenderbufferNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexRenderbufferNV_Idx),
	             GL_ENTRY_CALL_TIME(glTexRenderbufferNV_Idx),
	             GL_ENTRY_CALL_TIME(glTexRenderbufferNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexRenderbufferNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexRenderbufferNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexRenderbufferNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexRenderbufferNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexRenderbufferNV_Idx) = get_ts();
        }


	

}