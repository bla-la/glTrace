#include <glTraceCommon.h>
#include <generated.h>

#define glGetLightxOES_wrp						\
    ((void  (*)(GLenum light,GLenum pname,GLfixed *params                                        \
    ))GL_ENTRY_PTR(glGetLightxOES_Idx))


GLAPI void  APIENTRY glGetLightxOES(GLenum light,GLenum pname,GLfixed *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetLightxOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetLightxOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetLightxOES_wrp(light,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetLightxOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetLightxOES_Idx) ++;

        GL_ENTRY_LAST_TS(glGetLightxOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetLightxOES_Idx),
				 GL_ENTRY_LAST_TS(glGetLightxOES_Idx));


        if(last_diff > 1000000000){
            printf("glGetLightxOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetLightxOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetLightxOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetLightxOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetLightxOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetLightxOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetLightxOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetLightxOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetLightxOES_Idx) = get_ts();
        }


	

}