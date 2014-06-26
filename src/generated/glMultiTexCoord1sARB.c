#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord1sARB_wrp						\
    ((void  (*)(GLenum target,GLshort s                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord1sARB_Idx))


GLAPI void  APIENTRY glMultiTexCoord1sARB(GLenum target,GLshort s)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiTexCoord1sARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord1sARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord1sARB_wrp(target,s);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord1sARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord1sARB_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord1sARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord1sARB_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord1sARB_Idx));


        if(last_diff > 1000000000){
            printf("glMultiTexCoord1sARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord1sARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord1sARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord1sARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord1sARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord1sARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord1sARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord1sARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord1sARB_Idx) = get_ts();
        }


	

}