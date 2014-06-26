#include <glTraceCommon.h>
#include <generated.h>

#define glUniform3d_wrp						\
    ((void  (*)(GLint location,GLdouble x,GLdouble y,GLdouble z                                        \
    ))GL_ENTRY_PTR(glUniform3d_Idx))


GLAPI void  APIENTRY glUniform3d(GLint location,GLdouble x,GLdouble y,GLdouble z)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glUniform3d_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniform3d_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniform3d_wrp(location,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniform3d_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniform3d_Idx) ++;

        GL_ENTRY_LAST_TS(glUniform3d_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniform3d_Idx),
				 GL_ENTRY_LAST_TS(glUniform3d_Idx));


        if(last_diff > 1000000000){
            printf("glUniform3d %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniform3d_Idx),
	             GL_ENTRY_CALL_TIME(glUniform3d_Idx),
	             GL_ENTRY_CALL_TIME(glUniform3d_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniform3d_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniform3d_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniform3d_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniform3d_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniform3d_Idx) = get_ts();
        }


	

}