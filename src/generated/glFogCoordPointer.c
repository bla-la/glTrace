#include <glTraceCommon.h>
#include <generated.h>

#define glFogCoordPointer_wrp						\
    ((void  (*)(GLenum type,GLsizei stride,const void *pointer                                        \
    ))GL_ENTRY_PTR(glFogCoordPointer_Idx))


GLAPI void  APIENTRY glFogCoordPointer(GLenum type,GLsizei stride,const void *pointer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glFogCoordPointer_Idx))
	{
            GL_ENTRY_PTR(glFogCoordPointer_Idx) = dlsym(RTLD_NEXT,"glFogCoordPointer");
            if(!GL_ENTRY_PTR(glFogCoordPointer_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glFogCoordPointer_Idx))
    	{
            GL_ENTRY_PREV_TS(glFogCoordPointer_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFogCoordPointer_wrp(type,stride,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFogCoordPointer_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFogCoordPointer_Idx) ++;

        GL_ENTRY_LAST_TS(glFogCoordPointer_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFogCoordPointer_Idx),
				 GL_ENTRY_LAST_TS(glFogCoordPointer_Idx));
        if(last_diff > 1000000000){
            printf("glFogCoordPointer %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFogCoordPointer_Idx),
	             GL_ENTRY_CALL_TIME(glFogCoordPointer_Idx),
	             GL_ENTRY_CALL_TIME(glFogCoordPointer_Idx) /
	             GL_ENTRY_CALL_COUNT(glFogCoordPointer_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFogCoordPointer_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFogCoordPointer_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFogCoordPointer_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFogCoordPointer_Idx) = get_ts();
        }


	

}