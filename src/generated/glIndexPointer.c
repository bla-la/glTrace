#include <glTraceCommon.h>
#include <generated.h>

#define glIndexPointer_wrp						\
    ((void  (*)(GLenum type,GLsizei stride,const void *pointer                                        \
    ))GL_ENTRY_PTR(glIndexPointer_Idx))


GLAPI void  APIENTRY glIndexPointer(GLenum type,GLsizei stride,const void *pointer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glIndexPointer_Idx))
	{
            GL_ENTRY_PTR(glIndexPointer_Idx) = dlsym(RTLD_NEXT,"glIndexPointer");
            if(!GL_ENTRY_PTR(glIndexPointer_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glIndexPointer_Idx))
    	{
            GL_ENTRY_PREV_TS(glIndexPointer_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glIndexPointer_wrp(type,stride,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIndexPointer_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIndexPointer_Idx) ++;

        GL_ENTRY_LAST_TS(glIndexPointer_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIndexPointer_Idx),
				 GL_ENTRY_LAST_TS(glIndexPointer_Idx));
        if(last_diff > 1000000000){
            printf("glIndexPointer %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIndexPointer_Idx),
	             GL_ENTRY_CALL_TIME(glIndexPointer_Idx),
	             GL_ENTRY_CALL_TIME(glIndexPointer_Idx) /
	             GL_ENTRY_CALL_COUNT(glIndexPointer_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIndexPointer_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIndexPointer_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIndexPointer_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIndexPointer_Idx) = get_ts();
        }


	

}