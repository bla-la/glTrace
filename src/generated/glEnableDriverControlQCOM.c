#include <glTraceCommon.h>
#include <generated.h>

#define glEnableDriverControlQCOM_wrp						\
    ((void  (*)(GLuint driverControl                                        \
    ))GL_ENTRY_PTR(glEnableDriverControlQCOM_Idx))


GLAPI void  APIENTRY glEnableDriverControlQCOM(GLuint driverControl)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glEnableDriverControlQCOM_Idx))
    	{
            GL_ENTRY_PREV_TS(glEnableDriverControlQCOM_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEnableDriverControlQCOM_wrp(driverControl);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEnableDriverControlQCOM_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEnableDriverControlQCOM_Idx) ++;

        GL_ENTRY_LAST_TS(glEnableDriverControlQCOM_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEnableDriverControlQCOM_Idx),
				 GL_ENTRY_LAST_TS(glEnableDriverControlQCOM_Idx));


        if(last_diff > 1000000000){
            printf("glEnableDriverControlQCOM %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEnableDriverControlQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glEnableDriverControlQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glEnableDriverControlQCOM_Idx) /
	             GL_ENTRY_CALL_COUNT(glEnableDriverControlQCOM_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEnableDriverControlQCOM_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEnableDriverControlQCOM_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEnableDriverControlQCOM_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEnableDriverControlQCOM_Idx) = get_ts();
        }


	

}