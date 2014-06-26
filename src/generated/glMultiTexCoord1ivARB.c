#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord1ivARB_wrp						\
    ((void  (*)(GLenum target,const GLint *v                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord1ivARB_Idx))


GLAPI void  APIENTRY glMultiTexCoord1ivARB(GLenum target,const GLint *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiTexCoord1ivARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord1ivARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord1ivARB_wrp(target,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord1ivARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord1ivARB_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord1ivARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord1ivARB_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord1ivARB_Idx));


        if(last_diff > 1000000000){
            printf("glMultiTexCoord1ivARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord1ivARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord1ivARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord1ivARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord1ivARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord1ivARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord1ivARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord1ivARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord1ivARB_Idx) = get_ts();
        }


	

}