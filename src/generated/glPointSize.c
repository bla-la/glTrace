#include <glTraceCommon.h>
#include <generated.h>

#define glPointSize_wrp						\
    ((void  (*)(GLfloat size                                        \
    ))GL_ENTRY_PTR(glPointSize_Idx))


GLAPI void  APIENTRY glPointSize(GLfloat size)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPointSize_Idx))
	{
            GL_ENTRY_PTR(glPointSize_Idx) = dlsym(RTLD_NEXT,"glPointSize");
            if(!GL_ENTRY_PTR(glPointSize_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPointSize_Idx))
    	{
            GL_ENTRY_PREV_TS(glPointSize_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPointSize_wrp(size);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPointSize_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPointSize_Idx) ++;

        GL_ENTRY_LAST_TS(glPointSize_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPointSize_Idx),
				 GL_ENTRY_LAST_TS(glPointSize_Idx));
        if(last_diff > 1000000000){
            printf("glPointSize %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPointSize_Idx),
	             GL_ENTRY_CALL_TIME(glPointSize_Idx),
	             GL_ENTRY_CALL_TIME(glPointSize_Idx) /
	             GL_ENTRY_CALL_COUNT(glPointSize_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPointSize_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPointSize_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPointSize_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPointSize_Idx) = get_ts();
        }


	

}