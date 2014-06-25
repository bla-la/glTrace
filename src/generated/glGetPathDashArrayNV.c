#include <glTraceCommon.h>
#include <generated.h>

#define glGetPathDashArrayNV_wrp						\
    ((void  (*)(GLuint path,GLfloat *dashArray                                        \
    ))GL_ENTRY_PTR(glGetPathDashArrayNV_Idx))


GLAPI void  APIENTRY glGetPathDashArrayNV(GLuint path,GLfloat *dashArray)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetPathDashArrayNV_Idx))
	{
            GL_ENTRY_PTR(glGetPathDashArrayNV_Idx) = dlsym(RTLD_NEXT,"glGetPathDashArrayNV");
            if(!GL_ENTRY_PTR(glGetPathDashArrayNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetPathDashArrayNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPathDashArrayNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetPathDashArrayNV_wrp(path,dashArray);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPathDashArrayNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPathDashArrayNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPathDashArrayNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPathDashArrayNV_Idx),
				 GL_ENTRY_LAST_TS(glGetPathDashArrayNV_Idx));
        if(last_diff > 1000000000){
            printf("glGetPathDashArrayNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPathDashArrayNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetPathDashArrayNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetPathDashArrayNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPathDashArrayNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPathDashArrayNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPathDashArrayNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPathDashArrayNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPathDashArrayNV_Idx) = get_ts();
        }


	

}