#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord4fARB_wrp						\
    ((void  (*)(GLenum target,GLfloat s,GLfloat t,GLfloat r,GLfloat q                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord4fARB_Idx))


GLAPI void  APIENTRY glMultiTexCoord4fARB(GLenum target,GLfloat s,GLfloat t,GLfloat r,GLfloat q)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexCoord4fARB_Idx))
	{
            GL_ENTRY_PTR(glMultiTexCoord4fARB_Idx) = dlsym(RTLD_NEXT,"glMultiTexCoord4fARB");
            if(!GL_ENTRY_PTR(glMultiTexCoord4fARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexCoord4fARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord4fARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord4fARB_wrp(target,s,t,r,q);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord4fARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord4fARB_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord4fARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord4fARB_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord4fARB_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexCoord4fARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord4fARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord4fARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord4fARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord4fARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord4fARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord4fARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord4fARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord4fARB_Idx) = get_ts();
        }


	

}