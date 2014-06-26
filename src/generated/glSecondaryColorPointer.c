#include <glTraceCommon.h>
#include <generated.h>

#define glSecondaryColorPointer_wrp						\
    ((void  (*)(GLint size,GLenum type,GLsizei stride,const void *pointer                                        \
    ))GL_ENTRY_PTR(glSecondaryColorPointer_Idx))


GLAPI void  APIENTRY glSecondaryColorPointer(GLint size,GLenum type,GLsizei stride,const void *pointer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glSecondaryColorPointer_Idx))
    	{
            GL_ENTRY_PREV_TS(glSecondaryColorPointer_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSecondaryColorPointer_wrp(size,type,stride,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSecondaryColorPointer_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSecondaryColorPointer_Idx) ++;

        GL_ENTRY_LAST_TS(glSecondaryColorPointer_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSecondaryColorPointer_Idx),
				 GL_ENTRY_LAST_TS(glSecondaryColorPointer_Idx));


        if(last_diff > 1000000000){
            printf("glSecondaryColorPointer %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSecondaryColorPointer_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColorPointer_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColorPointer_Idx) /
	             GL_ENTRY_CALL_COUNT(glSecondaryColorPointer_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSecondaryColorPointer_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSecondaryColorPointer_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSecondaryColorPointer_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSecondaryColorPointer_Idx) = get_ts();
        }


	

}