#include <glTraceCommon.h>
#include <generated.h>

#define glTessellationFactorAMD_wrp						\
    ((void  (*)(GLfloat factor                                        \
    ))GL_ENTRY_PTR(glTessellationFactorAMD_Idx))


GLAPI void  APIENTRY glTessellationFactorAMD(GLfloat factor)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTessellationFactorAMD_Idx))
    	{
            GL_ENTRY_PREV_TS(glTessellationFactorAMD_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTessellationFactorAMD_wrp(factor);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTessellationFactorAMD_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTessellationFactorAMD_Idx) ++;

        GL_ENTRY_LAST_TS(glTessellationFactorAMD_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTessellationFactorAMD_Idx),
				 GL_ENTRY_LAST_TS(glTessellationFactorAMD_Idx));


        if(last_diff > 1000000000){
            printf("glTessellationFactorAMD %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTessellationFactorAMD_Idx),
	             GL_ENTRY_CALL_TIME(glTessellationFactorAMD_Idx),
	             GL_ENTRY_CALL_TIME(glTessellationFactorAMD_Idx) /
	             GL_ENTRY_CALL_COUNT(glTessellationFactorAMD_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTessellationFactorAMD_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTessellationFactorAMD_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTessellationFactorAMD_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTessellationFactorAMD_Idx) = get_ts();
        }


	

}