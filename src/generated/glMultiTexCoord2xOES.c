#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord2xOES_wrp						\
    ((void  (*)(GLenum texture,GLfixed s,GLfixed t                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord2xOES_Idx))


GLAPI void  APIENTRY glMultiTexCoord2xOES(GLenum texture,GLfixed s,GLfixed t)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiTexCoord2xOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord2xOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord2xOES_wrp(texture,s,t);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord2xOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord2xOES_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord2xOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord2xOES_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord2xOES_Idx));


        if(last_diff > 1000000000){
            printf("glMultiTexCoord2xOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord2xOES_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord2xOES_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord2xOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord2xOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord2xOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord2xOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord2xOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord2xOES_Idx) = get_ts();
        }


	

}