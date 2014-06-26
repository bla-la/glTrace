#include <glTraceCommon.h>
#include <generated.h>

#define glDrawTexsOES_wrp						\
    ((void  (*)(GLshort x,GLshort y,GLshort z,GLshort width,GLshort height                                        \
    ))GL_ENTRY_PTR(glDrawTexsOES_Idx))


GLAPI void  APIENTRY glDrawTexsOES(GLshort x,GLshort y,GLshort z,GLshort width,GLshort height)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDrawTexsOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawTexsOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawTexsOES_wrp(x,y,z,width,height);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawTexsOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawTexsOES_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawTexsOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawTexsOES_Idx),
				 GL_ENTRY_LAST_TS(glDrawTexsOES_Idx));


        if(last_diff > 1000000000){
            printf("glDrawTexsOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawTexsOES_Idx),
	             GL_ENTRY_CALL_TIME(glDrawTexsOES_Idx),
	             GL_ENTRY_CALL_TIME(glDrawTexsOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawTexsOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawTexsOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawTexsOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawTexsOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawTexsOES_Idx) = get_ts();
        }


	

}