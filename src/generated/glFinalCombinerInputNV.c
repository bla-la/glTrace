#include <glTraceCommon.h>
#include <generated.h>

#define glFinalCombinerInputNV_wrp						\
    ((void  (*)(GLenum variable,GLenum input,GLenum mapping,GLenum componentUsage                                        \
    ))GL_ENTRY_PTR(glFinalCombinerInputNV_Idx))


GLAPI void  APIENTRY glFinalCombinerInputNV(GLenum variable,GLenum input,GLenum mapping,GLenum componentUsage)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glFinalCombinerInputNV_Idx))
	{
            GL_ENTRY_PTR(glFinalCombinerInputNV_Idx) = dlsym(RTLD_NEXT,"glFinalCombinerInputNV");
            if(!GL_ENTRY_PTR(glFinalCombinerInputNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glFinalCombinerInputNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glFinalCombinerInputNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFinalCombinerInputNV_wrp(variable,input,mapping,componentUsage);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFinalCombinerInputNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFinalCombinerInputNV_Idx) ++;

        GL_ENTRY_LAST_TS(glFinalCombinerInputNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFinalCombinerInputNV_Idx),
				 GL_ENTRY_LAST_TS(glFinalCombinerInputNV_Idx));
        if(last_diff > 1000000000){
            printf("glFinalCombinerInputNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFinalCombinerInputNV_Idx),
	             GL_ENTRY_CALL_TIME(glFinalCombinerInputNV_Idx),
	             GL_ENTRY_CALL_TIME(glFinalCombinerInputNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glFinalCombinerInputNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFinalCombinerInputNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFinalCombinerInputNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFinalCombinerInputNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFinalCombinerInputNV_Idx) = get_ts();
        }


	

}