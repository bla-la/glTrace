#include <glTraceCommon.h>
#include <generated.h>

#define glGetColorTableParameterfv_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetColorTableParameterfv_Idx))


GLAPI void  APIENTRY glGetColorTableParameterfv(GLenum target,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetColorTableParameterfv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetColorTableParameterfv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetColorTableParameterfv_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetColorTableParameterfv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetColorTableParameterfv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetColorTableParameterfv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetColorTableParameterfv_Idx),
				 GL_ENTRY_LAST_TS(glGetColorTableParameterfv_Idx));


        if(last_diff > 1000000000){
            printf("glGetColorTableParameterfv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetColorTableParameterfv_Idx),
	             GL_ENTRY_CALL_TIME(glGetColorTableParameterfv_Idx),
	             GL_ENTRY_CALL_TIME(glGetColorTableParameterfv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetColorTableParameterfv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetColorTableParameterfv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetColorTableParameterfv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetColorTableParameterfv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetColorTableParameterfv_Idx) = get_ts();
        }


	

}