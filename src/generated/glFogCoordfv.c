#include <glTraceCommon.h>
#include <generated.h>

#define glFogCoordfv_wrp						\
    ((void  (*)(const GLfloat *coord                                        \
    ))GL_ENTRY_PTR(glFogCoordfv_Idx))


GLAPI void  APIENTRY glFogCoordfv(const GLfloat *coord)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glFogCoordfv_Idx))
	{
            GL_ENTRY_PTR(glFogCoordfv_Idx) = dlsym(RTLD_NEXT,"glFogCoordfv");
            if(!GL_ENTRY_PTR(glFogCoordfv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glFogCoordfv_Idx))
    	{
            GL_ENTRY_PREV_TS(glFogCoordfv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFogCoordfv_wrp(coord);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFogCoordfv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFogCoordfv_Idx) ++;

        GL_ENTRY_LAST_TS(glFogCoordfv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFogCoordfv_Idx),
				 GL_ENTRY_LAST_TS(glFogCoordfv_Idx));
        if(last_diff > 1000000000){
            printf("glFogCoordfv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFogCoordfv_Idx),
	             GL_ENTRY_CALL_TIME(glFogCoordfv_Idx),
	             GL_ENTRY_CALL_TIME(glFogCoordfv_Idx) /
	             GL_ENTRY_CALL_COUNT(glFogCoordfv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFogCoordfv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFogCoordfv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFogCoordfv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFogCoordfv_Idx) = get_ts();
        }


	

}