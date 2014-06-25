#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord4fvARB_wrp						\
    ((void  (*)(GLenum target,const GLfloat *v                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord4fvARB_Idx))


GLAPI void  APIENTRY glMultiTexCoord4fvARB(GLenum target,const GLfloat *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexCoord4fvARB_Idx))
	{
            GL_ENTRY_PTR(glMultiTexCoord4fvARB_Idx) = dlsym(RTLD_NEXT,"glMultiTexCoord4fvARB");
            if(!GL_ENTRY_PTR(glMultiTexCoord4fvARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexCoord4fvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord4fvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord4fvARB_wrp(target,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord4fvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord4fvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord4fvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord4fvARB_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord4fvARB_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexCoord4fvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord4fvARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord4fvARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord4fvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord4fvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord4fvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord4fvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord4fvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord4fvARB_Idx) = get_ts();
        }


	

}