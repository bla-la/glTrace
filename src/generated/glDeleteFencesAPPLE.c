#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteFencesAPPLE_wrp						\
    ((void  (*)(GLsizei n,const GLuint *fences                                        \
    ))GL_ENTRY_PTR(glDeleteFencesAPPLE_Idx))


GLAPI void  APIENTRY glDeleteFencesAPPLE(GLsizei n,const GLuint *fences)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDeleteFencesAPPLE_Idx))
	{
            GL_ENTRY_PTR(glDeleteFencesAPPLE_Idx) = dlsym(RTLD_NEXT,"glDeleteFencesAPPLE");
            if(!GL_ENTRY_PTR(glDeleteFencesAPPLE_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDeleteFencesAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteFencesAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteFencesAPPLE_wrp(n,fences);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteFencesAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteFencesAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteFencesAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteFencesAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glDeleteFencesAPPLE_Idx));
        if(last_diff > 1000000000){
            printf("glDeleteFencesAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteFencesAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteFencesAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteFencesAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteFencesAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteFencesAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteFencesAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteFencesAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteFencesAPPLE_Idx) = get_ts();
        }


	

}