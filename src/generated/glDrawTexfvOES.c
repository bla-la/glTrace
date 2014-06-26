#include <glTraceCommon.h>
#include <generated.h>

#define glDrawTexfvOES_wrp						\
    ((void  (*)(const GLfloat *coords                                        \
    ))GL_ENTRY_PTR(glDrawTexfvOES_Idx))


GLAPI void  APIENTRY glDrawTexfvOES(const GLfloat *coords)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDrawTexfvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawTexfvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawTexfvOES_wrp(coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawTexfvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawTexfvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawTexfvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawTexfvOES_Idx),
				 GL_ENTRY_LAST_TS(glDrawTexfvOES_Idx));


        if(last_diff > 1000000000){
            printf("glDrawTexfvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawTexfvOES_Idx),
	             GL_ENTRY_CALL_TIME(glDrawTexfvOES_Idx),
	             GL_ENTRY_CALL_TIME(glDrawTexfvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawTexfvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawTexfvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawTexfvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawTexfvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawTexfvOES_Idx) = get_ts();
        }


	

}