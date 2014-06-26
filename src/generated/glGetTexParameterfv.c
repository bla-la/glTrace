#include <glTraceCommon.h>
#include <generated.h>

#define glGetTexParameterfv_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetTexParameterfv_Idx))


GLAPI void  APIENTRY glGetTexParameterfv(GLenum target,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetTexParameterfv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTexParameterfv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTexParameterfv_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTexParameterfv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTexParameterfv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTexParameterfv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTexParameterfv_Idx),
				 GL_ENTRY_LAST_TS(glGetTexParameterfv_Idx));


        if(last_diff > 1000000000){
            printf("glGetTexParameterfv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTexParameterfv_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexParameterfv_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexParameterfv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTexParameterfv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTexParameterfv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTexParameterfv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTexParameterfv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTexParameterfv_Idx) = get_ts();
        }


	

}