#include <glTraceCommon.h>
#include <generated.h>

#define glGetAttribLocationARB_wrp						\
    ((GLint  (*)(GLhandleARB programObj,const GLcharARB *name                                        \
    ))GL_ENTRY_PTR(glGetAttribLocationARB_Idx))


GLAPI GLint  APIENTRY glGetAttribLocationARB(GLhandleARB programObj,const GLcharARB *name)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetAttribLocationARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetAttribLocationARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLint  retval = glGetAttribLocationARB_wrp(programObj,name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetAttribLocationARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetAttribLocationARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetAttribLocationARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetAttribLocationARB_Idx),
				 GL_ENTRY_LAST_TS(glGetAttribLocationARB_Idx));


        if(last_diff > 1000000000){
            printf("glGetAttribLocationARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetAttribLocationARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetAttribLocationARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetAttribLocationARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetAttribLocationARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetAttribLocationARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetAttribLocationARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetAttribLocationARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetAttribLocationARB_Idx) = get_ts();
        }


	return retval;

}