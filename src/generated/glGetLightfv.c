#include <glTraceCommon.h>
#include <generated.h>

#define glGetLightfv_wrp						\
    ((void  (*)(GLenum light,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetLightfv_Idx))


GLAPI void  APIENTRY glGetLightfv(GLenum light,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetLightfv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetLightfv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetLightfv_wrp(light,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetLightfv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetLightfv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetLightfv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetLightfv_Idx),
				 GL_ENTRY_LAST_TS(glGetLightfv_Idx));


        if(last_diff > 1000000000){
            printf("glGetLightfv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetLightfv_Idx),
	             GL_ENTRY_CALL_TIME(glGetLightfv_Idx),
	             GL_ENTRY_CALL_TIME(glGetLightfv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetLightfv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetLightfv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetLightfv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetLightfv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetLightfv_Idx) = get_ts();
        }


	

}