#include <glTraceCommon.h>
#include <generated.h>

#define glArrayObjectATI_wrp						\
    ((void  (*)(GLenum array,GLint size,GLenum type,GLsizei stride,GLuint buffer,GLuint offset                                        \
    ))GL_ENTRY_PTR(glArrayObjectATI_Idx))


GLAPI void  APIENTRY glArrayObjectATI(GLenum array,GLint size,GLenum type,GLsizei stride,GLuint buffer,GLuint offset)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glArrayObjectATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glArrayObjectATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glArrayObjectATI_wrp(array,size,type,stride,buffer,offset);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glArrayObjectATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glArrayObjectATI_Idx) ++;

        GL_ENTRY_LAST_TS(glArrayObjectATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glArrayObjectATI_Idx),
				 GL_ENTRY_LAST_TS(glArrayObjectATI_Idx));


        if(last_diff > 1000000000){
            printf("glArrayObjectATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glArrayObjectATI_Idx),
	             GL_ENTRY_CALL_TIME(glArrayObjectATI_Idx),
	             GL_ENTRY_CALL_TIME(glArrayObjectATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glArrayObjectATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glArrayObjectATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glArrayObjectATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glArrayObjectATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glArrayObjectATI_Idx) = get_ts();
        }


	

}