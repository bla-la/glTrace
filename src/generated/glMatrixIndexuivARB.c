#include <glTraceCommon.h>
#include <generated.h>

#define glMatrixIndexuivARB_wrp						\
    ((void  (*)(GLint size,const GLuint *indices                                        \
    ))GL_ENTRY_PTR(glMatrixIndexuivARB_Idx))


GLAPI void  APIENTRY glMatrixIndexuivARB(GLint size,const GLuint *indices)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMatrixIndexuivARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glMatrixIndexuivARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMatrixIndexuivARB_wrp(size,indices);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMatrixIndexuivARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMatrixIndexuivARB_Idx) ++;

        GL_ENTRY_LAST_TS(glMatrixIndexuivARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMatrixIndexuivARB_Idx),
				 GL_ENTRY_LAST_TS(glMatrixIndexuivARB_Idx));


        if(last_diff > 1000000000){
            printf("glMatrixIndexuivARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMatrixIndexuivARB_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixIndexuivARB_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixIndexuivARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glMatrixIndexuivARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMatrixIndexuivARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMatrixIndexuivARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMatrixIndexuivARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMatrixIndexuivARB_Idx) = get_ts();
        }


	

}