#include <glTraceCommon.h>
#include <generated.h>

#define glTexGenxOES_wrp						\
    ((void  (*)(GLenum coord,GLenum pname,GLfixed param                                        \
    ))GL_ENTRY_PTR(glTexGenxOES_Idx))


GLAPI void  APIENTRY glTexGenxOES(GLenum coord,GLenum pname,GLfixed param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexGenxOES_Idx))
	{
            GL_ENTRY_PTR(glTexGenxOES_Idx) = dlsym(RTLD_NEXT,"glTexGenxOES");
            if(!GL_ENTRY_PTR(glTexGenxOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexGenxOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexGenxOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexGenxOES_wrp(coord,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexGenxOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexGenxOES_Idx) ++;

        GL_ENTRY_LAST_TS(glTexGenxOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexGenxOES_Idx),
				 GL_ENTRY_LAST_TS(glTexGenxOES_Idx));
        if(last_diff > 1000000000){
            printf("glTexGenxOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexGenxOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexGenxOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexGenxOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexGenxOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexGenxOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexGenxOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexGenxOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexGenxOES_Idx) = get_ts();
        }


	

}