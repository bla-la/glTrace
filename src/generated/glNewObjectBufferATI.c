#include <glTraceCommon.h>
#include <generated.h>

#define glNewObjectBufferATI_wrp						\
    ((GLuint  (*)(GLsizei size,const void *pointer,GLenum usage                                        \
    ))GL_ENTRY_PTR(glNewObjectBufferATI_Idx))


GLAPI GLuint  APIENTRY glNewObjectBufferATI(GLsizei size,const void *pointer,GLenum usage)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glNewObjectBufferATI_Idx))
	{
            GL_ENTRY_PTR(glNewObjectBufferATI_Idx) = dlsym(RTLD_NEXT,"glNewObjectBufferATI");
            if(!GL_ENTRY_PTR(glNewObjectBufferATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glNewObjectBufferATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glNewObjectBufferATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLuint  retval = glNewObjectBufferATI_wrp(size,pointer,usage);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNewObjectBufferATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNewObjectBufferATI_Idx) ++;

        GL_ENTRY_LAST_TS(glNewObjectBufferATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNewObjectBufferATI_Idx),
				 GL_ENTRY_LAST_TS(glNewObjectBufferATI_Idx));
        if(last_diff > 1000000000){
            printf("glNewObjectBufferATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNewObjectBufferATI_Idx),
	             GL_ENTRY_CALL_TIME(glNewObjectBufferATI_Idx),
	             GL_ENTRY_CALL_TIME(glNewObjectBufferATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glNewObjectBufferATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNewObjectBufferATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNewObjectBufferATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNewObjectBufferATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNewObjectBufferATI_Idx) = get_ts();
        }


	return retval;

}