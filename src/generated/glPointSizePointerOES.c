#include <glTraceCommon.h>
#include <generated.h>

#define glPointSizePointerOES_wrp						\
    ((void  (*)(GLenum type,GLsizei stride,const void *pointer                                        \
    ))GL_ENTRY_PTR(glPointSizePointerOES_Idx))


GLAPI void  APIENTRY glPointSizePointerOES(GLenum type,GLsizei stride,const void *pointer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPointSizePointerOES_Idx))
	{
            GL_ENTRY_PTR(glPointSizePointerOES_Idx) = dlsym(RTLD_NEXT,"glPointSizePointerOES");
            if(!GL_ENTRY_PTR(glPointSizePointerOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPointSizePointerOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glPointSizePointerOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPointSizePointerOES_wrp(type,stride,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPointSizePointerOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPointSizePointerOES_Idx) ++;

        GL_ENTRY_LAST_TS(glPointSizePointerOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPointSizePointerOES_Idx),
				 GL_ENTRY_LAST_TS(glPointSizePointerOES_Idx));
        if(last_diff > 1000000000){
            printf("glPointSizePointerOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPointSizePointerOES_Idx),
	             GL_ENTRY_CALL_TIME(glPointSizePointerOES_Idx),
	             GL_ENTRY_CALL_TIME(glPointSizePointerOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glPointSizePointerOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPointSizePointerOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPointSizePointerOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPointSizePointerOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPointSizePointerOES_Idx) = get_ts();
        }


	

}