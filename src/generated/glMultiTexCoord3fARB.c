#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord3fARB_wrp						\
    ((void  (*)(GLenum target,GLfloat s,GLfloat t,GLfloat r                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord3fARB_Idx))


GLAPI void  APIENTRY glMultiTexCoord3fARB(GLenum target,GLfloat s,GLfloat t,GLfloat r)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiTexCoord3fARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord3fARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord3fARB_wrp(target,s,t,r);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord3fARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord3fARB_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord3fARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord3fARB_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord3fARB_Idx));


        if(last_diff > 1000000000){
            printf("glMultiTexCoord3fARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord3fARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord3fARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord3fARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord3fARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord3fARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord3fARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord3fARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord3fARB_Idx) = get_ts();
        }


	

}