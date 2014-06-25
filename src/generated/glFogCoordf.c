#include <glTraceCommon.h>
#include <generated.h>

#define glFogCoordf_wrp						\
    ((void  (*)(GLfloat coord                                        \
    ))GL_ENTRY_PTR(glFogCoordf_Idx))


GLAPI void  APIENTRY glFogCoordf(GLfloat coord)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glFogCoordf_Idx))
	{
            GL_ENTRY_PTR(glFogCoordf_Idx) = dlsym(RTLD_NEXT,"glFogCoordf");
            if(!GL_ENTRY_PTR(glFogCoordf_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glFogCoordf_Idx))
    	{
            GL_ENTRY_PREV_TS(glFogCoordf_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFogCoordf_wrp(coord);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFogCoordf_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFogCoordf_Idx) ++;

        GL_ENTRY_LAST_TS(glFogCoordf_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFogCoordf_Idx),
				 GL_ENTRY_LAST_TS(glFogCoordf_Idx));
        if(last_diff > 1000000000){
            printf("glFogCoordf %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFogCoordf_Idx),
	             GL_ENTRY_CALL_TIME(glFogCoordf_Idx),
	             GL_ENTRY_CALL_TIME(glFogCoordf_Idx) /
	             GL_ENTRY_CALL_COUNT(glFogCoordf_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFogCoordf_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFogCoordf_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFogCoordf_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFogCoordf_Idx) = get_ts();
        }


	

}