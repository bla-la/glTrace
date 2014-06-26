#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord2xvOES_wrp						\
    ((void  (*)(GLenum texture,const GLfixed *coords                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord2xvOES_Idx))


GLAPI void  APIENTRY glMultiTexCoord2xvOES(GLenum texture,const GLfixed *coords)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiTexCoord2xvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord2xvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord2xvOES_wrp(texture,coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord2xvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord2xvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord2xvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord2xvOES_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord2xvOES_Idx));


        if(last_diff > 1000000000){
            printf("glMultiTexCoord2xvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord2xvOES_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord2xvOES_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord2xvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord2xvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord2xvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord2xvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord2xvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord2xvOES_Idx) = get_ts();
        }


	

}