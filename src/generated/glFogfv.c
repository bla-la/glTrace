#include <glTraceCommon.h>
#include <generated.h>

#define glFogfv_wrp						\
    ((void  (*)(GLenum pname,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glFogfv_Idx))


GLAPI void  APIENTRY glFogfv(GLenum pname,const GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFogfv_Idx))
    	{
            GL_ENTRY_PREV_TS(glFogfv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFogfv_wrp(pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFogfv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFogfv_Idx) ++;

        GL_ENTRY_LAST_TS(glFogfv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFogfv_Idx),
				 GL_ENTRY_LAST_TS(glFogfv_Idx));


        if(last_diff > 1000000000){
            printf("glFogfv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFogfv_Idx),
	             GL_ENTRY_CALL_TIME(glFogfv_Idx),
	             GL_ENTRY_CALL_TIME(glFogfv_Idx) /
	             GL_ENTRY_CALL_COUNT(glFogfv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFogfv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFogfv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFogfv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFogfv_Idx) = get_ts();
        }


	

}