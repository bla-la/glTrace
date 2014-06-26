#include <glTraceCommon.h>
#include <generated.h>

#define glFogCoordfEXT_wrp						\
    ((void  (*)(GLfloat coord                                        \
    ))GL_ENTRY_PTR(glFogCoordfEXT_Idx))


GLAPI void  APIENTRY glFogCoordfEXT(GLfloat coord)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFogCoordfEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glFogCoordfEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFogCoordfEXT_wrp(coord);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFogCoordfEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFogCoordfEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glFogCoordfEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFogCoordfEXT_Idx),
				 GL_ENTRY_LAST_TS(glFogCoordfEXT_Idx));


        if(last_diff > 1000000000){
            printf("glFogCoordfEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFogCoordfEXT_Idx),
	             GL_ENTRY_CALL_TIME(glFogCoordfEXT_Idx),
	             GL_ENTRY_CALL_TIME(glFogCoordfEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glFogCoordfEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFogCoordfEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFogCoordfEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFogCoordfEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFogCoordfEXT_Idx) = get_ts();
        }


	

}