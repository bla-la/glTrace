#include <glTraceCommon.h>
#include <generated.h>

#define glIndexf_wrp						\
    ((void  (*)(GLfloat c                                        \
    ))GL_ENTRY_PTR(glIndexf_Idx))


GLAPI void  APIENTRY glIndexf(GLfloat c)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIndexf_Idx))
    	{
            GL_ENTRY_PREV_TS(glIndexf_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glIndexf_wrp(c);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIndexf_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIndexf_Idx) ++;

        GL_ENTRY_LAST_TS(glIndexf_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIndexf_Idx),
				 GL_ENTRY_LAST_TS(glIndexf_Idx));


        if(last_diff > 1000000000){
            printf("glIndexf %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIndexf_Idx),
	             GL_ENTRY_CALL_TIME(glIndexf_Idx),
	             GL_ENTRY_CALL_TIME(glIndexf_Idx) /
	             GL_ENTRY_CALL_COUNT(glIndexf_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIndexf_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIndexf_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIndexf_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIndexf_Idx) = get_ts();
        }


	

}