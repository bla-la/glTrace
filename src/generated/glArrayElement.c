#include <glTraceCommon.h>
#include <generated.h>

#define glArrayElement_wrp						\
    ((void  (*)(GLint i                                        \
    ))GL_ENTRY_PTR(glArrayElement_Idx))


GLAPI void  APIENTRY glArrayElement(GLint i)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glArrayElement_Idx))
	{
            GL_ENTRY_PTR(glArrayElement_Idx) = dlsym(RTLD_NEXT,"glArrayElement");
            if(!GL_ENTRY_PTR(glArrayElement_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glArrayElement_Idx))
    	{
            GL_ENTRY_PREV_TS(glArrayElement_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glArrayElement_wrp(i);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glArrayElement_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glArrayElement_Idx) ++;

        GL_ENTRY_LAST_TS(glArrayElement_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glArrayElement_Idx),
				 GL_ENTRY_LAST_TS(glArrayElement_Idx));
        if(last_diff > 1000000000){
            printf("glArrayElement %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glArrayElement_Idx),
	             GL_ENTRY_CALL_TIME(glArrayElement_Idx),
	             GL_ENTRY_CALL_TIME(glArrayElement_Idx) /
	             GL_ENTRY_CALL_COUNT(glArrayElement_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glArrayElement_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glArrayElement_Idx) = 0;
             GL_ENTRY_CALL_TIME(glArrayElement_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glArrayElement_Idx) = get_ts();
        }


	

}