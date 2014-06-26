#include <glTraceCommon.h>
#include <generated.h>

#define glGetObjectPtrLabelKHR_wrp						\
    ((void  (*)(const void *ptr,GLsizei bufSize,GLsizei *length,GLchar *label                                        \
    ))GL_ENTRY_PTR(glGetObjectPtrLabelKHR_Idx))


GLAPI void  APIENTRY glGetObjectPtrLabelKHR(const void *ptr,GLsizei bufSize,GLsizei *length,GLchar *label)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetObjectPtrLabelKHR_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetObjectPtrLabelKHR_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetObjectPtrLabelKHR_wrp(ptr,bufSize,length,label);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetObjectPtrLabelKHR_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetObjectPtrLabelKHR_Idx) ++;

        GL_ENTRY_LAST_TS(glGetObjectPtrLabelKHR_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetObjectPtrLabelKHR_Idx),
				 GL_ENTRY_LAST_TS(glGetObjectPtrLabelKHR_Idx));


        if(last_diff > 1000000000){
            printf("glGetObjectPtrLabelKHR %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetObjectPtrLabelKHR_Idx),
	             GL_ENTRY_CALL_TIME(glGetObjectPtrLabelKHR_Idx),
	             GL_ENTRY_CALL_TIME(glGetObjectPtrLabelKHR_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetObjectPtrLabelKHR_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetObjectPtrLabelKHR_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetObjectPtrLabelKHR_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetObjectPtrLabelKHR_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetObjectPtrLabelKHR_Idx) = get_ts();
        }


	

}