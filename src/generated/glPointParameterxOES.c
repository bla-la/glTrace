#include <glTraceCommon.h>
#include <generated.h>

#define glPointParameterxOES_wrp						\
    ((void  (*)(GLenum pname,GLfixed param                                        \
    ))GL_ENTRY_PTR(glPointParameterxOES_Idx))


GLAPI void  APIENTRY glPointParameterxOES(GLenum pname,GLfixed param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPointParameterxOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glPointParameterxOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPointParameterxOES_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPointParameterxOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPointParameterxOES_Idx) ++;

        GL_ENTRY_LAST_TS(glPointParameterxOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPointParameterxOES_Idx),
				 GL_ENTRY_LAST_TS(glPointParameterxOES_Idx));


        if(last_diff > 1000000000){
            printf("glPointParameterxOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPointParameterxOES_Idx),
	             GL_ENTRY_CALL_TIME(glPointParameterxOES_Idx),
	             GL_ENTRY_CALL_TIME(glPointParameterxOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glPointParameterxOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPointParameterxOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPointParameterxOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPointParameterxOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPointParameterxOES_Idx) = get_ts();
        }


	

}