#include <glTraceCommon.h>
#include <generated.h>

#define glPointSizexOES_wrp						\
    ((void  (*)(GLfixed size                                        \
    ))GL_ENTRY_PTR(glPointSizexOES_Idx))


GLAPI void  APIENTRY glPointSizexOES(GLfixed size)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPointSizexOES_Idx))
	{
            GL_ENTRY_PTR(glPointSizexOES_Idx) = dlsym(RTLD_NEXT,"glPointSizexOES");
            if(!GL_ENTRY_PTR(glPointSizexOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPointSizexOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glPointSizexOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPointSizexOES_wrp(size);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPointSizexOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPointSizexOES_Idx) ++;

        GL_ENTRY_LAST_TS(glPointSizexOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPointSizexOES_Idx),
				 GL_ENTRY_LAST_TS(glPointSizexOES_Idx));
        if(last_diff > 1000000000){
            printf("glPointSizexOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPointSizexOES_Idx),
	             GL_ENTRY_CALL_TIME(glPointSizexOES_Idx),
	             GL_ENTRY_CALL_TIME(glPointSizexOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glPointSizexOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPointSizexOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPointSizexOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPointSizexOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPointSizexOES_Idx) = get_ts();
        }


	

}