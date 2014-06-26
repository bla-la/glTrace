#include <glTraceCommon.h>
#include <generated.h>

#define glNamedRenderbufferStorageEXT_wrp						\
    ((void  (*)(GLuint renderbuffer,GLenum internalformat,GLsizei width,GLsizei height                                        \
    ))GL_ENTRY_PTR(glNamedRenderbufferStorageEXT_Idx))


GLAPI void  APIENTRY glNamedRenderbufferStorageEXT(GLuint renderbuffer,GLenum internalformat,GLsizei width,GLsizei height)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glNamedRenderbufferStorageEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glNamedRenderbufferStorageEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNamedRenderbufferStorageEXT_wrp(renderbuffer,internalformat,width,height);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNamedRenderbufferStorageEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNamedRenderbufferStorageEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glNamedRenderbufferStorageEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNamedRenderbufferStorageEXT_Idx),
				 GL_ENTRY_LAST_TS(glNamedRenderbufferStorageEXT_Idx));


        if(last_diff > 1000000000){
            printf("glNamedRenderbufferStorageEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNamedRenderbufferStorageEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedRenderbufferStorageEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedRenderbufferStorageEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glNamedRenderbufferStorageEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNamedRenderbufferStorageEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNamedRenderbufferStorageEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNamedRenderbufferStorageEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNamedRenderbufferStorageEXT_Idx) = get_ts();
        }


	

}