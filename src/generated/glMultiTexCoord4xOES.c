#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord4xOES_wrp						\
    ((void  (*)(GLenum texture,GLfixed s,GLfixed t,GLfixed r,GLfixed q                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord4xOES_Idx))


GLAPI void  APIENTRY glMultiTexCoord4xOES(GLenum texture,GLfixed s,GLfixed t,GLfixed r,GLfixed q)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexCoord4xOES_Idx))
	{
            GL_ENTRY_PTR(glMultiTexCoord4xOES_Idx) = dlsym(RTLD_NEXT,"glMultiTexCoord4xOES");
            if(!GL_ENTRY_PTR(glMultiTexCoord4xOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexCoord4xOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord4xOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord4xOES_wrp(texture,s,t,r,q);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord4xOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord4xOES_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord4xOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord4xOES_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord4xOES_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexCoord4xOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord4xOES_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord4xOES_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord4xOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord4xOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord4xOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord4xOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord4xOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord4xOES_Idx) = get_ts();
        }


	

}