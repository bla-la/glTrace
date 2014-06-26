#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteSamplers_wrp						\
    ((void  (*)(GLsizei count,const GLuint *samplers                                        \
    ))GL_ENTRY_PTR(glDeleteSamplers_Idx))


GLAPI void  APIENTRY glDeleteSamplers(GLsizei count,const GLuint *samplers)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDeleteSamplers_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteSamplers_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteSamplers_wrp(count,samplers);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteSamplers_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteSamplers_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteSamplers_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteSamplers_Idx),
				 GL_ENTRY_LAST_TS(glDeleteSamplers_Idx));


        if(last_diff > 1000000000){
            printf("glDeleteSamplers %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteSamplers_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteSamplers_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteSamplers_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteSamplers_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteSamplers_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteSamplers_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteSamplers_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteSamplers_Idx) = get_ts();
        }


	

}