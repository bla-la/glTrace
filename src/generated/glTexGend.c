#include <glTraceCommon.h>
#include <generated.h>

#define glTexGend_wrp						\
    ((void  (*)(GLenum coord,GLenum pname,GLdouble param                                        \
    ))GL_ENTRY_PTR(glTexGend_Idx))


GLAPI void  APIENTRY glTexGend(GLenum coord,GLenum pname,GLdouble param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexGend_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexGend_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexGend_wrp(coord,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexGend_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexGend_Idx) ++;

        GL_ENTRY_LAST_TS(glTexGend_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexGend_Idx),
				 GL_ENTRY_LAST_TS(glTexGend_Idx));


        if(last_diff > 1000000000){
            printf("glTexGend %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexGend_Idx),
	             GL_ENTRY_CALL_TIME(glTexGend_Idx),
	             GL_ENTRY_CALL_TIME(glTexGend_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexGend_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexGend_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexGend_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexGend_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexGend_Idx) = get_ts();
        }


	

}