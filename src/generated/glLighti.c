#include <glTraceCommon.h>
#include <generated.h>

#define glLighti_wrp						\
    ((void  (*)(GLenum light,GLenum pname,GLint param                                        \
    ))GL_ENTRY_PTR(glLighti_Idx))


GLAPI void  APIENTRY glLighti(GLenum light,GLenum pname,GLint param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glLighti_Idx))
    	{
            GL_ENTRY_PREV_TS(glLighti_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLighti_wrp(light,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLighti_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLighti_Idx) ++;

        GL_ENTRY_LAST_TS(glLighti_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLighti_Idx),
				 GL_ENTRY_LAST_TS(glLighti_Idx));


        if(last_diff > 1000000000){
            printf("glLighti %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLighti_Idx),
	             GL_ENTRY_CALL_TIME(glLighti_Idx),
	             GL_ENTRY_CALL_TIME(glLighti_Idx) /
	             GL_ENTRY_CALL_COUNT(glLighti_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLighti_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLighti_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLighti_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLighti_Idx) = get_ts();
        }


	

}