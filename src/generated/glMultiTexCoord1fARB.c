#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord1fARB_wrp						\
    ((void  (*)(GLenum target,GLfloat s                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord1fARB_Idx))


GLAPI void  APIENTRY glMultiTexCoord1fARB(GLenum target,GLfloat s)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexCoord1fARB_Idx))
	{
            GL_ENTRY_PTR(glMultiTexCoord1fARB_Idx) = dlsym(RTLD_NEXT,"glMultiTexCoord1fARB");
            if(!GL_ENTRY_PTR(glMultiTexCoord1fARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexCoord1fARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord1fARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord1fARB_wrp(target,s);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord1fARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord1fARB_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord1fARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord1fARB_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord1fARB_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexCoord1fARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord1fARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord1fARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord1fARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord1fARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord1fARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord1fARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord1fARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord1fARB_Idx) = get_ts();
        }


	

}