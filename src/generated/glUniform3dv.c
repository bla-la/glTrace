#include <glTraceCommon.h>
#include <generated.h>

#define glUniform3dv_wrp						\
    ((void  (*)(GLint location,GLsizei count,const GLdouble *value                                        \
    ))GL_ENTRY_PTR(glUniform3dv_Idx))


GLAPI void  APIENTRY glUniform3dv(GLint location,GLsizei count,const GLdouble *value)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glUniform3dv_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniform3dv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniform3dv_wrp(location,count,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniform3dv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniform3dv_Idx) ++;

        GL_ENTRY_LAST_TS(glUniform3dv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniform3dv_Idx),
				 GL_ENTRY_LAST_TS(glUniform3dv_Idx));


        if(last_diff > 1000000000){
            printf("glUniform3dv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniform3dv_Idx),
	             GL_ENTRY_CALL_TIME(glUniform3dv_Idx),
	             GL_ENTRY_CALL_TIME(glUniform3dv_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniform3dv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniform3dv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniform3dv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniform3dv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniform3dv_Idx) = get_ts();
        }


	

}