#include <glTraceCommon.h>
#include <generated.h>

#define glFogCoordfvEXT_wrp						\
    ((void  (*)(const GLfloat *coord                                        \
    ))GL_ENTRY_PTR(glFogCoordfvEXT_Idx))


GLAPI void  APIENTRY glFogCoordfvEXT(const GLfloat *coord)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glFogCoordfvEXT_Idx))
	{
            GL_ENTRY_PTR(glFogCoordfvEXT_Idx) = dlsym(RTLD_NEXT,"glFogCoordfvEXT");
            if(!GL_ENTRY_PTR(glFogCoordfvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glFogCoordfvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glFogCoordfvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFogCoordfvEXT_wrp(coord);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFogCoordfvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFogCoordfvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glFogCoordfvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFogCoordfvEXT_Idx),
				 GL_ENTRY_LAST_TS(glFogCoordfvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glFogCoordfvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFogCoordfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glFogCoordfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glFogCoordfvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glFogCoordfvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFogCoordfvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFogCoordfvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFogCoordfvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFogCoordfvEXT_Idx) = get_ts();
        }


	

}