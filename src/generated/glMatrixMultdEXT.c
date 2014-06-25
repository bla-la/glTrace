#include <glTraceCommon.h>
#include <generated.h>

#define glMatrixMultdEXT_wrp						\
    ((void  (*)(GLenum mode,const GLdouble *m                                        \
    ))GL_ENTRY_PTR(glMatrixMultdEXT_Idx))


GLAPI void  APIENTRY glMatrixMultdEXT(GLenum mode,const GLdouble *m)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMatrixMultdEXT_Idx))
	{
            GL_ENTRY_PTR(glMatrixMultdEXT_Idx) = dlsym(RTLD_NEXT,"glMatrixMultdEXT");
            if(!GL_ENTRY_PTR(glMatrixMultdEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMatrixMultdEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMatrixMultdEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMatrixMultdEXT_wrp(mode,m);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMatrixMultdEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMatrixMultdEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMatrixMultdEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMatrixMultdEXT_Idx),
				 GL_ENTRY_LAST_TS(glMatrixMultdEXT_Idx));
        if(last_diff > 1000000000){
            printf("glMatrixMultdEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMatrixMultdEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixMultdEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixMultdEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMatrixMultdEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMatrixMultdEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMatrixMultdEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMatrixMultdEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMatrixMultdEXT_Idx) = get_ts();
        }


	

}