#include <glTraceCommon.h>
#include <generated.h>

#define glExtIsProgramBinaryQCOM_wrp						\
    ((GLboolean  (*)(GLuint program                                        \
    ))GL_ENTRY_PTR(glExtIsProgramBinaryQCOM_Idx))


GLAPI GLboolean  APIENTRY glExtIsProgramBinaryQCOM(GLuint program)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glExtIsProgramBinaryQCOM_Idx))
	{
            GL_ENTRY_PTR(glExtIsProgramBinaryQCOM_Idx) = dlsym(RTLD_NEXT,"glExtIsProgramBinaryQCOM");
            if(!GL_ENTRY_PTR(glExtIsProgramBinaryQCOM_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glExtIsProgramBinaryQCOM_Idx))
    	{
            GL_ENTRY_PREV_TS(glExtIsProgramBinaryQCOM_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glExtIsProgramBinaryQCOM_wrp(program);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glExtIsProgramBinaryQCOM_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glExtIsProgramBinaryQCOM_Idx) ++;

        GL_ENTRY_LAST_TS(glExtIsProgramBinaryQCOM_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glExtIsProgramBinaryQCOM_Idx),
				 GL_ENTRY_LAST_TS(glExtIsProgramBinaryQCOM_Idx));
        if(last_diff > 1000000000){
            printf("glExtIsProgramBinaryQCOM %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glExtIsProgramBinaryQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glExtIsProgramBinaryQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glExtIsProgramBinaryQCOM_Idx) /
	             GL_ENTRY_CALL_COUNT(glExtIsProgramBinaryQCOM_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glExtIsProgramBinaryQCOM_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glExtIsProgramBinaryQCOM_Idx) = 0;
             GL_ENTRY_CALL_TIME(glExtIsProgramBinaryQCOM_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glExtIsProgramBinaryQCOM_Idx) = get_ts();
        }


	return retval;

}