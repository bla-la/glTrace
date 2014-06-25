#include <glTraceCommon.h>
#include <generated.h>

#define glMultTransposeMatrixd_wrp						\
    ((void  (*)(const GLdouble *m                                        \
    ))GL_ENTRY_PTR(glMultTransposeMatrixd_Idx))


GLAPI void  APIENTRY glMultTransposeMatrixd(const GLdouble *m)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultTransposeMatrixd_Idx))
	{
            GL_ENTRY_PTR(glMultTransposeMatrixd_Idx) = dlsym(RTLD_NEXT,"glMultTransposeMatrixd");
            if(!GL_ENTRY_PTR(glMultTransposeMatrixd_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultTransposeMatrixd_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultTransposeMatrixd_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultTransposeMatrixd_wrp(m);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultTransposeMatrixd_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultTransposeMatrixd_Idx) ++;

        GL_ENTRY_LAST_TS(glMultTransposeMatrixd_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultTransposeMatrixd_Idx),
				 GL_ENTRY_LAST_TS(glMultTransposeMatrixd_Idx));
        if(last_diff > 1000000000){
            printf("glMultTransposeMatrixd %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultTransposeMatrixd_Idx),
	             GL_ENTRY_CALL_TIME(glMultTransposeMatrixd_Idx),
	             GL_ENTRY_CALL_TIME(glMultTransposeMatrixd_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultTransposeMatrixd_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultTransposeMatrixd_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultTransposeMatrixd_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultTransposeMatrixd_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultTransposeMatrixd_Idx) = get_ts();
        }


	

}