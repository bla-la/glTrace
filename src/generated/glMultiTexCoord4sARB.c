#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord4sARB_wrp						\
    ((void  (*)(GLenum target,GLshort s,GLshort t,GLshort r,GLshort q                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord4sARB_Idx))


GLAPI void  APIENTRY glMultiTexCoord4sARB(GLenum target,GLshort s,GLshort t,GLshort r,GLshort q)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexCoord4sARB_Idx))
	{
            GL_ENTRY_PTR(glMultiTexCoord4sARB_Idx) = dlsym(RTLD_NEXT,"glMultiTexCoord4sARB");
            if(!GL_ENTRY_PTR(glMultiTexCoord4sARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexCoord4sARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord4sARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord4sARB_wrp(target,s,t,r,q);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord4sARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord4sARB_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord4sARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord4sARB_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord4sARB_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexCoord4sARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord4sARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord4sARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord4sARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord4sARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord4sARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord4sARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord4sARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord4sARB_Idx) = get_ts();
        }


	

}