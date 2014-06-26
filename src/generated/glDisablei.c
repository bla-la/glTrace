#include <glTraceCommon.h>
#include <generated.h>

#define glDisablei_wrp						\
    ((void  (*)(GLenum target,GLuint index                                        \
    ))GL_ENTRY_PTR(glDisablei_Idx))


GLAPI void  APIENTRY glDisablei(GLenum target,GLuint index)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDisablei_Idx))
    	{
            GL_ENTRY_PREV_TS(glDisablei_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDisablei_wrp(target,index);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDisablei_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDisablei_Idx) ++;

        GL_ENTRY_LAST_TS(glDisablei_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDisablei_Idx),
				 GL_ENTRY_LAST_TS(glDisablei_Idx));


        if(last_diff > 1000000000){
            printf("glDisablei %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDisablei_Idx),
	             GL_ENTRY_CALL_TIME(glDisablei_Idx),
	             GL_ENTRY_CALL_TIME(glDisablei_Idx) /
	             GL_ENTRY_CALL_COUNT(glDisablei_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDisablei_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDisablei_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDisablei_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDisablei_Idx) = get_ts();
        }


	

}