#include <glTraceCommon.h>
#include <generated.h>

#define glDisableDriverControlQCOM_wrp						\
    ((void  (*)(GLuint driverControl                                        \
    ))GL_ENTRY_PTR(glDisableDriverControlQCOM_Idx))


GLAPI void  APIENTRY glDisableDriverControlQCOM(GLuint driverControl)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDisableDriverControlQCOM_Idx))
	{
            GL_ENTRY_PTR(glDisableDriverControlQCOM_Idx) = dlsym(RTLD_NEXT,"glDisableDriverControlQCOM");
            if(!GL_ENTRY_PTR(glDisableDriverControlQCOM_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDisableDriverControlQCOM_Idx))
    	{
            GL_ENTRY_PREV_TS(glDisableDriverControlQCOM_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDisableDriverControlQCOM_wrp(driverControl);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDisableDriverControlQCOM_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDisableDriverControlQCOM_Idx) ++;

        GL_ENTRY_LAST_TS(glDisableDriverControlQCOM_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDisableDriverControlQCOM_Idx),
				 GL_ENTRY_LAST_TS(glDisableDriverControlQCOM_Idx));
        if(last_diff > 1000000000){
            printf("glDisableDriverControlQCOM %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDisableDriverControlQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glDisableDriverControlQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glDisableDriverControlQCOM_Idx) /
	             GL_ENTRY_CALL_COUNT(glDisableDriverControlQCOM_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDisableDriverControlQCOM_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDisableDriverControlQCOM_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDisableDriverControlQCOM_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDisableDriverControlQCOM_Idx) = get_ts();
        }


	

}