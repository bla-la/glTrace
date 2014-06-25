#include <glTraceCommon.h>
#include <generated.h>

#define glMap1d_wrp						\
    ((void  (*)(GLenum target,GLdouble u1,GLdouble u2,GLint stride,GLint order,const GLdouble *points                                        \
    ))GL_ENTRY_PTR(glMap1d_Idx))


GLAPI void  APIENTRY glMap1d(GLenum target,GLdouble u1,GLdouble u2,GLint stride,GLint order,const GLdouble *points)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMap1d_Idx))
	{
            GL_ENTRY_PTR(glMap1d_Idx) = dlsym(RTLD_NEXT,"glMap1d");
            if(!GL_ENTRY_PTR(glMap1d_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMap1d_Idx))
    	{
            GL_ENTRY_PREV_TS(glMap1d_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMap1d_wrp(target,u1,u2,stride,order,points);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMap1d_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMap1d_Idx) ++;

        GL_ENTRY_LAST_TS(glMap1d_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMap1d_Idx),
				 GL_ENTRY_LAST_TS(glMap1d_Idx));
        if(last_diff > 1000000000){
            printf("glMap1d %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMap1d_Idx),
	             GL_ENTRY_CALL_TIME(glMap1d_Idx),
	             GL_ENTRY_CALL_TIME(glMap1d_Idx) /
	             GL_ENTRY_CALL_COUNT(glMap1d_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMap1d_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMap1d_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMap1d_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMap1d_Idx) = get_ts();
        }


	

}