#include <glTraceCommon.h>
#include <generated.h>

#define glResetHistogram_wrp						\
    ((void  (*)(GLenum target                                        \
    ))GL_ENTRY_PTR(glResetHistogram_Idx))


GLAPI void  APIENTRY glResetHistogram(GLenum target)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glResetHistogram_Idx))
	{
            GL_ENTRY_PTR(glResetHistogram_Idx) = dlsym(RTLD_NEXT,"glResetHistogram");
            if(!GL_ENTRY_PTR(glResetHistogram_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glResetHistogram_Idx))
    	{
            GL_ENTRY_PREV_TS(glResetHistogram_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glResetHistogram_wrp(target);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glResetHistogram_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glResetHistogram_Idx) ++;

        GL_ENTRY_LAST_TS(glResetHistogram_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glResetHistogram_Idx),
				 GL_ENTRY_LAST_TS(glResetHistogram_Idx));
        if(last_diff > 1000000000){
            printf("glResetHistogram %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glResetHistogram_Idx),
	             GL_ENTRY_CALL_TIME(glResetHistogram_Idx),
	             GL_ENTRY_CALL_TIME(glResetHistogram_Idx) /
	             GL_ENTRY_CALL_COUNT(glResetHistogram_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glResetHistogram_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glResetHistogram_Idx) = 0;
             GL_ENTRY_CALL_TIME(glResetHistogram_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glResetHistogram_Idx) = get_ts();
        }


	

}