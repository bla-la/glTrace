#include <glTraceCommon.h>
#include <generated.h>

#define glNamedRenderbufferStorageMultisampleCoverageEXT_wrp						\
    ((void  (*)(GLuint renderbuffer,GLsizei coverageSamples,GLsizei colorSamples,GLenum internalformat,GLsizei width,GLsizei height                                        \
    ))GL_ENTRY_PTR(glNamedRenderbufferStorageMultisampleCoverageEXT_Idx))


GLAPI void  APIENTRY glNamedRenderbufferStorageMultisampleCoverageEXT(GLuint renderbuffer,GLsizei coverageSamples,GLsizei colorSamples,GLenum internalformat,GLsizei width,GLsizei height)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glNamedRenderbufferStorageMultisampleCoverageEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glNamedRenderbufferStorageMultisampleCoverageEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNamedRenderbufferStorageMultisampleCoverageEXT_wrp(renderbuffer,coverageSamples,colorSamples,internalformat,width,height);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNamedRenderbufferStorageMultisampleCoverageEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNamedRenderbufferStorageMultisampleCoverageEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glNamedRenderbufferStorageMultisampleCoverageEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNamedRenderbufferStorageMultisampleCoverageEXT_Idx),
				 GL_ENTRY_LAST_TS(glNamedRenderbufferStorageMultisampleCoverageEXT_Idx));


        if(last_diff > 1000000000){
            printf("glNamedRenderbufferStorageMultisampleCoverageEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNamedRenderbufferStorageMultisampleCoverageEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedRenderbufferStorageMultisampleCoverageEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedRenderbufferStorageMultisampleCoverageEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glNamedRenderbufferStorageMultisampleCoverageEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNamedRenderbufferStorageMultisampleCoverageEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNamedRenderbufferStorageMultisampleCoverageEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNamedRenderbufferStorageMultisampleCoverageEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNamedRenderbufferStorageMultisampleCoverageEXT_Idx) = get_ts();
        }


	

}