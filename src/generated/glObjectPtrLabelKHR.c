#include <glTraceCommon.h>
#include <generated.h>

#define glObjectPtrLabelKHR_wrp						\
    ((void  (*)(const void *ptr,GLsizei length,const GLchar *label                                        \
    ))GL_ENTRY_PTR(glObjectPtrLabelKHR_Idx))


GLAPI void  APIENTRY glObjectPtrLabelKHR(const void *ptr,GLsizei length,const GLchar *label)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glObjectPtrLabelKHR_Idx))
    	{
            GL_ENTRY_PREV_TS(glObjectPtrLabelKHR_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glObjectPtrLabelKHR_wrp(ptr,length,label);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glObjectPtrLabelKHR_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glObjectPtrLabelKHR_Idx) ++;

        GL_ENTRY_LAST_TS(glObjectPtrLabelKHR_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glObjectPtrLabelKHR_Idx),
				 GL_ENTRY_LAST_TS(glObjectPtrLabelKHR_Idx));


        if(last_diff > 1000000000){
            printf("glObjectPtrLabelKHR %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glObjectPtrLabelKHR_Idx),
	             GL_ENTRY_CALL_TIME(glObjectPtrLabelKHR_Idx),
	             GL_ENTRY_CALL_TIME(glObjectPtrLabelKHR_Idx) /
	             GL_ENTRY_CALL_COUNT(glObjectPtrLabelKHR_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glObjectPtrLabelKHR_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glObjectPtrLabelKHR_Idx) = 0;
             GL_ENTRY_CALL_TIME(glObjectPtrLabelKHR_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glObjectPtrLabelKHR_Idx) = get_ts();
        }


	

}