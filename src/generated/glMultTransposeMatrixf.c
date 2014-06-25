#include <glTraceCommon.h>
#include <generated.h>

#define glMultTransposeMatrixf_wrp						\
    ((void  (*)(const GLfloat *m                                        \
    ))GL_ENTRY_PTR(glMultTransposeMatrixf_Idx))


GLAPI void  APIENTRY glMultTransposeMatrixf(const GLfloat *m)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultTransposeMatrixf_Idx))
	{
            GL_ENTRY_PTR(glMultTransposeMatrixf_Idx) = dlsym(RTLD_NEXT,"glMultTransposeMatrixf");
            if(!GL_ENTRY_PTR(glMultTransposeMatrixf_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultTransposeMatrixf_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultTransposeMatrixf_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultTransposeMatrixf_wrp(m);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultTransposeMatrixf_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultTransposeMatrixf_Idx) ++;

        GL_ENTRY_LAST_TS(glMultTransposeMatrixf_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultTransposeMatrixf_Idx),
				 GL_ENTRY_LAST_TS(glMultTransposeMatrixf_Idx));
        if(last_diff > 1000000000){
            printf("glMultTransposeMatrixf %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultTransposeMatrixf_Idx),
	             GL_ENTRY_CALL_TIME(glMultTransposeMatrixf_Idx),
	             GL_ENTRY_CALL_TIME(glMultTransposeMatrixf_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultTransposeMatrixf_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultTransposeMatrixf_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultTransposeMatrixf_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultTransposeMatrixf_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultTransposeMatrixf_Idx) = get_ts();
        }


	

}