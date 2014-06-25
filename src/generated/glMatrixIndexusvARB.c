#include <glTraceCommon.h>
#include <generated.h>

#define glMatrixIndexusvARB_wrp						\
    ((void  (*)(GLint size,const GLushort *indices                                        \
    ))GL_ENTRY_PTR(glMatrixIndexusvARB_Idx))


GLAPI void  APIENTRY glMatrixIndexusvARB(GLint size,const GLushort *indices)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMatrixIndexusvARB_Idx))
	{
            GL_ENTRY_PTR(glMatrixIndexusvARB_Idx) = dlsym(RTLD_NEXT,"glMatrixIndexusvARB");
            if(!GL_ENTRY_PTR(glMatrixIndexusvARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMatrixIndexusvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glMatrixIndexusvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMatrixIndexusvARB_wrp(size,indices);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMatrixIndexusvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMatrixIndexusvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glMatrixIndexusvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMatrixIndexusvARB_Idx),
				 GL_ENTRY_LAST_TS(glMatrixIndexusvARB_Idx));
        if(last_diff > 1000000000){
            printf("glMatrixIndexusvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMatrixIndexusvARB_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixIndexusvARB_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixIndexusvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glMatrixIndexusvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMatrixIndexusvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMatrixIndexusvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMatrixIndexusvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMatrixIndexusvARB_Idx) = get_ts();
        }


	

}