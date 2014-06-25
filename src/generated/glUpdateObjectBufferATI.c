#include <glTraceCommon.h>
#include <generated.h>

#define glUpdateObjectBufferATI_wrp						\
    ((void  (*)(GLuint buffer,GLuint offset,GLsizei size,const void *pointer,GLenum preserve                                        \
    ))GL_ENTRY_PTR(glUpdateObjectBufferATI_Idx))


GLAPI void  APIENTRY glUpdateObjectBufferATI(GLuint buffer,GLuint offset,GLsizei size,const void *pointer,GLenum preserve)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUpdateObjectBufferATI_Idx))
	{
            GL_ENTRY_PTR(glUpdateObjectBufferATI_Idx) = dlsym(RTLD_NEXT,"glUpdateObjectBufferATI");
            if(!GL_ENTRY_PTR(glUpdateObjectBufferATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUpdateObjectBufferATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glUpdateObjectBufferATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUpdateObjectBufferATI_wrp(buffer,offset,size,pointer,preserve);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUpdateObjectBufferATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUpdateObjectBufferATI_Idx) ++;

        GL_ENTRY_LAST_TS(glUpdateObjectBufferATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUpdateObjectBufferATI_Idx),
				 GL_ENTRY_LAST_TS(glUpdateObjectBufferATI_Idx));
        if(last_diff > 1000000000){
            printf("glUpdateObjectBufferATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUpdateObjectBufferATI_Idx),
	             GL_ENTRY_CALL_TIME(glUpdateObjectBufferATI_Idx),
	             GL_ENTRY_CALL_TIME(glUpdateObjectBufferATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glUpdateObjectBufferATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUpdateObjectBufferATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUpdateObjectBufferATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUpdateObjectBufferATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUpdateObjectBufferATI_Idx) = get_ts();
        }


	

}