#include <glTraceCommon.h>
#include <generated.h>

#define glMapGrid1d_wrp						\
    ((void  (*)(GLint un,GLdouble u1,GLdouble u2                                        \
    ))GL_ENTRY_PTR(glMapGrid1d_Idx))


GLAPI void  APIENTRY glMapGrid1d(GLint un,GLdouble u1,GLdouble u2)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMapGrid1d_Idx))
	{
            GL_ENTRY_PTR(glMapGrid1d_Idx) = dlsym(RTLD_NEXT,"glMapGrid1d");
            if(!GL_ENTRY_PTR(glMapGrid1d_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMapGrid1d_Idx))
    	{
            GL_ENTRY_PREV_TS(glMapGrid1d_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMapGrid1d_wrp(un,u1,u2);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMapGrid1d_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMapGrid1d_Idx) ++;

        GL_ENTRY_LAST_TS(glMapGrid1d_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMapGrid1d_Idx),
				 GL_ENTRY_LAST_TS(glMapGrid1d_Idx));
        if(last_diff > 1000000000){
            printf("glMapGrid1d %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMapGrid1d_Idx),
	             GL_ENTRY_CALL_TIME(glMapGrid1d_Idx),
	             GL_ENTRY_CALL_TIME(glMapGrid1d_Idx) /
	             GL_ENTRY_CALL_COUNT(glMapGrid1d_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMapGrid1d_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMapGrid1d_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMapGrid1d_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMapGrid1d_Idx) = get_ts();
        }


	

}