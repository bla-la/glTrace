#include <glTraceCommon.h>
#include <generated.h>

#define glLightxOES_wrp						\
    ((void  (*)(GLenum light,GLenum pname,GLfixed param                                        \
    ))GL_ENTRY_PTR(glLightxOES_Idx))


GLAPI void  APIENTRY glLightxOES(GLenum light,GLenum pname,GLfixed param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glLightxOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glLightxOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLightxOES_wrp(light,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLightxOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLightxOES_Idx) ++;

        GL_ENTRY_LAST_TS(glLightxOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLightxOES_Idx),
				 GL_ENTRY_LAST_TS(glLightxOES_Idx));


        if(last_diff > 1000000000){
            printf("glLightxOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLightxOES_Idx),
	             GL_ENTRY_CALL_TIME(glLightxOES_Idx),
	             GL_ENTRY_CALL_TIME(glLightxOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glLightxOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLightxOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLightxOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLightxOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLightxOES_Idx) = get_ts();
        }


	

}