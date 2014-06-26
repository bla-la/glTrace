#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoord3bOES_wrp						\
    ((void  (*)(GLbyte s,GLbyte t,GLbyte r                                        \
    ))GL_ENTRY_PTR(glTexCoord3bOES_Idx))


GLAPI void  APIENTRY glTexCoord3bOES(GLbyte s,GLbyte t,GLbyte r)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexCoord3bOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoord3bOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoord3bOES_wrp(s,t,r);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoord3bOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoord3bOES_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoord3bOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoord3bOES_Idx),
				 GL_ENTRY_LAST_TS(glTexCoord3bOES_Idx));


        if(last_diff > 1000000000){
            printf("glTexCoord3bOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoord3bOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord3bOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord3bOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoord3bOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoord3bOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoord3bOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoord3bOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoord3bOES_Idx) = get_ts();
        }


	

}