#include <glTraceCommon.h>
#include <generated.h>

#define glNamedFramebufferParameteriEXT_wrp						\
    ((void  (*)(GLuint framebuffer,GLenum pname,GLint param                                        \
    ))GL_ENTRY_PTR(glNamedFramebufferParameteriEXT_Idx))


GLAPI void  APIENTRY glNamedFramebufferParameteriEXT(GLuint framebuffer,GLenum pname,GLint param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glNamedFramebufferParameteriEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glNamedFramebufferParameteriEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNamedFramebufferParameteriEXT_wrp(framebuffer,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNamedFramebufferParameteriEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNamedFramebufferParameteriEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glNamedFramebufferParameteriEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNamedFramebufferParameteriEXT_Idx),
				 GL_ENTRY_LAST_TS(glNamedFramebufferParameteriEXT_Idx));


        if(last_diff > 1000000000){
            printf("glNamedFramebufferParameteriEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNamedFramebufferParameteriEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedFramebufferParameteriEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedFramebufferParameteriEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glNamedFramebufferParameteriEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNamedFramebufferParameteriEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNamedFramebufferParameteriEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNamedFramebufferParameteriEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNamedFramebufferParameteriEXT_Idx) = get_ts();
        }


	

}