#include <glTraceCommon.h>
#include <generated.h>

#define glClearBufferfv_wrp						\
    ((void  (*)(GLenum buffer,GLint drawbuffer,const GLfloat *value                                        \
    ))GL_ENTRY_PTR(glClearBufferfv_Idx))


GLAPI void  APIENTRY glClearBufferfv(GLenum buffer,GLint drawbuffer,const GLfloat *value)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glClearBufferfv_Idx))
    	{
            GL_ENTRY_PREV_TS(glClearBufferfv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClearBufferfv_wrp(buffer,drawbuffer,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClearBufferfv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClearBufferfv_Idx) ++;

        GL_ENTRY_LAST_TS(glClearBufferfv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClearBufferfv_Idx),
				 GL_ENTRY_LAST_TS(glClearBufferfv_Idx));


        if(last_diff > 1000000000){
            printf("glClearBufferfv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClearBufferfv_Idx),
	             GL_ENTRY_CALL_TIME(glClearBufferfv_Idx),
	             GL_ENTRY_CALL_TIME(glClearBufferfv_Idx) /
	             GL_ENTRY_CALL_COUNT(glClearBufferfv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClearBufferfv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClearBufferfv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClearBufferfv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClearBufferfv_Idx) = get_ts();
        }


	

}