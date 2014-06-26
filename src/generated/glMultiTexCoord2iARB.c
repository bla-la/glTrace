#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord2iARB_wrp						\
    ((void  (*)(GLenum target,GLint s,GLint t                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord2iARB_Idx))


GLAPI void  APIENTRY glMultiTexCoord2iARB(GLenum target,GLint s,GLint t)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiTexCoord2iARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord2iARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord2iARB_wrp(target,s,t);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord2iARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord2iARB_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord2iARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord2iARB_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord2iARB_Idx));


        if(last_diff > 1000000000){
            printf("glMultiTexCoord2iARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord2iARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord2iARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord2iARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord2iARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord2iARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord2iARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord2iARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord2iARB_Idx) = get_ts();
        }


	

}