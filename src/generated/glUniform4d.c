#include <glTraceCommon.h>
#include <generated.h>

#define glUniform4d_wrp						\
    ((void  (*)(GLint location,GLdouble x,GLdouble y,GLdouble z,GLdouble w                                        \
    ))GL_ENTRY_PTR(glUniform4d_Idx))


GLAPI void  APIENTRY glUniform4d(GLint location,GLdouble x,GLdouble y,GLdouble z,GLdouble w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUniform4d_Idx))
	{
            GL_ENTRY_PTR(glUniform4d_Idx) = dlsym(RTLD_NEXT,"glUniform4d");
            if(!GL_ENTRY_PTR(glUniform4d_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUniform4d_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniform4d_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniform4d_wrp(location,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniform4d_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniform4d_Idx) ++;

        GL_ENTRY_LAST_TS(glUniform4d_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniform4d_Idx),
				 GL_ENTRY_LAST_TS(glUniform4d_Idx));
        if(last_diff > 1000000000){
            printf("glUniform4d %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniform4d_Idx),
	             GL_ENTRY_CALL_TIME(glUniform4d_Idx),
	             GL_ENTRY_CALL_TIME(glUniform4d_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniform4d_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniform4d_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniform4d_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniform4d_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniform4d_Idx) = get_ts();
        }


	

}