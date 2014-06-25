#include <glTraceCommon.h>
#include <generated.h>

#define glWeightPointerOES_wrp						\
    ((void  (*)(GLint size,GLenum type,GLsizei stride,const void *pointer                                        \
    ))GL_ENTRY_PTR(glWeightPointerOES_Idx))


GLAPI void  APIENTRY glWeightPointerOES(GLint size,GLenum type,GLsizei stride,const void *pointer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glWeightPointerOES_Idx))
	{
            GL_ENTRY_PTR(glWeightPointerOES_Idx) = dlsym(RTLD_NEXT,"glWeightPointerOES");
            if(!GL_ENTRY_PTR(glWeightPointerOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glWeightPointerOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glWeightPointerOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWeightPointerOES_wrp(size,type,stride,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWeightPointerOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWeightPointerOES_Idx) ++;

        GL_ENTRY_LAST_TS(glWeightPointerOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWeightPointerOES_Idx),
				 GL_ENTRY_LAST_TS(glWeightPointerOES_Idx));
        if(last_diff > 1000000000){
            printf("glWeightPointerOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWeightPointerOES_Idx),
	             GL_ENTRY_CALL_TIME(glWeightPointerOES_Idx),
	             GL_ENTRY_CALL_TIME(glWeightPointerOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glWeightPointerOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWeightPointerOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWeightPointerOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWeightPointerOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWeightPointerOES_Idx) = get_ts();
        }


	

}