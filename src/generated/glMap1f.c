#include <glTraceCommon.h>
#include <generated.h>

#define glMap1f_wrp						\
    ((void  (*)(GLenum target,GLfloat u1,GLfloat u2,GLint stride,GLint order,const GLfloat *points                                        \
    ))GL_ENTRY_PTR(glMap1f_Idx))


GLAPI void  APIENTRY glMap1f(GLenum target,GLfloat u1,GLfloat u2,GLint stride,GLint order,const GLfloat *points)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMap1f_Idx))
	{
            GL_ENTRY_PTR(glMap1f_Idx) = dlsym(RTLD_NEXT,"glMap1f");
            if(!GL_ENTRY_PTR(glMap1f_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMap1f_Idx))
    	{
            GL_ENTRY_PREV_TS(glMap1f_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMap1f_wrp(target,u1,u2,stride,order,points);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMap1f_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMap1f_Idx) ++;

        GL_ENTRY_LAST_TS(glMap1f_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMap1f_Idx),
				 GL_ENTRY_LAST_TS(glMap1f_Idx));
        if(last_diff > 1000000000){
            printf("glMap1f %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMap1f_Idx),
	             GL_ENTRY_CALL_TIME(glMap1f_Idx),
	             GL_ENTRY_CALL_TIME(glMap1f_Idx) /
	             GL_ENTRY_CALL_COUNT(glMap1f_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMap1f_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMap1f_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMap1f_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMap1f_Idx) = get_ts();
        }


	

}