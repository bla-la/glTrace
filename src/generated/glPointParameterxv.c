#include <glTraceCommon.h>
#include <generated.h>

#define glPointParameterxv_wrp						\
    ((void  (*)(GLenum pname,const GLfixed *params                                        \
    ))GL_ENTRY_PTR(glPointParameterxv_Idx))


GLAPI void  APIENTRY glPointParameterxv(GLenum pname,const GLfixed *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPointParameterxv_Idx))
    	{
            GL_ENTRY_PREV_TS(glPointParameterxv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPointParameterxv_wrp(pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPointParameterxv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPointParameterxv_Idx) ++;

        GL_ENTRY_LAST_TS(glPointParameterxv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPointParameterxv_Idx),
				 GL_ENTRY_LAST_TS(glPointParameterxv_Idx));


        if(last_diff > 1000000000){
            printf("glPointParameterxv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPointParameterxv_Idx),
	             GL_ENTRY_CALL_TIME(glPointParameterxv_Idx),
	             GL_ENTRY_CALL_TIME(glPointParameterxv_Idx) /
	             GL_ENTRY_CALL_COUNT(glPointParameterxv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPointParameterxv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPointParameterxv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPointParameterxv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPointParameterxv_Idx) = get_ts();
        }


	

}