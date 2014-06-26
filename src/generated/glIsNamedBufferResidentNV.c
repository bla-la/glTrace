#include <glTraceCommon.h>
#include <generated.h>

#define glIsNamedBufferResidentNV_wrp						\
    ((GLboolean  (*)(GLuint buffer                                        \
    ))GL_ENTRY_PTR(glIsNamedBufferResidentNV_Idx))


GLAPI GLboolean  APIENTRY glIsNamedBufferResidentNV(GLuint buffer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIsNamedBufferResidentNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsNamedBufferResidentNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsNamedBufferResidentNV_wrp(buffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsNamedBufferResidentNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsNamedBufferResidentNV_Idx) ++;

        GL_ENTRY_LAST_TS(glIsNamedBufferResidentNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsNamedBufferResidentNV_Idx),
				 GL_ENTRY_LAST_TS(glIsNamedBufferResidentNV_Idx));


        if(last_diff > 1000000000){
            printf("glIsNamedBufferResidentNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsNamedBufferResidentNV_Idx),
	             GL_ENTRY_CALL_TIME(glIsNamedBufferResidentNV_Idx),
	             GL_ENTRY_CALL_TIME(glIsNamedBufferResidentNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsNamedBufferResidentNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsNamedBufferResidentNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsNamedBufferResidentNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsNamedBufferResidentNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsNamedBufferResidentNV_Idx) = get_ts();
        }


	return retval;

}