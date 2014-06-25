#include <glTraceCommon.h>
#include <generated.h>

#define glVertex2bOES_wrp						\
    ((void  (*)(GLbyte x                                        \
    ))GL_ENTRY_PTR(glVertex2bOES_Idx))


GLAPI void  APIENTRY glVertex2bOES(GLbyte x)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertex2bOES_Idx))
	{
            GL_ENTRY_PTR(glVertex2bOES_Idx) = dlsym(RTLD_NEXT,"glVertex2bOES");
            if(!GL_ENTRY_PTR(glVertex2bOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertex2bOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertex2bOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertex2bOES_wrp(x);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertex2bOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertex2bOES_Idx) ++;

        GL_ENTRY_LAST_TS(glVertex2bOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertex2bOES_Idx),
				 GL_ENTRY_LAST_TS(glVertex2bOES_Idx));
        if(last_diff > 1000000000){
            printf("glVertex2bOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertex2bOES_Idx),
	             GL_ENTRY_CALL_TIME(glVertex2bOES_Idx),
	             GL_ENTRY_CALL_TIME(glVertex2bOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertex2bOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertex2bOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertex2bOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertex2bOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertex2bOES_Idx) = get_ts();
        }


	

}