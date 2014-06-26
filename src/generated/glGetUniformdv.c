#include <glTraceCommon.h>
#include <generated.h>

#define glGetUniformdv_wrp						\
    ((void  (*)(GLuint program,GLint location,GLdouble *params                                        \
    ))GL_ENTRY_PTR(glGetUniformdv_Idx))


GLAPI void  APIENTRY glGetUniformdv(GLuint program,GLint location,GLdouble *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetUniformdv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetUniformdv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetUniformdv_wrp(program,location,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetUniformdv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetUniformdv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetUniformdv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetUniformdv_Idx),
				 GL_ENTRY_LAST_TS(glGetUniformdv_Idx));


        if(last_diff > 1000000000){
            printf("glGetUniformdv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetUniformdv_Idx),
	             GL_ENTRY_CALL_TIME(glGetUniformdv_Idx),
	             GL_ENTRY_CALL_TIME(glGetUniformdv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetUniformdv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetUniformdv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetUniformdv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetUniformdv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetUniformdv_Idx) = get_ts();
        }


	

}