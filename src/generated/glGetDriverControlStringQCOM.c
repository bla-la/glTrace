#include <glTraceCommon.h>
#include <generated.h>

#define glGetDriverControlStringQCOM_wrp						\
    ((void  (*)(GLuint driverControl,GLsizei bufSize,GLsizei *length,GLchar *driverControlString                                        \
    ))GL_ENTRY_PTR(glGetDriverControlStringQCOM_Idx))


GLAPI void  APIENTRY glGetDriverControlStringQCOM(GLuint driverControl,GLsizei bufSize,GLsizei *length,GLchar *driverControlString)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetDriverControlStringQCOM_Idx))
	{
            GL_ENTRY_PTR(glGetDriverControlStringQCOM_Idx) = dlsym(RTLD_NEXT,"glGetDriverControlStringQCOM");
            if(!GL_ENTRY_PTR(glGetDriverControlStringQCOM_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetDriverControlStringQCOM_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetDriverControlStringQCOM_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetDriverControlStringQCOM_wrp(driverControl,bufSize,length,driverControlString);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetDriverControlStringQCOM_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetDriverControlStringQCOM_Idx) ++;

        GL_ENTRY_LAST_TS(glGetDriverControlStringQCOM_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetDriverControlStringQCOM_Idx),
				 GL_ENTRY_LAST_TS(glGetDriverControlStringQCOM_Idx));
        if(last_diff > 1000000000){
            printf("glGetDriverControlStringQCOM %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetDriverControlStringQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glGetDriverControlStringQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glGetDriverControlStringQCOM_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetDriverControlStringQCOM_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetDriverControlStringQCOM_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetDriverControlStringQCOM_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetDriverControlStringQCOM_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetDriverControlStringQCOM_Idx) = get_ts();
        }


	

}