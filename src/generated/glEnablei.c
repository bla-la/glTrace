#include <glTraceCommon.h>
#include <generated.h>

#define glEnablei_wrp						\
    ((void  (*)(GLenum target,GLuint index                                        \
    ))GL_ENTRY_PTR(glEnablei_Idx))


GLAPI void  APIENTRY glEnablei(GLenum target,GLuint index)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glEnablei_Idx))
    	{
            GL_ENTRY_PREV_TS(glEnablei_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEnablei_wrp(target,index);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEnablei_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEnablei_Idx) ++;

        GL_ENTRY_LAST_TS(glEnablei_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEnablei_Idx),
				 GL_ENTRY_LAST_TS(glEnablei_Idx));


        if(last_diff > 1000000000){
            printf("glEnablei %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEnablei_Idx),
	             GL_ENTRY_CALL_TIME(glEnablei_Idx),
	             GL_ENTRY_CALL_TIME(glEnablei_Idx) /
	             GL_ENTRY_CALL_COUNT(glEnablei_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEnablei_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEnablei_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEnablei_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEnablei_Idx) = get_ts();
        }


	

}