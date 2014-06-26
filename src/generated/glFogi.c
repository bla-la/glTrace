#include <glTraceCommon.h>
#include <generated.h>

#define glFogi_wrp						\
    ((void  (*)(GLenum pname,GLint param                                        \
    ))GL_ENTRY_PTR(glFogi_Idx))


GLAPI void  APIENTRY glFogi(GLenum pname,GLint param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFogi_Idx))
    	{
            GL_ENTRY_PREV_TS(glFogi_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFogi_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFogi_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFogi_Idx) ++;

        GL_ENTRY_LAST_TS(glFogi_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFogi_Idx),
				 GL_ENTRY_LAST_TS(glFogi_Idx));


        if(last_diff > 1000000000){
            printf("glFogi %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFogi_Idx),
	             GL_ENTRY_CALL_TIME(glFogi_Idx),
	             GL_ENTRY_CALL_TIME(glFogi_Idx) /
	             GL_ENTRY_CALL_COUNT(glFogi_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFogi_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFogi_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFogi_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFogi_Idx) = get_ts();
        }


	

}