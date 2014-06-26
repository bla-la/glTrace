#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord1dvARB_wrp						\
    ((void  (*)(GLenum target,const GLdouble *v                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord1dvARB_Idx))


GLAPI void  APIENTRY glMultiTexCoord1dvARB(GLenum target,const GLdouble *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiTexCoord1dvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord1dvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord1dvARB_wrp(target,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord1dvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord1dvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord1dvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord1dvARB_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord1dvARB_Idx));


        if(last_diff > 1000000000){
            printf("glMultiTexCoord1dvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord1dvARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord1dvARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord1dvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord1dvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord1dvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord1dvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord1dvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord1dvARB_Idx) = get_ts();
        }


	

}