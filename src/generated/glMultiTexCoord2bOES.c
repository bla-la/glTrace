#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord2bOES_wrp						\
    ((void  (*)(GLenum texture,GLbyte s,GLbyte t                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord2bOES_Idx))


GLAPI void  APIENTRY glMultiTexCoord2bOES(GLenum texture,GLbyte s,GLbyte t)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiTexCoord2bOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord2bOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord2bOES_wrp(texture,s,t);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord2bOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord2bOES_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord2bOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord2bOES_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord2bOES_Idx));


        if(last_diff > 1000000000){
            printf("glMultiTexCoord2bOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord2bOES_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord2bOES_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord2bOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord2bOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord2bOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord2bOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord2bOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord2bOES_Idx) = get_ts();
        }


	

}