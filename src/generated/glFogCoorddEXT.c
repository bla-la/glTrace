#include <glTraceCommon.h>
#include <generated.h>

#define glFogCoorddEXT_wrp						\
    ((void  (*)(GLdouble coord                                        \
    ))GL_ENTRY_PTR(glFogCoorddEXT_Idx))


GLAPI void  APIENTRY glFogCoorddEXT(GLdouble coord)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glFogCoorddEXT_Idx))
	{
            GL_ENTRY_PTR(glFogCoorddEXT_Idx) = dlsym(RTLD_NEXT,"glFogCoorddEXT");
            if(!GL_ENTRY_PTR(glFogCoorddEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glFogCoorddEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glFogCoorddEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFogCoorddEXT_wrp(coord);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFogCoorddEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFogCoorddEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glFogCoorddEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFogCoorddEXT_Idx),
				 GL_ENTRY_LAST_TS(glFogCoorddEXT_Idx));
        if(last_diff > 1000000000){
            printf("glFogCoorddEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFogCoorddEXT_Idx),
	             GL_ENTRY_CALL_TIME(glFogCoorddEXT_Idx),
	             GL_ENTRY_CALL_TIME(glFogCoorddEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glFogCoorddEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFogCoorddEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFogCoorddEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFogCoorddEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFogCoorddEXT_Idx) = get_ts();
        }


	

}