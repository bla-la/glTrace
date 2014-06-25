#include <glTraceCommon.h>
#include <generated.h>

#define glIndexxOES_wrp						\
    ((void  (*)(GLfixed component                                        \
    ))GL_ENTRY_PTR(glIndexxOES_Idx))


GLAPI void  APIENTRY glIndexxOES(GLfixed component)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glIndexxOES_Idx))
	{
            GL_ENTRY_PTR(glIndexxOES_Idx) = dlsym(RTLD_NEXT,"glIndexxOES");
            if(!GL_ENTRY_PTR(glIndexxOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glIndexxOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glIndexxOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glIndexxOES_wrp(component);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIndexxOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIndexxOES_Idx) ++;

        GL_ENTRY_LAST_TS(glIndexxOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIndexxOES_Idx),
				 GL_ENTRY_LAST_TS(glIndexxOES_Idx));
        if(last_diff > 1000000000){
            printf("glIndexxOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIndexxOES_Idx),
	             GL_ENTRY_CALL_TIME(glIndexxOES_Idx),
	             GL_ENTRY_CALL_TIME(glIndexxOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glIndexxOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIndexxOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIndexxOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIndexxOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIndexxOES_Idx) = get_ts();
        }


	

}