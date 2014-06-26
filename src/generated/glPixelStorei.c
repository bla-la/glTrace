#include <glTraceCommon.h>
#include <generated.h>

#define glPixelStorei_wrp						\
    ((void  (*)(GLenum pname,GLint param                                        \
    ))GL_ENTRY_PTR(glPixelStorei_Idx))


GLAPI void  APIENTRY glPixelStorei(GLenum pname,GLint param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPixelStorei_Idx))
    	{
            GL_ENTRY_PREV_TS(glPixelStorei_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPixelStorei_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPixelStorei_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPixelStorei_Idx) ++;

        GL_ENTRY_LAST_TS(glPixelStorei_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPixelStorei_Idx),
				 GL_ENTRY_LAST_TS(glPixelStorei_Idx));


        if(last_diff > 1000000000){
            printf("glPixelStorei %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPixelStorei_Idx),
	             GL_ENTRY_CALL_TIME(glPixelStorei_Idx),
	             GL_ENTRY_CALL_TIME(glPixelStorei_Idx) /
	             GL_ENTRY_CALL_COUNT(glPixelStorei_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPixelStorei_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPixelStorei_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPixelStorei_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPixelStorei_Idx) = get_ts();
        }


	

}