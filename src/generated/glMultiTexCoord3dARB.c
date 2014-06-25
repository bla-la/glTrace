#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord3dARB_wrp						\
    ((void  (*)(GLenum target,GLdouble s,GLdouble t,GLdouble r                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord3dARB_Idx))


GLAPI void  APIENTRY glMultiTexCoord3dARB(GLenum target,GLdouble s,GLdouble t,GLdouble r)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexCoord3dARB_Idx))
	{
            GL_ENTRY_PTR(glMultiTexCoord3dARB_Idx) = dlsym(RTLD_NEXT,"glMultiTexCoord3dARB");
            if(!GL_ENTRY_PTR(glMultiTexCoord3dARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexCoord3dARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord3dARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord3dARB_wrp(target,s,t,r);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord3dARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord3dARB_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord3dARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord3dARB_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord3dARB_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexCoord3dARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord3dARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord3dARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord3dARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord3dARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord3dARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord3dARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord3dARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord3dARB_Idx) = get_ts();
        }


	

}