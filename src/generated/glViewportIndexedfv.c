#include <glTraceCommon.h>
#include <generated.h>

#define glViewportIndexedfv_wrp						\
    ((void  (*)(GLuint index,const GLfloat *v                                        \
    ))GL_ENTRY_PTR(glViewportIndexedfv_Idx))


GLAPI void  APIENTRY glViewportIndexedfv(GLuint index,const GLfloat *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glViewportIndexedfv_Idx))
	{
            GL_ENTRY_PTR(glViewportIndexedfv_Idx) = dlsym(RTLD_NEXT,"glViewportIndexedfv");
            if(!GL_ENTRY_PTR(glViewportIndexedfv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glViewportIndexedfv_Idx))
    	{
            GL_ENTRY_PREV_TS(glViewportIndexedfv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glViewportIndexedfv_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glViewportIndexedfv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glViewportIndexedfv_Idx) ++;

        GL_ENTRY_LAST_TS(glViewportIndexedfv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glViewportIndexedfv_Idx),
				 GL_ENTRY_LAST_TS(glViewportIndexedfv_Idx));
        if(last_diff > 1000000000){
            printf("glViewportIndexedfv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glViewportIndexedfv_Idx),
	             GL_ENTRY_CALL_TIME(glViewportIndexedfv_Idx),
	             GL_ENTRY_CALL_TIME(glViewportIndexedfv_Idx) /
	             GL_ENTRY_CALL_COUNT(glViewportIndexedfv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glViewportIndexedfv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glViewportIndexedfv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glViewportIndexedfv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glViewportIndexedfv_Idx) = get_ts();
        }


	

}