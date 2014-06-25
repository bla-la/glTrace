#include <glTraceCommon.h>
#include <generated.h>

#define glFogCoorddv_wrp						\
    ((void  (*)(const GLdouble *coord                                        \
    ))GL_ENTRY_PTR(glFogCoorddv_Idx))


GLAPI void  APIENTRY glFogCoorddv(const GLdouble *coord)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glFogCoorddv_Idx))
	{
            GL_ENTRY_PTR(glFogCoorddv_Idx) = dlsym(RTLD_NEXT,"glFogCoorddv");
            if(!GL_ENTRY_PTR(glFogCoorddv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glFogCoorddv_Idx))
    	{
            GL_ENTRY_PREV_TS(glFogCoorddv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFogCoorddv_wrp(coord);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFogCoorddv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFogCoorddv_Idx) ++;

        GL_ENTRY_LAST_TS(glFogCoorddv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFogCoorddv_Idx),
				 GL_ENTRY_LAST_TS(glFogCoorddv_Idx));
        if(last_diff > 1000000000){
            printf("glFogCoorddv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFogCoorddv_Idx),
	             GL_ENTRY_CALL_TIME(glFogCoorddv_Idx),
	             GL_ENTRY_CALL_TIME(glFogCoorddv_Idx) /
	             GL_ENTRY_CALL_COUNT(glFogCoorddv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFogCoorddv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFogCoorddv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFogCoorddv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFogCoorddv_Idx) = get_ts();
        }


	

}