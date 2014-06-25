#include <glTraceCommon.h>
#include <generated.h>

#define glEvalMapsNV_wrp						\
    ((void  (*)(GLenum target,GLenum mode                                        \
    ))GL_ENTRY_PTR(glEvalMapsNV_Idx))


GLAPI void  APIENTRY glEvalMapsNV(GLenum target,GLenum mode)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glEvalMapsNV_Idx))
	{
            GL_ENTRY_PTR(glEvalMapsNV_Idx) = dlsym(RTLD_NEXT,"glEvalMapsNV");
            if(!GL_ENTRY_PTR(glEvalMapsNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glEvalMapsNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glEvalMapsNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEvalMapsNV_wrp(target,mode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEvalMapsNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEvalMapsNV_Idx) ++;

        GL_ENTRY_LAST_TS(glEvalMapsNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEvalMapsNV_Idx),
				 GL_ENTRY_LAST_TS(glEvalMapsNV_Idx));
        if(last_diff > 1000000000){
            printf("glEvalMapsNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEvalMapsNV_Idx),
	             GL_ENTRY_CALL_TIME(glEvalMapsNV_Idx),
	             GL_ENTRY_CALL_TIME(glEvalMapsNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glEvalMapsNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEvalMapsNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEvalMapsNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEvalMapsNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEvalMapsNV_Idx) = get_ts();
        }


	

}