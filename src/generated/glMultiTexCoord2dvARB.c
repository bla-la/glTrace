#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord2dvARB_wrp						\
    ((void  (*)(GLenum target,const GLdouble *v                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord2dvARB_Idx))


GLAPI void  APIENTRY glMultiTexCoord2dvARB(GLenum target,const GLdouble *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexCoord2dvARB_Idx))
	{
            GL_ENTRY_PTR(glMultiTexCoord2dvARB_Idx) = dlsym(RTLD_NEXT,"glMultiTexCoord2dvARB");
            if(!GL_ENTRY_PTR(glMultiTexCoord2dvARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexCoord2dvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord2dvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord2dvARB_wrp(target,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord2dvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord2dvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord2dvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord2dvARB_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord2dvARB_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexCoord2dvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord2dvARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord2dvARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord2dvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord2dvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord2dvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord2dvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord2dvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord2dvARB_Idx) = get_ts();
        }


	

}