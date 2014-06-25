#include <glTraceCommon.h>
#include <generated.h>

#define glQueryCounter_wrp						\
    ((void  (*)(GLuint id,GLenum target                                        \
    ))GL_ENTRY_PTR(glQueryCounter_Idx))


GLAPI void  APIENTRY glQueryCounter(GLuint id,GLenum target)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glQueryCounter_Idx))
	{
            GL_ENTRY_PTR(glQueryCounter_Idx) = dlsym(RTLD_NEXT,"glQueryCounter");
            if(!GL_ENTRY_PTR(glQueryCounter_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glQueryCounter_Idx))
    	{
            GL_ENTRY_PREV_TS(glQueryCounter_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glQueryCounter_wrp(id,target);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glQueryCounter_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glQueryCounter_Idx) ++;

        GL_ENTRY_LAST_TS(glQueryCounter_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glQueryCounter_Idx),
				 GL_ENTRY_LAST_TS(glQueryCounter_Idx));
        if(last_diff > 1000000000){
            printf("glQueryCounter %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glQueryCounter_Idx),
	             GL_ENTRY_CALL_TIME(glQueryCounter_Idx),
	             GL_ENTRY_CALL_TIME(glQueryCounter_Idx) /
	             GL_ENTRY_CALL_COUNT(glQueryCounter_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glQueryCounter_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glQueryCounter_Idx) = 0;
             GL_ENTRY_CALL_TIME(glQueryCounter_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glQueryCounter_Idx) = get_ts();
        }


	

}