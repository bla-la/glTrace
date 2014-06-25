#include <glTraceCommon.h>
#include <generated.h>

#define glProgramBinaryOES_wrp						\
    ((void  (*)(GLuint program,GLenum binaryFormat,const void *binary,GLint length                                        \
    ))GL_ENTRY_PTR(glProgramBinaryOES_Idx))


GLAPI void  APIENTRY glProgramBinaryOES(GLuint program,GLenum binaryFormat,const void *binary,GLint length)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramBinaryOES_Idx))
	{
            GL_ENTRY_PTR(glProgramBinaryOES_Idx) = dlsym(RTLD_NEXT,"glProgramBinaryOES");
            if(!GL_ENTRY_PTR(glProgramBinaryOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramBinaryOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramBinaryOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramBinaryOES_wrp(program,binaryFormat,binary,length);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramBinaryOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramBinaryOES_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramBinaryOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramBinaryOES_Idx),
				 GL_ENTRY_LAST_TS(glProgramBinaryOES_Idx));
        if(last_diff > 1000000000){
            printf("glProgramBinaryOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramBinaryOES_Idx),
	             GL_ENTRY_CALL_TIME(glProgramBinaryOES_Idx),
	             GL_ENTRY_CALL_TIME(glProgramBinaryOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramBinaryOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramBinaryOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramBinaryOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramBinaryOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramBinaryOES_Idx) = get_ts();
        }


	

}