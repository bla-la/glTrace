#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord1dARB_wrp						\
    ((void  (*)(GLenum target,GLdouble s                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord1dARB_Idx))


GLAPI void  APIENTRY glMultiTexCoord1dARB(GLenum target,GLdouble s)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiTexCoord1dARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord1dARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord1dARB_wrp(target,s);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord1dARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord1dARB_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord1dARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord1dARB_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord1dARB_Idx));


        if(last_diff > 1000000000){
            printf("glMultiTexCoord1dARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord1dARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord1dARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord1dARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord1dARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord1dARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord1dARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord1dARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord1dARB_Idx) = get_ts();
        }


	

}