#include <glTraceCommon.h>
#include <generated.h>

#define glRecti_wrp						\
    ((void  (*)(GLint x1,GLint y1,GLint x2,GLint y2                                        \
    ))GL_ENTRY_PTR(glRecti_Idx))


GLAPI void  APIENTRY glRecti(GLint x1,GLint y1,GLint x2,GLint y2)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glRecti_Idx))
    	{
            GL_ENTRY_PREV_TS(glRecti_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRecti_wrp(x1,y1,x2,y2);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRecti_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRecti_Idx) ++;

        GL_ENTRY_LAST_TS(glRecti_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRecti_Idx),
				 GL_ENTRY_LAST_TS(glRecti_Idx));


        if(last_diff > 1000000000){
            printf("glRecti %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRecti_Idx),
	             GL_ENTRY_CALL_TIME(glRecti_Idx),
	             GL_ENTRY_CALL_TIME(glRecti_Idx) /
	             GL_ENTRY_CALL_COUNT(glRecti_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRecti_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRecti_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRecti_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRecti_Idx) = get_ts();
        }


	

}