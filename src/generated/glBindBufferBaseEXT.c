#include <glTraceCommon.h>
#include <generated.h>

#define glBindBufferBaseEXT_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLuint buffer                                        \
    ))GL_ENTRY_PTR(glBindBufferBaseEXT_Idx))


GLAPI void  APIENTRY glBindBufferBaseEXT(GLenum target,GLuint index,GLuint buffer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBindBufferBaseEXT_Idx))
	{
            GL_ENTRY_PTR(glBindBufferBaseEXT_Idx) = dlsym(RTLD_NEXT,"glBindBufferBaseEXT");
            if(!GL_ENTRY_PTR(glBindBufferBaseEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBindBufferBaseEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindBufferBaseEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindBufferBaseEXT_wrp(target,index,buffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindBufferBaseEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindBufferBaseEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBindBufferBaseEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindBufferBaseEXT_Idx),
				 GL_ENTRY_LAST_TS(glBindBufferBaseEXT_Idx));
        if(last_diff > 1000000000){
            printf("glBindBufferBaseEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindBufferBaseEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBindBufferBaseEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBindBufferBaseEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindBufferBaseEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindBufferBaseEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindBufferBaseEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindBufferBaseEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindBufferBaseEXT_Idx) = get_ts();
        }


	

}