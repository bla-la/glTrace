#include <glTraceCommon.h>
#include <generated.h>

#define glRectsv_wrp						\
    ((void  (*)(const GLshort *v1,const GLshort *v2                                        \
    ))GL_ENTRY_PTR(glRectsv_Idx))


GLAPI void  APIENTRY glRectsv(const GLshort *v1,const GLshort *v2)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glRectsv_Idx))
    	{
            GL_ENTRY_PREV_TS(glRectsv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRectsv_wrp(v1,v2);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRectsv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRectsv_Idx) ++;

        GL_ENTRY_LAST_TS(glRectsv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRectsv_Idx),
				 GL_ENTRY_LAST_TS(glRectsv_Idx));


        if(last_diff > 1000000000){
            printf("glRectsv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRectsv_Idx),
	             GL_ENTRY_CALL_TIME(glRectsv_Idx),
	             GL_ENTRY_CALL_TIME(glRectsv_Idx) /
	             GL_ENTRY_CALL_COUNT(glRectsv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRectsv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRectsv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRectsv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRectsv_Idx) = get_ts();
        }


	

}