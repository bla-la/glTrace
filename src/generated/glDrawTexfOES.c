#include <glTraceCommon.h>
#include <generated.h>

#define glDrawTexfOES_wrp						\
    ((void  (*)(GLfloat x,GLfloat y,GLfloat z,GLfloat width,GLfloat height                                        \
    ))GL_ENTRY_PTR(glDrawTexfOES_Idx))


GLAPI void  APIENTRY glDrawTexfOES(GLfloat x,GLfloat y,GLfloat z,GLfloat width,GLfloat height)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDrawTexfOES_Idx))
	{
            GL_ENTRY_PTR(glDrawTexfOES_Idx) = dlsym(RTLD_NEXT,"glDrawTexfOES");
            if(!GL_ENTRY_PTR(glDrawTexfOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDrawTexfOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawTexfOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawTexfOES_wrp(x,y,z,width,height);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawTexfOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawTexfOES_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawTexfOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawTexfOES_Idx),
				 GL_ENTRY_LAST_TS(glDrawTexfOES_Idx));
        if(last_diff > 1000000000){
            printf("glDrawTexfOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawTexfOES_Idx),
	             GL_ENTRY_CALL_TIME(glDrawTexfOES_Idx),
	             GL_ENTRY_CALL_TIME(glDrawTexfOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawTexfOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawTexfOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawTexfOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawTexfOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawTexfOES_Idx) = get_ts();
        }


	

}