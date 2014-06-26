#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoord1xOES_wrp						\
    ((void  (*)(GLfixed s                                        \
    ))GL_ENTRY_PTR(glTexCoord1xOES_Idx))


GLAPI void  APIENTRY glTexCoord1xOES(GLfixed s)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexCoord1xOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoord1xOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoord1xOES_wrp(s);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoord1xOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoord1xOES_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoord1xOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoord1xOES_Idx),
				 GL_ENTRY_LAST_TS(glTexCoord1xOES_Idx));


        if(last_diff > 1000000000){
            printf("glTexCoord1xOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoord1xOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord1xOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord1xOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoord1xOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoord1xOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoord1xOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoord1xOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoord1xOES_Idx) = get_ts();
        }


	

}