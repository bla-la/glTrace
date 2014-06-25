#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoord2xOES_wrp						\
    ((void  (*)(GLfixed s,GLfixed t                                        \
    ))GL_ENTRY_PTR(glTexCoord2xOES_Idx))


GLAPI void  APIENTRY glTexCoord2xOES(GLfixed s,GLfixed t)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexCoord2xOES_Idx))
	{
            GL_ENTRY_PTR(glTexCoord2xOES_Idx) = dlsym(RTLD_NEXT,"glTexCoord2xOES");
            if(!GL_ENTRY_PTR(glTexCoord2xOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexCoord2xOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoord2xOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoord2xOES_wrp(s,t);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoord2xOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoord2xOES_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoord2xOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoord2xOES_Idx),
				 GL_ENTRY_LAST_TS(glTexCoord2xOES_Idx));
        if(last_diff > 1000000000){
            printf("glTexCoord2xOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoord2xOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord2xOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord2xOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoord2xOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoord2xOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoord2xOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoord2xOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoord2xOES_Idx) = get_ts();
        }


	

}