#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoord4xOES_wrp						\
    ((void  (*)(GLfixed s,GLfixed t,GLfixed r,GLfixed q                                        \
    ))GL_ENTRY_PTR(glTexCoord4xOES_Idx))


GLAPI void  APIENTRY glTexCoord4xOES(GLfixed s,GLfixed t,GLfixed r,GLfixed q)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexCoord4xOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoord4xOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoord4xOES_wrp(s,t,r,q);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoord4xOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoord4xOES_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoord4xOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoord4xOES_Idx),
				 GL_ENTRY_LAST_TS(glTexCoord4xOES_Idx));


        if(last_diff > 1000000000){
            printf("glTexCoord4xOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoord4xOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord4xOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord4xOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoord4xOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoord4xOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoord4xOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoord4xOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoord4xOES_Idx) = get_ts();
        }


	

}