#include <glTraceCommon.h>
#include <generated.h>

#define glWeightPointerARB_wrp						\
    ((void  (*)(GLint size,GLenum type,GLsizei stride,const void *pointer                                        \
    ))GL_ENTRY_PTR(glWeightPointerARB_Idx))


GLAPI void  APIENTRY glWeightPointerARB(GLint size,GLenum type,GLsizei stride,const void *pointer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glWeightPointerARB_Idx))
	{
            GL_ENTRY_PTR(glWeightPointerARB_Idx) = dlsym(RTLD_NEXT,"glWeightPointerARB");
            if(!GL_ENTRY_PTR(glWeightPointerARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glWeightPointerARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glWeightPointerARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWeightPointerARB_wrp(size,type,stride,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWeightPointerARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWeightPointerARB_Idx) ++;

        GL_ENTRY_LAST_TS(glWeightPointerARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWeightPointerARB_Idx),
				 GL_ENTRY_LAST_TS(glWeightPointerARB_Idx));
        if(last_diff > 1000000000){
            printf("glWeightPointerARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWeightPointerARB_Idx),
	             GL_ENTRY_CALL_TIME(glWeightPointerARB_Idx),
	             GL_ENTRY_CALL_TIME(glWeightPointerARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glWeightPointerARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWeightPointerARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWeightPointerARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWeightPointerARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWeightPointerARB_Idx) = get_ts();
        }


	

}