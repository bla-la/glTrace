#include <glTraceCommon.h>
#include <generated.h>

#define glVertex2s_wrp						\
    ((void  (*)(GLshort x,GLshort y                                        \
    ))GL_ENTRY_PTR(glVertex2s_Idx))


GLAPI void  APIENTRY glVertex2s(GLshort x,GLshort y)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertex2s_Idx))
	{
            GL_ENTRY_PTR(glVertex2s_Idx) = dlsym(RTLD_NEXT,"glVertex2s");
            if(!GL_ENTRY_PTR(glVertex2s_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertex2s_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertex2s_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertex2s_wrp(x,y);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertex2s_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertex2s_Idx) ++;

        GL_ENTRY_LAST_TS(glVertex2s_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertex2s_Idx),
				 GL_ENTRY_LAST_TS(glVertex2s_Idx));
        if(last_diff > 1000000000){
            printf("glVertex2s %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertex2s_Idx),
	             GL_ENTRY_CALL_TIME(glVertex2s_Idx),
	             GL_ENTRY_CALL_TIME(glVertex2s_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertex2s_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertex2s_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertex2s_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertex2s_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertex2s_Idx) = get_ts();
        }


	

}