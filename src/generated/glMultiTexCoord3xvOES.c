#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord3xvOES_wrp						\
    ((void  (*)(GLenum texture,const GLfixed *coords                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord3xvOES_Idx))


GLAPI void  APIENTRY glMultiTexCoord3xvOES(GLenum texture,const GLfixed *coords)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexCoord3xvOES_Idx))
	{
            GL_ENTRY_PTR(glMultiTexCoord3xvOES_Idx) = dlsym(RTLD_NEXT,"glMultiTexCoord3xvOES");
            if(!GL_ENTRY_PTR(glMultiTexCoord3xvOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexCoord3xvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord3xvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord3xvOES_wrp(texture,coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord3xvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord3xvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord3xvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord3xvOES_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord3xvOES_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexCoord3xvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord3xvOES_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord3xvOES_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord3xvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord3xvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord3xvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord3xvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord3xvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord3xvOES_Idx) = get_ts();
        }


	

}