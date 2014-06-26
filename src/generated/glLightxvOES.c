#include <glTraceCommon.h>
#include <generated.h>

#define glLightxvOES_wrp						\
    ((void  (*)(GLenum light,GLenum pname,const GLfixed *params                                        \
    ))GL_ENTRY_PTR(glLightxvOES_Idx))


GLAPI void  APIENTRY glLightxvOES(GLenum light,GLenum pname,const GLfixed *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glLightxvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glLightxvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLightxvOES_wrp(light,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLightxvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLightxvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glLightxvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLightxvOES_Idx),
				 GL_ENTRY_LAST_TS(glLightxvOES_Idx));


        if(last_diff > 1000000000){
            printf("glLightxvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLightxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glLightxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glLightxvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glLightxvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLightxvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLightxvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLightxvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLightxvOES_Idx) = get_ts();
        }


	

}