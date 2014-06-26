#include <glTraceCommon.h>
#include <generated.h>

#define glNamedRenderbufferStorageMultisampleEXT_wrp						\
    ((void  (*)(GLuint renderbuffer,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height                                        \
    ))GL_ENTRY_PTR(glNamedRenderbufferStorageMultisampleEXT_Idx))


GLAPI void  APIENTRY glNamedRenderbufferStorageMultisampleEXT(GLuint renderbuffer,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glNamedRenderbufferStorageMultisampleEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glNamedRenderbufferStorageMultisampleEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNamedRenderbufferStorageMultisampleEXT_wrp(renderbuffer,samples,internalformat,width,height);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNamedRenderbufferStorageMultisampleEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNamedRenderbufferStorageMultisampleEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glNamedRenderbufferStorageMultisampleEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNamedRenderbufferStorageMultisampleEXT_Idx),
				 GL_ENTRY_LAST_TS(glNamedRenderbufferStorageMultisampleEXT_Idx));


        if(last_diff > 1000000000){
            printf("glNamedRenderbufferStorageMultisampleEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNamedRenderbufferStorageMultisampleEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedRenderbufferStorageMultisampleEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedRenderbufferStorageMultisampleEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glNamedRenderbufferStorageMultisampleEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNamedRenderbufferStorageMultisampleEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNamedRenderbufferStorageMultisampleEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNamedRenderbufferStorageMultisampleEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNamedRenderbufferStorageMultisampleEXT_Idx) = get_ts();
        }


	

}