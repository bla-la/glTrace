#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord1iARB_wrp						\
    ((void  (*)(GLenum target,GLint s                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord1iARB_Idx))


GLAPI void  APIENTRY glMultiTexCoord1iARB(GLenum target,GLint s)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexCoord1iARB_Idx))
	{
            GL_ENTRY_PTR(glMultiTexCoord1iARB_Idx) = dlsym(RTLD_NEXT,"glMultiTexCoord1iARB");
            if(!GL_ENTRY_PTR(glMultiTexCoord1iARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexCoord1iARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord1iARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord1iARB_wrp(target,s);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord1iARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord1iARB_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord1iARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord1iARB_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord1iARB_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexCoord1iARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord1iARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord1iARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord1iARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord1iARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord1iARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord1iARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord1iARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord1iARB_Idx) = get_ts();
        }


	

}