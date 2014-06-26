#include <glTraceCommon.h>
#include <generated.h>

#define glGetObjectPtrLabel_wrp						\
    ((void  (*)(const void *ptr,GLsizei bufSize,GLsizei *length,GLchar *label                                        \
    ))GL_ENTRY_PTR(glGetObjectPtrLabel_Idx))


GLAPI void  APIENTRY glGetObjectPtrLabel(const void *ptr,GLsizei bufSize,GLsizei *length,GLchar *label)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetObjectPtrLabel_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetObjectPtrLabel_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetObjectPtrLabel_wrp(ptr,bufSize,length,label);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetObjectPtrLabel_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetObjectPtrLabel_Idx) ++;

        GL_ENTRY_LAST_TS(glGetObjectPtrLabel_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetObjectPtrLabel_Idx),
				 GL_ENTRY_LAST_TS(glGetObjectPtrLabel_Idx));


        if(last_diff > 1000000000){
            printf("glGetObjectPtrLabel %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetObjectPtrLabel_Idx),
	             GL_ENTRY_CALL_TIME(glGetObjectPtrLabel_Idx),
	             GL_ENTRY_CALL_TIME(glGetObjectPtrLabel_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetObjectPtrLabel_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetObjectPtrLabel_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetObjectPtrLabel_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetObjectPtrLabel_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetObjectPtrLabel_Idx) = get_ts();
        }


	

}