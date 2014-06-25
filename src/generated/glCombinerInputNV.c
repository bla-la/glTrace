#include <glTraceCommon.h>
#include <generated.h>

#define glCombinerInputNV_wrp						\
    ((void  (*)(GLenum stage,GLenum portion,GLenum variable,GLenum input,GLenum mapping,GLenum componentUsage                                        \
    ))GL_ENTRY_PTR(glCombinerInputNV_Idx))


GLAPI void  APIENTRY glCombinerInputNV(GLenum stage,GLenum portion,GLenum variable,GLenum input,GLenum mapping,GLenum componentUsage)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCombinerInputNV_Idx))
	{
            GL_ENTRY_PTR(glCombinerInputNV_Idx) = dlsym(RTLD_NEXT,"glCombinerInputNV");
            if(!GL_ENTRY_PTR(glCombinerInputNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCombinerInputNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glCombinerInputNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCombinerInputNV_wrp(stage,portion,variable,input,mapping,componentUsage);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCombinerInputNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCombinerInputNV_Idx) ++;

        GL_ENTRY_LAST_TS(glCombinerInputNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCombinerInputNV_Idx),
				 GL_ENTRY_LAST_TS(glCombinerInputNV_Idx));
        if(last_diff > 1000000000){
            printf("glCombinerInputNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCombinerInputNV_Idx),
	             GL_ENTRY_CALL_TIME(glCombinerInputNV_Idx),
	             GL_ENTRY_CALL_TIME(glCombinerInputNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glCombinerInputNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCombinerInputNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCombinerInputNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCombinerInputNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCombinerInputNV_Idx) = get_ts();
        }


	

}