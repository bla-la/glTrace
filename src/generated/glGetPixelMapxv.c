#include <glTraceCommon.h>
#include <generated.h>

#define glGetPixelMapxv_wrp						\
    ((void  (*)(GLenum map,GLint size,GLfixed *values                                        \
    ))GL_ENTRY_PTR(glGetPixelMapxv_Idx))


GLAPI void  APIENTRY glGetPixelMapxv(GLenum map,GLint size,GLfixed *values)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetPixelMapxv_Idx))
	{
            GL_ENTRY_PTR(glGetPixelMapxv_Idx) = dlsym(RTLD_NEXT,"glGetPixelMapxv");
            if(!GL_ENTRY_PTR(glGetPixelMapxv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetPixelMapxv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPixelMapxv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetPixelMapxv_wrp(map,size,values);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPixelMapxv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPixelMapxv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPixelMapxv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPixelMapxv_Idx),
				 GL_ENTRY_LAST_TS(glGetPixelMapxv_Idx));
        if(last_diff > 1000000000){
            printf("glGetPixelMapxv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPixelMapxv_Idx),
	             GL_ENTRY_CALL_TIME(glGetPixelMapxv_Idx),
	             GL_ENTRY_CALL_TIME(glGetPixelMapxv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPixelMapxv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPixelMapxv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPixelMapxv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPixelMapxv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPixelMapxv_Idx) = get_ts();
        }


	

}