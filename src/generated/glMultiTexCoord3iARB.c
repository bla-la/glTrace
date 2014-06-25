#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord3iARB_wrp						\
    ((void  (*)(GLenum target,GLint s,GLint t,GLint r                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord3iARB_Idx))


GLAPI void  APIENTRY glMultiTexCoord3iARB(GLenum target,GLint s,GLint t,GLint r)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexCoord3iARB_Idx))
	{
            GL_ENTRY_PTR(glMultiTexCoord3iARB_Idx) = dlsym(RTLD_NEXT,"glMultiTexCoord3iARB");
            if(!GL_ENTRY_PTR(glMultiTexCoord3iARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexCoord3iARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord3iARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord3iARB_wrp(target,s,t,r);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord3iARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord3iARB_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord3iARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord3iARB_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord3iARB_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexCoord3iARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord3iARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord3iARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord3iARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord3iARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord3iARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord3iARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord3iARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord3iARB_Idx) = get_ts();
        }


	

}