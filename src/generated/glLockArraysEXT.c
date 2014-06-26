#include <glTraceCommon.h>
#include <generated.h>

#define glLockArraysEXT_wrp						\
    ((void  (*)(GLint first,GLsizei count                                        \
    ))GL_ENTRY_PTR(glLockArraysEXT_Idx))


GLAPI void  APIENTRY glLockArraysEXT(GLint first,GLsizei count)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glLockArraysEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glLockArraysEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLockArraysEXT_wrp(first,count);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLockArraysEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLockArraysEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glLockArraysEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLockArraysEXT_Idx),
				 GL_ENTRY_LAST_TS(glLockArraysEXT_Idx));


        if(last_diff > 1000000000){
            printf("glLockArraysEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLockArraysEXT_Idx),
	             GL_ENTRY_CALL_TIME(glLockArraysEXT_Idx),
	             GL_ENTRY_CALL_TIME(glLockArraysEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glLockArraysEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLockArraysEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLockArraysEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLockArraysEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLockArraysEXT_Idx) = get_ts();
        }


	

}