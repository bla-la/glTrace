#include <glTraceCommon.h>
#include <generated.h>

#define glGetTexGenfv_wrp						\
    ((void  (*)(GLenum coord,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetTexGenfv_Idx))


GLAPI void  APIENTRY glGetTexGenfv(GLenum coord,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetTexGenfv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTexGenfv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTexGenfv_wrp(coord,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTexGenfv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTexGenfv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTexGenfv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTexGenfv_Idx),
				 GL_ENTRY_LAST_TS(glGetTexGenfv_Idx));


        if(last_diff > 1000000000){
            printf("glGetTexGenfv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTexGenfv_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexGenfv_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexGenfv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTexGenfv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTexGenfv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTexGenfv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTexGenfv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTexGenfv_Idx) = get_ts();
        }


	

}