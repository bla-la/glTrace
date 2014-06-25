#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexRenderbufferEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLuint renderbuffer                                        \
    ))GL_ENTRY_PTR(glMultiTexRenderbufferEXT_Idx))


GLAPI void  APIENTRY glMultiTexRenderbufferEXT(GLenum texunit,GLenum target,GLuint renderbuffer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexRenderbufferEXT_Idx))
	{
            GL_ENTRY_PTR(glMultiTexRenderbufferEXT_Idx) = dlsym(RTLD_NEXT,"glMultiTexRenderbufferEXT");
            if(!GL_ENTRY_PTR(glMultiTexRenderbufferEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexRenderbufferEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexRenderbufferEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexRenderbufferEXT_wrp(texunit,target,renderbuffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexRenderbufferEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexRenderbufferEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexRenderbufferEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexRenderbufferEXT_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexRenderbufferEXT_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexRenderbufferEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexRenderbufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexRenderbufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexRenderbufferEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexRenderbufferEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexRenderbufferEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexRenderbufferEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexRenderbufferEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexRenderbufferEXT_Idx) = get_ts();
        }


	

}