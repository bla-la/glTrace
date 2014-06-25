#include <glTraceCommon.h>
#include <generated.h>

#define glPixelMapfv_wrp						\
    ((void  (*)(GLenum map,GLsizei mapsize,const GLfloat *values                                        \
    ))GL_ENTRY_PTR(glPixelMapfv_Idx))


GLAPI void  APIENTRY glPixelMapfv(GLenum map,GLsizei mapsize,const GLfloat *values)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPixelMapfv_Idx))
	{
            GL_ENTRY_PTR(glPixelMapfv_Idx) = dlsym(RTLD_NEXT,"glPixelMapfv");
            if(!GL_ENTRY_PTR(glPixelMapfv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPixelMapfv_Idx))
    	{
            GL_ENTRY_PREV_TS(glPixelMapfv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPixelMapfv_wrp(map,mapsize,values);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPixelMapfv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPixelMapfv_Idx) ++;

        GL_ENTRY_LAST_TS(glPixelMapfv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPixelMapfv_Idx),
				 GL_ENTRY_LAST_TS(glPixelMapfv_Idx));
        if(last_diff > 1000000000){
            printf("glPixelMapfv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPixelMapfv_Idx),
	             GL_ENTRY_CALL_TIME(glPixelMapfv_Idx),
	             GL_ENTRY_CALL_TIME(glPixelMapfv_Idx) /
	             GL_ENTRY_CALL_COUNT(glPixelMapfv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPixelMapfv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPixelMapfv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPixelMapfv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPixelMapfv_Idx) = get_ts();
        }


	

}