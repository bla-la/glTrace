#include <glTraceCommon.h>
#include <generated.h>

#define glMakeNamedBufferResidentNV_wrp						\
    ((void  (*)(GLuint buffer,GLenum access                                        \
    ))GL_ENTRY_PTR(glMakeNamedBufferResidentNV_Idx))


GLAPI void  APIENTRY glMakeNamedBufferResidentNV(GLuint buffer,GLenum access)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMakeNamedBufferResidentNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glMakeNamedBufferResidentNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMakeNamedBufferResidentNV_wrp(buffer,access);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMakeNamedBufferResidentNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMakeNamedBufferResidentNV_Idx) ++;

        GL_ENTRY_LAST_TS(glMakeNamedBufferResidentNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMakeNamedBufferResidentNV_Idx),
				 GL_ENTRY_LAST_TS(glMakeNamedBufferResidentNV_Idx));


        if(last_diff > 1000000000){
            printf("glMakeNamedBufferResidentNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMakeNamedBufferResidentNV_Idx),
	             GL_ENTRY_CALL_TIME(glMakeNamedBufferResidentNV_Idx),
	             GL_ENTRY_CALL_TIME(glMakeNamedBufferResidentNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glMakeNamedBufferResidentNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMakeNamedBufferResidentNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMakeNamedBufferResidentNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMakeNamedBufferResidentNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMakeNamedBufferResidentNV_Idx) = get_ts();
        }


	

}