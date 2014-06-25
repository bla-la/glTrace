#include <glTraceCommon.h>
#include <generated.h>

#define glPixelMapusv_wrp						\
    ((void  (*)(GLenum map,GLsizei mapsize,const GLushort *values                                        \
    ))GL_ENTRY_PTR(glPixelMapusv_Idx))


GLAPI void  APIENTRY glPixelMapusv(GLenum map,GLsizei mapsize,const GLushort *values)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPixelMapusv_Idx))
	{
            GL_ENTRY_PTR(glPixelMapusv_Idx) = dlsym(RTLD_NEXT,"glPixelMapusv");
            if(!GL_ENTRY_PTR(glPixelMapusv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPixelMapusv_Idx))
    	{
            GL_ENTRY_PREV_TS(glPixelMapusv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPixelMapusv_wrp(map,mapsize,values);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPixelMapusv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPixelMapusv_Idx) ++;

        GL_ENTRY_LAST_TS(glPixelMapusv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPixelMapusv_Idx),
				 GL_ENTRY_LAST_TS(glPixelMapusv_Idx));
        if(last_diff > 1000000000){
            printf("glPixelMapusv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPixelMapusv_Idx),
	             GL_ENTRY_CALL_TIME(glPixelMapusv_Idx),
	             GL_ENTRY_CALL_TIME(glPixelMapusv_Idx) /
	             GL_ENTRY_CALL_COUNT(glPixelMapusv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPixelMapusv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPixelMapusv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPixelMapusv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPixelMapusv_Idx) = get_ts();
        }


	

}