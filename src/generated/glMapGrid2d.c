#include <glTraceCommon.h>
#include <generated.h>

#define glMapGrid2d_wrp						\
    ((void  (*)(GLint un,GLdouble u1,GLdouble u2,GLint vn,GLdouble v1,GLdouble v2                                        \
    ))GL_ENTRY_PTR(glMapGrid2d_Idx))


GLAPI void  APIENTRY glMapGrid2d(GLint un,GLdouble u1,GLdouble u2,GLint vn,GLdouble v1,GLdouble v2)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMapGrid2d_Idx))
    	{
            GL_ENTRY_PREV_TS(glMapGrid2d_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMapGrid2d_wrp(un,u1,u2,vn,v1,v2);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMapGrid2d_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMapGrid2d_Idx) ++;

        GL_ENTRY_LAST_TS(glMapGrid2d_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMapGrid2d_Idx),
				 GL_ENTRY_LAST_TS(glMapGrid2d_Idx));


        if(last_diff > 1000000000){
            printf("glMapGrid2d %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMapGrid2d_Idx),
	             GL_ENTRY_CALL_TIME(glMapGrid2d_Idx),
	             GL_ENTRY_CALL_TIME(glMapGrid2d_Idx) /
	             GL_ENTRY_CALL_COUNT(glMapGrid2d_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMapGrid2d_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMapGrid2d_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMapGrid2d_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMapGrid2d_Idx) = get_ts();
        }


	

}