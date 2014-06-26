#include <glTraceCommon.h>
#include <generated.h>

#define glBindFragmentShaderATI_wrp						\
    ((void  (*)(GLuint id                                        \
    ))GL_ENTRY_PTR(glBindFragmentShaderATI_Idx))


GLAPI void  APIENTRY glBindFragmentShaderATI(GLuint id)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBindFragmentShaderATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindFragmentShaderATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindFragmentShaderATI_wrp(id);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindFragmentShaderATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindFragmentShaderATI_Idx) ++;

        GL_ENTRY_LAST_TS(glBindFragmentShaderATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindFragmentShaderATI_Idx),
				 GL_ENTRY_LAST_TS(glBindFragmentShaderATI_Idx));


        if(last_diff > 1000000000){
            printf("glBindFragmentShaderATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindFragmentShaderATI_Idx),
	             GL_ENTRY_CALL_TIME(glBindFragmentShaderATI_Idx),
	             GL_ENTRY_CALL_TIME(glBindFragmentShaderATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindFragmentShaderATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindFragmentShaderATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindFragmentShaderATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindFragmentShaderATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindFragmentShaderATI_Idx) = get_ts();
        }


	

}