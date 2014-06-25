#include <glTraceCommon.h>
#include <generated.h>

#define glPointParameterfvARB_wrp						\
    ((void  (*)(GLenum pname,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glPointParameterfvARB_Idx))


GLAPI void  APIENTRY glPointParameterfvARB(GLenum pname,const GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPointParameterfvARB_Idx))
	{
            GL_ENTRY_PTR(glPointParameterfvARB_Idx) = dlsym(RTLD_NEXT,"glPointParameterfvARB");
            if(!GL_ENTRY_PTR(glPointParameterfvARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPointParameterfvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glPointParameterfvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPointParameterfvARB_wrp(pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPointParameterfvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPointParameterfvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glPointParameterfvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPointParameterfvARB_Idx),
				 GL_ENTRY_LAST_TS(glPointParameterfvARB_Idx));
        if(last_diff > 1000000000){
            printf("glPointParameterfvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPointParameterfvARB_Idx),
	             GL_ENTRY_CALL_TIME(glPointParameterfvARB_Idx),
	             GL_ENTRY_CALL_TIME(glPointParameterfvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glPointParameterfvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPointParameterfvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPointParameterfvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPointParameterfvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPointParameterfvARB_Idx) = get_ts();
        }


	

}