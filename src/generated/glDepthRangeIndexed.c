#include <glTraceCommon.h>
#include <generated.h>

#define glDepthRangeIndexed_wrp						\
    ((void  (*)(GLuint index,GLdouble n,GLdouble f                                        \
    ))GL_ENTRY_PTR(glDepthRangeIndexed_Idx))


GLAPI void  APIENTRY glDepthRangeIndexed(GLuint index,GLdouble n,GLdouble f)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDepthRangeIndexed_Idx))
	{
            GL_ENTRY_PTR(glDepthRangeIndexed_Idx) = dlsym(RTLD_NEXT,"glDepthRangeIndexed");
            if(!GL_ENTRY_PTR(glDepthRangeIndexed_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDepthRangeIndexed_Idx))
    	{
            GL_ENTRY_PREV_TS(glDepthRangeIndexed_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDepthRangeIndexed_wrp(index,n,f);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDepthRangeIndexed_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDepthRangeIndexed_Idx) ++;

        GL_ENTRY_LAST_TS(glDepthRangeIndexed_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDepthRangeIndexed_Idx),
				 GL_ENTRY_LAST_TS(glDepthRangeIndexed_Idx));
        if(last_diff > 1000000000){
            printf("glDepthRangeIndexed %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDepthRangeIndexed_Idx),
	             GL_ENTRY_CALL_TIME(glDepthRangeIndexed_Idx),
	             GL_ENTRY_CALL_TIME(glDepthRangeIndexed_Idx) /
	             GL_ENTRY_CALL_COUNT(glDepthRangeIndexed_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDepthRangeIndexed_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDepthRangeIndexed_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDepthRangeIndexed_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDepthRangeIndexed_Idx) = get_ts();
        }


	

}