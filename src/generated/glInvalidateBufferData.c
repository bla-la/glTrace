#include <glTraceCommon.h>
#include <generated.h>

#define glInvalidateBufferData_wrp						\
    ((void  (*)(GLuint buffer                                        \
    ))GL_ENTRY_PTR(glInvalidateBufferData_Idx))


GLAPI void  APIENTRY glInvalidateBufferData(GLuint buffer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glInvalidateBufferData_Idx))
    	{
            GL_ENTRY_PREV_TS(glInvalidateBufferData_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glInvalidateBufferData_wrp(buffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glInvalidateBufferData_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glInvalidateBufferData_Idx) ++;

        GL_ENTRY_LAST_TS(glInvalidateBufferData_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glInvalidateBufferData_Idx),
				 GL_ENTRY_LAST_TS(glInvalidateBufferData_Idx));


        if(last_diff > 1000000000){
            printf("glInvalidateBufferData %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glInvalidateBufferData_Idx),
	             GL_ENTRY_CALL_TIME(glInvalidateBufferData_Idx),
	             GL_ENTRY_CALL_TIME(glInvalidateBufferData_Idx) /
	             GL_ENTRY_CALL_COUNT(glInvalidateBufferData_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glInvalidateBufferData_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glInvalidateBufferData_Idx) = 0;
             GL_ENTRY_CALL_TIME(glInvalidateBufferData_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glInvalidateBufferData_Idx) = get_ts();
        }


	

}