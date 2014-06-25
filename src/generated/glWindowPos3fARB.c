#include <glTraceCommon.h>
#include <generated.h>

#define glWindowPos3fARB_wrp						\
    ((void  (*)(GLfloat x,GLfloat y,GLfloat z                                        \
    ))GL_ENTRY_PTR(glWindowPos3fARB_Idx))


GLAPI void  APIENTRY glWindowPos3fARB(GLfloat x,GLfloat y,GLfloat z)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glWindowPos3fARB_Idx))
	{
            GL_ENTRY_PTR(glWindowPos3fARB_Idx) = dlsym(RTLD_NEXT,"glWindowPos3fARB");
            if(!GL_ENTRY_PTR(glWindowPos3fARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glWindowPos3fARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glWindowPos3fARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWindowPos3fARB_wrp(x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWindowPos3fARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWindowPos3fARB_Idx) ++;

        GL_ENTRY_LAST_TS(glWindowPos3fARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWindowPos3fARB_Idx),
				 GL_ENTRY_LAST_TS(glWindowPos3fARB_Idx));
        if(last_diff > 1000000000){
            printf("glWindowPos3fARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWindowPos3fARB_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos3fARB_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos3fARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glWindowPos3fARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWindowPos3fARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWindowPos3fARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWindowPos3fARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWindowPos3fARB_Idx) = get_ts();
        }


	

}