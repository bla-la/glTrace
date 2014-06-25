#include <glTraceCommon.h>
#include <generated.h>

#define glGetPixelMapusv_wrp						\
    ((void  (*)(GLenum map,GLushort *values                                        \
    ))GL_ENTRY_PTR(glGetPixelMapusv_Idx))


GLAPI void  APIENTRY glGetPixelMapusv(GLenum map,GLushort *values)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetPixelMapusv_Idx))
	{
            GL_ENTRY_PTR(glGetPixelMapusv_Idx) = dlsym(RTLD_NEXT,"glGetPixelMapusv");
            if(!GL_ENTRY_PTR(glGetPixelMapusv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetPixelMapusv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPixelMapusv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetPixelMapusv_wrp(map,values);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPixelMapusv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPixelMapusv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPixelMapusv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPixelMapusv_Idx),
				 GL_ENTRY_LAST_TS(glGetPixelMapusv_Idx));
        if(last_diff > 1000000000){
            printf("glGetPixelMapusv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPixelMapusv_Idx),
	             GL_ENTRY_CALL_TIME(glGetPixelMapusv_Idx),
	             GL_ENTRY_CALL_TIME(glGetPixelMapusv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPixelMapusv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPixelMapusv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPixelMapusv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPixelMapusv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPixelMapusv_Idx) = get_ts();
        }


	

}