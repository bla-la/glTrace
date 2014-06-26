#include <glTraceCommon.h>
#include <generated.h>

#define glGetInteger64v_wrp						\
    ((void  (*)(GLenum pname,GLint64 *data                                        \
    ))GL_ENTRY_PTR(glGetInteger64v_Idx))


GLAPI void  APIENTRY glGetInteger64v(GLenum pname,GLint64 *data)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetInteger64v_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetInteger64v_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetInteger64v_wrp(pname,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetInteger64v_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetInteger64v_Idx) ++;

        GL_ENTRY_LAST_TS(glGetInteger64v_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetInteger64v_Idx),
				 GL_ENTRY_LAST_TS(glGetInteger64v_Idx));


        if(last_diff > 1000000000){
            printf("glGetInteger64v %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetInteger64v_Idx),
	             GL_ENTRY_CALL_TIME(glGetInteger64v_Idx),
	             GL_ENTRY_CALL_TIME(glGetInteger64v_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetInteger64v_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetInteger64v_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetInteger64v_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetInteger64v_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetInteger64v_Idx) = get_ts();
        }


	

}