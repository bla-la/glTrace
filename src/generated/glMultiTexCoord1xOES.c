#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord1xOES_wrp						\
    ((void  (*)(GLenum texture,GLfixed s                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord1xOES_Idx))


GLAPI void  APIENTRY glMultiTexCoord1xOES(GLenum texture,GLfixed s)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiTexCoord1xOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord1xOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord1xOES_wrp(texture,s);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord1xOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord1xOES_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord1xOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord1xOES_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord1xOES_Idx));


        if(last_diff > 1000000000){
            printf("glMultiTexCoord1xOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord1xOES_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord1xOES_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord1xOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord1xOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord1xOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord1xOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord1xOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord1xOES_Idx) = get_ts();
        }


	

}