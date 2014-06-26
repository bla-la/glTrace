#include <glTraceCommon.h>
#include <generated.h>

#define glMapGrid2f_wrp						\
    ((void  (*)(GLint un,GLfloat u1,GLfloat u2,GLint vn,GLfloat v1,GLfloat v2                                        \
    ))GL_ENTRY_PTR(glMapGrid2f_Idx))


GLAPI void  APIENTRY glMapGrid2f(GLint un,GLfloat u1,GLfloat u2,GLint vn,GLfloat v1,GLfloat v2)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMapGrid2f_Idx))
    	{
            GL_ENTRY_PREV_TS(glMapGrid2f_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMapGrid2f_wrp(un,u1,u2,vn,v1,v2);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMapGrid2f_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMapGrid2f_Idx) ++;

        GL_ENTRY_LAST_TS(glMapGrid2f_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMapGrid2f_Idx),
				 GL_ENTRY_LAST_TS(glMapGrid2f_Idx));


        if(last_diff > 1000000000){
            printf("glMapGrid2f %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMapGrid2f_Idx),
	             GL_ENTRY_CALL_TIME(glMapGrid2f_Idx),
	             GL_ENTRY_CALL_TIME(glMapGrid2f_Idx) /
	             GL_ENTRY_CALL_COUNT(glMapGrid2f_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMapGrid2f_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMapGrid2f_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMapGrid2f_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMapGrid2f_Idx) = get_ts();
        }


	

}