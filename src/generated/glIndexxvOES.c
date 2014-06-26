#include <glTraceCommon.h>
#include <generated.h>

#define glIndexxvOES_wrp						\
    ((void  (*)(const GLfixed *component                                        \
    ))GL_ENTRY_PTR(glIndexxvOES_Idx))


GLAPI void  APIENTRY glIndexxvOES(const GLfixed *component)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIndexxvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glIndexxvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glIndexxvOES_wrp(component);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIndexxvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIndexxvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glIndexxvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIndexxvOES_Idx),
				 GL_ENTRY_LAST_TS(glIndexxvOES_Idx));


        if(last_diff > 1000000000){
            printf("glIndexxvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIndexxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glIndexxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glIndexxvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glIndexxvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIndexxvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIndexxvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIndexxvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIndexxvOES_Idx) = get_ts();
        }


	

}