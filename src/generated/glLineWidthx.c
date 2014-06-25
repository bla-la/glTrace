#include <glTraceCommon.h>
#include <generated.h>

#define glLineWidthx_wrp						\
    ((void  (*)(GLfixed width                                        \
    ))GL_ENTRY_PTR(glLineWidthx_Idx))


GLAPI void  APIENTRY glLineWidthx(GLfixed width)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glLineWidthx_Idx))
	{
            GL_ENTRY_PTR(glLineWidthx_Idx) = dlsym(RTLD_NEXT,"glLineWidthx");
            if(!GL_ENTRY_PTR(glLineWidthx_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glLineWidthx_Idx))
    	{
            GL_ENTRY_PREV_TS(glLineWidthx_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLineWidthx_wrp(width);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLineWidthx_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLineWidthx_Idx) ++;

        GL_ENTRY_LAST_TS(glLineWidthx_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLineWidthx_Idx),
				 GL_ENTRY_LAST_TS(glLineWidthx_Idx));
        if(last_diff > 1000000000){
            printf("glLineWidthx %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLineWidthx_Idx),
	             GL_ENTRY_CALL_TIME(glLineWidthx_Idx),
	             GL_ENTRY_CALL_TIME(glLineWidthx_Idx) /
	             GL_ENTRY_CALL_COUNT(glLineWidthx_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLineWidthx_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLineWidthx_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLineWidthx_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLineWidthx_Idx) = get_ts();
        }


	

}