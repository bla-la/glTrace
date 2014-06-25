#include <glTraceCommon.h>
#include <generated.h>

#define glBindBufferBaseNV_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLuint buffer                                        \
    ))GL_ENTRY_PTR(glBindBufferBaseNV_Idx))


GLAPI void  APIENTRY glBindBufferBaseNV(GLenum target,GLuint index,GLuint buffer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBindBufferBaseNV_Idx))
	{
            GL_ENTRY_PTR(glBindBufferBaseNV_Idx) = dlsym(RTLD_NEXT,"glBindBufferBaseNV");
            if(!GL_ENTRY_PTR(glBindBufferBaseNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBindBufferBaseNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindBufferBaseNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindBufferBaseNV_wrp(target,index,buffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindBufferBaseNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindBufferBaseNV_Idx) ++;

        GL_ENTRY_LAST_TS(glBindBufferBaseNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindBufferBaseNV_Idx),
				 GL_ENTRY_LAST_TS(glBindBufferBaseNV_Idx));
        if(last_diff > 1000000000){
            printf("glBindBufferBaseNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindBufferBaseNV_Idx),
	             GL_ENTRY_CALL_TIME(glBindBufferBaseNV_Idx),
	             GL_ENTRY_CALL_TIME(glBindBufferBaseNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindBufferBaseNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindBufferBaseNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindBufferBaseNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindBufferBaseNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindBufferBaseNV_Idx) = get_ts();
        }


	

}