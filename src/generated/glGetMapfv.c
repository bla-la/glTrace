#include <glTraceCommon.h>
#include <generated.h>

#define glGetMapfv_wrp						\
    ((void  (*)(GLenum target,GLenum query,GLfloat *v                                        \
    ))GL_ENTRY_PTR(glGetMapfv_Idx))


GLAPI void  APIENTRY glGetMapfv(GLenum target,GLenum query,GLfloat *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetMapfv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetMapfv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetMapfv_wrp(target,query,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetMapfv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetMapfv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetMapfv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetMapfv_Idx),
				 GL_ENTRY_LAST_TS(glGetMapfv_Idx));


        if(last_diff > 1000000000){
            printf("glGetMapfv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetMapfv_Idx),
	             GL_ENTRY_CALL_TIME(glGetMapfv_Idx),
	             GL_ENTRY_CALL_TIME(glGetMapfv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetMapfv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetMapfv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetMapfv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetMapfv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetMapfv_Idx) = get_ts();
        }


	

}