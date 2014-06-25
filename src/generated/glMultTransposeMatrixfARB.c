#include <glTraceCommon.h>
#include <generated.h>

#define glMultTransposeMatrixfARB_wrp						\
    ((void  (*)(const GLfloat *m                                        \
    ))GL_ENTRY_PTR(glMultTransposeMatrixfARB_Idx))


GLAPI void  APIENTRY glMultTransposeMatrixfARB(const GLfloat *m)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultTransposeMatrixfARB_Idx))
	{
            GL_ENTRY_PTR(glMultTransposeMatrixfARB_Idx) = dlsym(RTLD_NEXT,"glMultTransposeMatrixfARB");
            if(!GL_ENTRY_PTR(glMultTransposeMatrixfARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultTransposeMatrixfARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultTransposeMatrixfARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultTransposeMatrixfARB_wrp(m);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultTransposeMatrixfARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultTransposeMatrixfARB_Idx) ++;

        GL_ENTRY_LAST_TS(glMultTransposeMatrixfARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultTransposeMatrixfARB_Idx),
				 GL_ENTRY_LAST_TS(glMultTransposeMatrixfARB_Idx));
        if(last_diff > 1000000000){
            printf("glMultTransposeMatrixfARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultTransposeMatrixfARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultTransposeMatrixfARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultTransposeMatrixfARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultTransposeMatrixfARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultTransposeMatrixfARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultTransposeMatrixfARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultTransposeMatrixfARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultTransposeMatrixfARB_Idx) = get_ts();
        }


	

}