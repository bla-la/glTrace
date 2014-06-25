#include <glTraceCommon.h>
#include <generated.h>

#define glPointSizex_wrp						\
    ((void  (*)(GLfixed size                                        \
    ))GL_ENTRY_PTR(glPointSizex_Idx))


GLAPI void  APIENTRY glPointSizex(GLfixed size)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPointSizex_Idx))
	{
            GL_ENTRY_PTR(glPointSizex_Idx) = dlsym(RTLD_NEXT,"glPointSizex");
            if(!GL_ENTRY_PTR(glPointSizex_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPointSizex_Idx))
    	{
            GL_ENTRY_PREV_TS(glPointSizex_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPointSizex_wrp(size);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPointSizex_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPointSizex_Idx) ++;

        GL_ENTRY_LAST_TS(glPointSizex_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPointSizex_Idx),
				 GL_ENTRY_LAST_TS(glPointSizex_Idx));
        if(last_diff > 1000000000){
            printf("glPointSizex %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPointSizex_Idx),
	             GL_ENTRY_CALL_TIME(glPointSizex_Idx),
	             GL_ENTRY_CALL_TIME(glPointSizex_Idx) /
	             GL_ENTRY_CALL_COUNT(glPointSizex_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPointSizex_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPointSizex_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPointSizex_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPointSizex_Idx) = get_ts();
        }


	

}