#include <glTraceCommon.h>
#include <generated.h>

#define glGetIntegerui64vNV_wrp						\
    ((void  (*)(GLenum value,GLuint64EXT *result                                        \
    ))GL_ENTRY_PTR(glGetIntegerui64vNV_Idx))


GLAPI void  APIENTRY glGetIntegerui64vNV(GLenum value,GLuint64EXT *result)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetIntegerui64vNV_Idx))
	{
            GL_ENTRY_PTR(glGetIntegerui64vNV_Idx) = dlsym(RTLD_NEXT,"glGetIntegerui64vNV");
            if(!GL_ENTRY_PTR(glGetIntegerui64vNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetIntegerui64vNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetIntegerui64vNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetIntegerui64vNV_wrp(value,result);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetIntegerui64vNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetIntegerui64vNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetIntegerui64vNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetIntegerui64vNV_Idx),
				 GL_ENTRY_LAST_TS(glGetIntegerui64vNV_Idx));
        if(last_diff > 1000000000){
            printf("glGetIntegerui64vNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetIntegerui64vNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetIntegerui64vNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetIntegerui64vNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetIntegerui64vNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetIntegerui64vNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetIntegerui64vNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetIntegerui64vNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetIntegerui64vNV_Idx) = get_ts();
        }


	

}