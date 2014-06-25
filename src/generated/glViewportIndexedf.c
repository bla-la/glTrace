#include <glTraceCommon.h>
#include <generated.h>

#define glViewportIndexedf_wrp						\
    ((void  (*)(GLuint index,GLfloat x,GLfloat y,GLfloat w,GLfloat h                                        \
    ))GL_ENTRY_PTR(glViewportIndexedf_Idx))


GLAPI void  APIENTRY glViewportIndexedf(GLuint index,GLfloat x,GLfloat y,GLfloat w,GLfloat h)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glViewportIndexedf_Idx))
	{
            GL_ENTRY_PTR(glViewportIndexedf_Idx) = dlsym(RTLD_NEXT,"glViewportIndexedf");
            if(!GL_ENTRY_PTR(glViewportIndexedf_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glViewportIndexedf_Idx))
    	{
            GL_ENTRY_PREV_TS(glViewportIndexedf_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glViewportIndexedf_wrp(index,x,y,w,h);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glViewportIndexedf_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glViewportIndexedf_Idx) ++;

        GL_ENTRY_LAST_TS(glViewportIndexedf_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glViewportIndexedf_Idx),
				 GL_ENTRY_LAST_TS(glViewportIndexedf_Idx));
        if(last_diff > 1000000000){
            printf("glViewportIndexedf %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glViewportIndexedf_Idx),
	             GL_ENTRY_CALL_TIME(glViewportIndexedf_Idx),
	             GL_ENTRY_CALL_TIME(glViewportIndexedf_Idx) /
	             GL_ENTRY_CALL_COUNT(glViewportIndexedf_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glViewportIndexedf_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glViewportIndexedf_Idx) = 0;
             GL_ENTRY_CALL_TIME(glViewportIndexedf_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glViewportIndexedf_Idx) = get_ts();
        }


	

}