#include <glTraceCommon.h>
#include <generated.h>

#define glMap2f_wrp						\
    ((void  (*)(GLenum target,GLfloat u1,GLfloat u2,GLint ustride,GLint uorder,GLfloat v1,GLfloat v2,GLint vstride,GLint vorder,const GLfloat *points                                        \
    ))GL_ENTRY_PTR(glMap2f_Idx))


GLAPI void  APIENTRY glMap2f(GLenum target,GLfloat u1,GLfloat u2,GLint ustride,GLint uorder,GLfloat v1,GLfloat v2,GLint vstride,GLint vorder,const GLfloat *points)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMap2f_Idx))
    	{
            GL_ENTRY_PREV_TS(glMap2f_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMap2f_wrp(target,u1,u2,ustride,uorder,v1,v2,vstride,vorder,points);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMap2f_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMap2f_Idx) ++;

        GL_ENTRY_LAST_TS(glMap2f_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMap2f_Idx),
				 GL_ENTRY_LAST_TS(glMap2f_Idx));


        if(last_diff > 1000000000){
            printf("glMap2f %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMap2f_Idx),
	             GL_ENTRY_CALL_TIME(glMap2f_Idx),
	             GL_ENTRY_CALL_TIME(glMap2f_Idx) /
	             GL_ENTRY_CALL_COUNT(glMap2f_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMap2f_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMap2f_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMap2f_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMap2f_Idx) = get_ts();
        }


	

}