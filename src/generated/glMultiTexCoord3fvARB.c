#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord3fvARB_wrp						\
    ((void  (*)(GLenum target,const GLfloat *v                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord3fvARB_Idx))


GLAPI void  APIENTRY glMultiTexCoord3fvARB(GLenum target,const GLfloat *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexCoord3fvARB_Idx))
	{
            GL_ENTRY_PTR(glMultiTexCoord3fvARB_Idx) = dlsym(RTLD_NEXT,"glMultiTexCoord3fvARB");
            if(!GL_ENTRY_PTR(glMultiTexCoord3fvARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexCoord3fvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord3fvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord3fvARB_wrp(target,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord3fvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord3fvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord3fvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord3fvARB_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord3fvARB_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexCoord3fvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord3fvARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord3fvARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord3fvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord3fvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord3fvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord3fvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord3fvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord3fvARB_Idx) = get_ts();
        }


	

}