#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoordPointer_wrp						\
    ((void  (*)(GLint size,GLenum type,GLsizei stride,const void *pointer                                        \
    ))GL_ENTRY_PTR(glTexCoordPointer_Idx))


GLAPI void  APIENTRY glTexCoordPointer(GLint size,GLenum type,GLsizei stride,const void *pointer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexCoordPointer_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoordPointer_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoordPointer_wrp(size,type,stride,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoordPointer_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoordPointer_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoordPointer_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoordPointer_Idx),
				 GL_ENTRY_LAST_TS(glTexCoordPointer_Idx));


        if(last_diff > 1000000000){
            printf("glTexCoordPointer %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoordPointer_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoordPointer_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoordPointer_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoordPointer_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoordPointer_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoordPointer_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoordPointer_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoordPointer_Idx) = get_ts();
        }


	

}