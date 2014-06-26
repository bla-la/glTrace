#include <glTraceCommon.h>
#include <generated.h>

#define glExtGetRenderbuffersQCOM_wrp						\
    ((void  (*)(GLuint *renderbuffers,GLint maxRenderbuffers,GLint *numRenderbuffers                                        \
    ))GL_ENTRY_PTR(glExtGetRenderbuffersQCOM_Idx))


GLAPI void  APIENTRY glExtGetRenderbuffersQCOM(GLuint *renderbuffers,GLint maxRenderbuffers,GLint *numRenderbuffers)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glExtGetRenderbuffersQCOM_Idx))
    	{
            GL_ENTRY_PREV_TS(glExtGetRenderbuffersQCOM_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glExtGetRenderbuffersQCOM_wrp(renderbuffers,maxRenderbuffers,numRenderbuffers);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glExtGetRenderbuffersQCOM_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glExtGetRenderbuffersQCOM_Idx) ++;

        GL_ENTRY_LAST_TS(glExtGetRenderbuffersQCOM_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glExtGetRenderbuffersQCOM_Idx),
				 GL_ENTRY_LAST_TS(glExtGetRenderbuffersQCOM_Idx));


        if(last_diff > 1000000000){
            printf("glExtGetRenderbuffersQCOM %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glExtGetRenderbuffersQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glExtGetRenderbuffersQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glExtGetRenderbuffersQCOM_Idx) /
	             GL_ENTRY_CALL_COUNT(glExtGetRenderbuffersQCOM_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glExtGetRenderbuffersQCOM_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glExtGetRenderbuffersQCOM_Idx) = 0;
             GL_ENTRY_CALL_TIME(glExtGetRenderbuffersQCOM_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glExtGetRenderbuffersQCOM_Idx) = get_ts();
        }


	

}