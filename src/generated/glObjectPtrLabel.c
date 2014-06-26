#include <glTraceCommon.h>
#include <generated.h>

#define glObjectPtrLabel_wrp						\
    ((void  (*)(const void *ptr,GLsizei length,const GLchar *label                                        \
    ))GL_ENTRY_PTR(glObjectPtrLabel_Idx))


GLAPI void  APIENTRY glObjectPtrLabel(const void *ptr,GLsizei length,const GLchar *label)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glObjectPtrLabel_Idx))
    	{
            GL_ENTRY_PREV_TS(glObjectPtrLabel_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glObjectPtrLabel_wrp(ptr,length,label);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glObjectPtrLabel_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glObjectPtrLabel_Idx) ++;

        GL_ENTRY_LAST_TS(glObjectPtrLabel_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glObjectPtrLabel_Idx),
				 GL_ENTRY_LAST_TS(glObjectPtrLabel_Idx));


        if(last_diff > 1000000000){
            printf("glObjectPtrLabel %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glObjectPtrLabel_Idx),
	             GL_ENTRY_CALL_TIME(glObjectPtrLabel_Idx),
	             GL_ENTRY_CALL_TIME(glObjectPtrLabel_Idx) /
	             GL_ENTRY_CALL_COUNT(glObjectPtrLabel_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glObjectPtrLabel_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glObjectPtrLabel_Idx) = 0;
             GL_ENTRY_CALL_TIME(glObjectPtrLabel_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glObjectPtrLabel_Idx) = get_ts();
        }


	

}