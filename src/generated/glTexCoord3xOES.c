#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoord3xOES_wrp						\
    ((void  (*)(GLfixed s,GLfixed t,GLfixed r                                        \
    ))GL_ENTRY_PTR(glTexCoord3xOES_Idx))


GLAPI void  APIENTRY glTexCoord3xOES(GLfixed s,GLfixed t,GLfixed r)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexCoord3xOES_Idx))
	{
            GL_ENTRY_PTR(glTexCoord3xOES_Idx) = dlsym(RTLD_NEXT,"glTexCoord3xOES");
            if(!GL_ENTRY_PTR(glTexCoord3xOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexCoord3xOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoord3xOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoord3xOES_wrp(s,t,r);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoord3xOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoord3xOES_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoord3xOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoord3xOES_Idx),
				 GL_ENTRY_LAST_TS(glTexCoord3xOES_Idx));
        if(last_diff > 1000000000){
            printf("glTexCoord3xOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoord3xOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord3xOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord3xOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoord3xOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoord3xOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoord3xOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoord3xOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoord3xOES_Idx) = get_ts();
        }


	

}