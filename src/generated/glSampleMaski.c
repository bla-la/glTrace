#include <glTraceCommon.h>
#include <generated.h>

#define glSampleMaski_wrp						\
    ((void  (*)(GLuint maskNumber,GLbitfield mask                                        \
    ))GL_ENTRY_PTR(glSampleMaski_Idx))


GLAPI void  APIENTRY glSampleMaski(GLuint maskNumber,GLbitfield mask)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSampleMaski_Idx))
	{
            GL_ENTRY_PTR(glSampleMaski_Idx) = dlsym(RTLD_NEXT,"glSampleMaski");
            if(!GL_ENTRY_PTR(glSampleMaski_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSampleMaski_Idx))
    	{
            GL_ENTRY_PREV_TS(glSampleMaski_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSampleMaski_wrp(maskNumber,mask);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSampleMaski_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSampleMaski_Idx) ++;

        GL_ENTRY_LAST_TS(glSampleMaski_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSampleMaski_Idx),
				 GL_ENTRY_LAST_TS(glSampleMaski_Idx));
        if(last_diff > 1000000000){
            printf("glSampleMaski %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSampleMaski_Idx),
	             GL_ENTRY_CALL_TIME(glSampleMaski_Idx),
	             GL_ENTRY_CALL_TIME(glSampleMaski_Idx) /
	             GL_ENTRY_CALL_COUNT(glSampleMaski_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSampleMaski_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSampleMaski_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSampleMaski_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSampleMaski_Idx) = get_ts();
        }


	

}