#include <glTraceCommon.h>
#include <generated.h>

#define glBindSamplers_wrp						\
    ((void  (*)(GLuint first,GLsizei count,const GLuint *samplers                                        \
    ))GL_ENTRY_PTR(glBindSamplers_Idx))


GLAPI void  APIENTRY glBindSamplers(GLuint first,GLsizei count,const GLuint *samplers)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBindSamplers_Idx))
	{
            GL_ENTRY_PTR(glBindSamplers_Idx) = dlsym(RTLD_NEXT,"glBindSamplers");
            if(!GL_ENTRY_PTR(glBindSamplers_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBindSamplers_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindSamplers_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindSamplers_wrp(first,count,samplers);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindSamplers_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindSamplers_Idx) ++;

        GL_ENTRY_LAST_TS(glBindSamplers_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindSamplers_Idx),
				 GL_ENTRY_LAST_TS(glBindSamplers_Idx));
        if(last_diff > 1000000000){
            printf("glBindSamplers %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindSamplers_Idx),
	             GL_ENTRY_CALL_TIME(glBindSamplers_Idx),
	             GL_ENTRY_CALL_TIME(glBindSamplers_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindSamplers_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindSamplers_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindSamplers_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindSamplers_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindSamplers_Idx) = get_ts();
        }


	

}