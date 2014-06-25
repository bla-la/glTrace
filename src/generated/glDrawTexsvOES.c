#include <glTraceCommon.h>
#include <generated.h>

#define glDrawTexsvOES_wrp						\
    ((void  (*)(const GLshort *coords                                        \
    ))GL_ENTRY_PTR(glDrawTexsvOES_Idx))


GLAPI void  APIENTRY glDrawTexsvOES(const GLshort *coords)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDrawTexsvOES_Idx))
	{
            GL_ENTRY_PTR(glDrawTexsvOES_Idx) = dlsym(RTLD_NEXT,"glDrawTexsvOES");
            if(!GL_ENTRY_PTR(glDrawTexsvOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDrawTexsvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawTexsvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawTexsvOES_wrp(coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawTexsvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawTexsvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawTexsvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawTexsvOES_Idx),
				 GL_ENTRY_LAST_TS(glDrawTexsvOES_Idx));
        if(last_diff > 1000000000){
            printf("glDrawTexsvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawTexsvOES_Idx),
	             GL_ENTRY_CALL_TIME(glDrawTexsvOES_Idx),
	             GL_ENTRY_CALL_TIME(glDrawTexsvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawTexsvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawTexsvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawTexsvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawTexsvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawTexsvOES_Idx) = get_ts();
        }


	

}