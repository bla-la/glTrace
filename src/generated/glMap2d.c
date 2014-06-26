#include <glTraceCommon.h>
#include <generated.h>

#define glMap2d_wrp						\
    ((void  (*)(GLenum target,GLdouble u1,GLdouble u2,GLint ustride,GLint uorder,GLdouble v1,GLdouble v2,GLint vstride,GLint vorder,const GLdouble *points                                        \
    ))GL_ENTRY_PTR(glMap2d_Idx))


GLAPI void  APIENTRY glMap2d(GLenum target,GLdouble u1,GLdouble u2,GLint ustride,GLint uorder,GLdouble v1,GLdouble v2,GLint vstride,GLint vorder,const GLdouble *points)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMap2d_Idx))
    	{
            GL_ENTRY_PREV_TS(glMap2d_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMap2d_wrp(target,u1,u2,ustride,uorder,v1,v2,vstride,vorder,points);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMap2d_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMap2d_Idx) ++;

        GL_ENTRY_LAST_TS(glMap2d_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMap2d_Idx),
				 GL_ENTRY_LAST_TS(glMap2d_Idx));


        if(last_diff > 1000000000){
            printf("glMap2d %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMap2d_Idx),
	             GL_ENTRY_CALL_TIME(glMap2d_Idx),
	             GL_ENTRY_CALL_TIME(glMap2d_Idx) /
	             GL_ENTRY_CALL_COUNT(glMap2d_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMap2d_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMap2d_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMap2d_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMap2d_Idx) = get_ts();
        }


	

}