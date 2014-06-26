#include <glTraceCommon.h>
#include <generated.h>

#define glFogCoorddvEXT_wrp						\
    ((void  (*)(const GLdouble *coord                                        \
    ))GL_ENTRY_PTR(glFogCoorddvEXT_Idx))


GLAPI void  APIENTRY glFogCoorddvEXT(const GLdouble *coord)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFogCoorddvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glFogCoorddvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFogCoorddvEXT_wrp(coord);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFogCoorddvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFogCoorddvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glFogCoorddvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFogCoorddvEXT_Idx),
				 GL_ENTRY_LAST_TS(glFogCoorddvEXT_Idx));


        if(last_diff > 1000000000){
            printf("glFogCoorddvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFogCoorddvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glFogCoorddvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glFogCoorddvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glFogCoorddvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFogCoorddvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFogCoorddvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFogCoorddvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFogCoorddvEXT_Idx) = get_ts();
        }


	

}