#include <glTraceCommon.h>
#include <generated.h>

#define glScalex_wrp						\
    ((void  (*)(GLfixed x,GLfixed y,GLfixed z                                        \
    ))GL_ENTRY_PTR(glScalex_Idx))


GLAPI void  APIENTRY glScalex(GLfixed x,GLfixed y,GLfixed z)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glScalex_Idx))
	{
            GL_ENTRY_PTR(glScalex_Idx) = dlsym(RTLD_NEXT,"glScalex");
            if(!GL_ENTRY_PTR(glScalex_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glScalex_Idx))
    	{
            GL_ENTRY_PREV_TS(glScalex_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glScalex_wrp(x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glScalex_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glScalex_Idx) ++;

        GL_ENTRY_LAST_TS(glScalex_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glScalex_Idx),
				 GL_ENTRY_LAST_TS(glScalex_Idx));
        if(last_diff > 1000000000){
            printf("glScalex %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glScalex_Idx),
	             GL_ENTRY_CALL_TIME(glScalex_Idx),
	             GL_ENTRY_CALL_TIME(glScalex_Idx) /
	             GL_ENTRY_CALL_COUNT(glScalex_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glScalex_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glScalex_Idx) = 0;
             GL_ENTRY_CALL_TIME(glScalex_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glScalex_Idx) = get_ts();
        }


	

}