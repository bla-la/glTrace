#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord4iARB_wrp						\
    ((void  (*)(GLenum target,GLint s,GLint t,GLint r,GLint q                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord4iARB_Idx))


GLAPI void  APIENTRY glMultiTexCoord4iARB(GLenum target,GLint s,GLint t,GLint r,GLint q)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexCoord4iARB_Idx))
	{
            GL_ENTRY_PTR(glMultiTexCoord4iARB_Idx) = dlsym(RTLD_NEXT,"glMultiTexCoord4iARB");
            if(!GL_ENTRY_PTR(glMultiTexCoord4iARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexCoord4iARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord4iARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord4iARB_wrp(target,s,t,r,q);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord4iARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord4iARB_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord4iARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord4iARB_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord4iARB_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexCoord4iARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord4iARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord4iARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord4iARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord4iARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord4iARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord4iARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord4iARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord4iARB_Idx) = get_ts();
        }


	

}