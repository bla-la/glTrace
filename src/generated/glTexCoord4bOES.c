#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoord4bOES_wrp						\
    ((void  (*)(GLbyte s,GLbyte t,GLbyte r,GLbyte q                                        \
    ))GL_ENTRY_PTR(glTexCoord4bOES_Idx))


GLAPI void  APIENTRY glTexCoord4bOES(GLbyte s,GLbyte t,GLbyte r,GLbyte q)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexCoord4bOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoord4bOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoord4bOES_wrp(s,t,r,q);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoord4bOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoord4bOES_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoord4bOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoord4bOES_Idx),
				 GL_ENTRY_LAST_TS(glTexCoord4bOES_Idx));


        if(last_diff > 1000000000){
            printf("glTexCoord4bOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoord4bOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord4bOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord4bOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoord4bOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoord4bOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoord4bOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoord4bOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoord4bOES_Idx) = get_ts();
        }


	

}