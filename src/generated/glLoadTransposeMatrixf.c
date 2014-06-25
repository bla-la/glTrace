#include <glTraceCommon.h>
#include <generated.h>

#define glLoadTransposeMatrixf_wrp						\
    ((void  (*)(const GLfloat *m                                        \
    ))GL_ENTRY_PTR(glLoadTransposeMatrixf_Idx))


GLAPI void  APIENTRY glLoadTransposeMatrixf(const GLfloat *m)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glLoadTransposeMatrixf_Idx))
	{
            GL_ENTRY_PTR(glLoadTransposeMatrixf_Idx) = dlsym(RTLD_NEXT,"glLoadTransposeMatrixf");
            if(!GL_ENTRY_PTR(glLoadTransposeMatrixf_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glLoadTransposeMatrixf_Idx))
    	{
            GL_ENTRY_PREV_TS(glLoadTransposeMatrixf_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLoadTransposeMatrixf_wrp(m);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLoadTransposeMatrixf_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLoadTransposeMatrixf_Idx) ++;

        GL_ENTRY_LAST_TS(glLoadTransposeMatrixf_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLoadTransposeMatrixf_Idx),
				 GL_ENTRY_LAST_TS(glLoadTransposeMatrixf_Idx));
        if(last_diff > 1000000000){
            printf("glLoadTransposeMatrixf %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLoadTransposeMatrixf_Idx),
	             GL_ENTRY_CALL_TIME(glLoadTransposeMatrixf_Idx),
	             GL_ENTRY_CALL_TIME(glLoadTransposeMatrixf_Idx) /
	             GL_ENTRY_CALL_COUNT(glLoadTransposeMatrixf_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLoadTransposeMatrixf_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLoadTransposeMatrixf_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLoadTransposeMatrixf_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLoadTransposeMatrixf_Idx) = get_ts();
        }


	

}