#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord4bOES_wrp						\
    ((void  (*)(GLenum texture,GLbyte s,GLbyte t,GLbyte r,GLbyte q                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord4bOES_Idx))


GLAPI void  APIENTRY glMultiTexCoord4bOES(GLenum texture,GLbyte s,GLbyte t,GLbyte r,GLbyte q)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiTexCoord4bOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord4bOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord4bOES_wrp(texture,s,t,r,q);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord4bOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord4bOES_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord4bOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord4bOES_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord4bOES_Idx));


        if(last_diff > 1000000000){
            printf("glMultiTexCoord4bOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord4bOES_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord4bOES_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord4bOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord4bOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord4bOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord4bOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord4bOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord4bOES_Idx) = get_ts();
        }


	

}