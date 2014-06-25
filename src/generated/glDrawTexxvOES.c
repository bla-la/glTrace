#include <glTraceCommon.h>
#include <generated.h>

#define glDrawTexxvOES_wrp						\
    ((void  (*)(const GLfixed *coords                                        \
    ))GL_ENTRY_PTR(glDrawTexxvOES_Idx))


GLAPI void  APIENTRY glDrawTexxvOES(const GLfixed *coords)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDrawTexxvOES_Idx))
	{
            GL_ENTRY_PTR(glDrawTexxvOES_Idx) = dlsym(RTLD_NEXT,"glDrawTexxvOES");
            if(!GL_ENTRY_PTR(glDrawTexxvOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDrawTexxvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawTexxvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawTexxvOES_wrp(coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawTexxvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawTexxvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawTexxvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawTexxvOES_Idx),
				 GL_ENTRY_LAST_TS(glDrawTexxvOES_Idx));
        if(last_diff > 1000000000){
            printf("glDrawTexxvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawTexxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glDrawTexxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glDrawTexxvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawTexxvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawTexxvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawTexxvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawTexxvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawTexxvOES_Idx) = get_ts();
        }


	

}