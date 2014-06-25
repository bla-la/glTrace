#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord3sARB_wrp						\
    ((void  (*)(GLenum target,GLshort s,GLshort t,GLshort r                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord3sARB_Idx))


GLAPI void  APIENTRY glMultiTexCoord3sARB(GLenum target,GLshort s,GLshort t,GLshort r)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexCoord3sARB_Idx))
	{
            GL_ENTRY_PTR(glMultiTexCoord3sARB_Idx) = dlsym(RTLD_NEXT,"glMultiTexCoord3sARB");
            if(!GL_ENTRY_PTR(glMultiTexCoord3sARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexCoord3sARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord3sARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord3sARB_wrp(target,s,t,r);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord3sARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord3sARB_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord3sARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord3sARB_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord3sARB_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexCoord3sARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord3sARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord3sARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord3sARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord3sARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord3sARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord3sARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord3sARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord3sARB_Idx) = get_ts();
        }


	

}