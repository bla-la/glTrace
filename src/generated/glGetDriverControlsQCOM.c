#include <glTraceCommon.h>
#include <generated.h>

#define glGetDriverControlsQCOM_wrp						\
    ((void  (*)(GLint *num,GLsizei size,GLuint *driverControls                                        \
    ))GL_ENTRY_PTR(glGetDriverControlsQCOM_Idx))


GLAPI void  APIENTRY glGetDriverControlsQCOM(GLint *num,GLsizei size,GLuint *driverControls)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetDriverControlsQCOM_Idx))
	{
            GL_ENTRY_PTR(glGetDriverControlsQCOM_Idx) = dlsym(RTLD_NEXT,"glGetDriverControlsQCOM");
            if(!GL_ENTRY_PTR(glGetDriverControlsQCOM_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetDriverControlsQCOM_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetDriverControlsQCOM_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetDriverControlsQCOM_wrp(num,size,driverControls);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetDriverControlsQCOM_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetDriverControlsQCOM_Idx) ++;

        GL_ENTRY_LAST_TS(glGetDriverControlsQCOM_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetDriverControlsQCOM_Idx),
				 GL_ENTRY_LAST_TS(glGetDriverControlsQCOM_Idx));
        if(last_diff > 1000000000){
            printf("glGetDriverControlsQCOM %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetDriverControlsQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glGetDriverControlsQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glGetDriverControlsQCOM_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetDriverControlsQCOM_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetDriverControlsQCOM_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetDriverControlsQCOM_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetDriverControlsQCOM_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetDriverControlsQCOM_Idx) = get_ts();
        }


	

}