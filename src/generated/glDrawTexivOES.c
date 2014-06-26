#include <glTraceCommon.h>
#include <generated.h>

#define glDrawTexivOES_wrp						\
    ((void  (*)(const GLint *coords                                        \
    ))GL_ENTRY_PTR(glDrawTexivOES_Idx))


GLAPI void  APIENTRY glDrawTexivOES(const GLint *coords)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDrawTexivOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawTexivOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawTexivOES_wrp(coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawTexivOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawTexivOES_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawTexivOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawTexivOES_Idx),
				 GL_ENTRY_LAST_TS(glDrawTexivOES_Idx));


        if(last_diff > 1000000000){
            printf("glDrawTexivOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawTexivOES_Idx),
	             GL_ENTRY_CALL_TIME(glDrawTexivOES_Idx),
	             GL_ENTRY_CALL_TIME(glDrawTexivOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawTexivOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawTexivOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawTexivOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawTexivOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawTexivOES_Idx) = get_ts();
        }


	

}