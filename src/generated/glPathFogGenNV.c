#include <glTraceCommon.h>
#include <generated.h>

#define glPathFogGenNV_wrp						\
    ((void  (*)(GLenum genMode                                        \
    ))GL_ENTRY_PTR(glPathFogGenNV_Idx))


GLAPI void  APIENTRY glPathFogGenNV(GLenum genMode)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPathFogGenNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glPathFogGenNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPathFogGenNV_wrp(genMode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPathFogGenNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPathFogGenNV_Idx) ++;

        GL_ENTRY_LAST_TS(glPathFogGenNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPathFogGenNV_Idx),
				 GL_ENTRY_LAST_TS(glPathFogGenNV_Idx));


        if(last_diff > 1000000000){
            printf("glPathFogGenNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPathFogGenNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathFogGenNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathFogGenNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glPathFogGenNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPathFogGenNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPathFogGenNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPathFogGenNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPathFogGenNV_Idx) = get_ts();
        }


	

}