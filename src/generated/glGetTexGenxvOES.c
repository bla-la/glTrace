#include <glTraceCommon.h>
#include <generated.h>

#define glGetTexGenxvOES_wrp						\
    ((void  (*)(GLenum coord,GLenum pname,GLfixed *params                                        \
    ))GL_ENTRY_PTR(glGetTexGenxvOES_Idx))


GLAPI void  APIENTRY glGetTexGenxvOES(GLenum coord,GLenum pname,GLfixed *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetTexGenxvOES_Idx))
	{
            GL_ENTRY_PTR(glGetTexGenxvOES_Idx) = dlsym(RTLD_NEXT,"glGetTexGenxvOES");
            if(!GL_ENTRY_PTR(glGetTexGenxvOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetTexGenxvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTexGenxvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTexGenxvOES_wrp(coord,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTexGenxvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTexGenxvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTexGenxvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTexGenxvOES_Idx),
				 GL_ENTRY_LAST_TS(glGetTexGenxvOES_Idx));
        if(last_diff > 1000000000){
            printf("glGetTexGenxvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTexGenxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexGenxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexGenxvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTexGenxvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTexGenxvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTexGenxvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTexGenxvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTexGenxvOES_Idx) = get_ts();
        }


	

}