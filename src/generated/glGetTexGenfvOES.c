#include <glTraceCommon.h>
#include <generated.h>

#define glGetTexGenfvOES_wrp						\
    ((void  (*)(GLenum coord,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetTexGenfvOES_Idx))


GLAPI void  APIENTRY glGetTexGenfvOES(GLenum coord,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetTexGenfvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTexGenfvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTexGenfvOES_wrp(coord,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTexGenfvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTexGenfvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTexGenfvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTexGenfvOES_Idx),
				 GL_ENTRY_LAST_TS(glGetTexGenfvOES_Idx));


        if(last_diff > 1000000000){
            printf("glGetTexGenfvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTexGenfvOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexGenfvOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexGenfvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTexGenfvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTexGenfvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTexGenfvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTexGenfvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTexGenfvOES_Idx) = get_ts();
        }


	

}