#include <glTraceCommon.h>
#include <generated.h>

#define glPointParameterx_wrp						\
    ((void  (*)(GLenum pname,GLfixed param                                        \
    ))GL_ENTRY_PTR(glPointParameterx_Idx))


GLAPI void  APIENTRY glPointParameterx(GLenum pname,GLfixed param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPointParameterx_Idx))
    	{
            GL_ENTRY_PREV_TS(glPointParameterx_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPointParameterx_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPointParameterx_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPointParameterx_Idx) ++;

        GL_ENTRY_LAST_TS(glPointParameterx_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPointParameterx_Idx),
				 GL_ENTRY_LAST_TS(glPointParameterx_Idx));


        if(last_diff > 1000000000){
            printf("glPointParameterx %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPointParameterx_Idx),
	             GL_ENTRY_CALL_TIME(glPointParameterx_Idx),
	             GL_ENTRY_CALL_TIME(glPointParameterx_Idx) /
	             GL_ENTRY_CALL_COUNT(glPointParameterx_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPointParameterx_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPointParameterx_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPointParameterx_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPointParameterx_Idx) = get_ts();
        }


	

}