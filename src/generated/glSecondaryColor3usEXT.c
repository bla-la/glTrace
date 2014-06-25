#include <glTraceCommon.h>
#include <generated.h>

#define glSecondaryColor3usEXT_wrp						\
    ((void  (*)(GLushort red,GLushort green,GLushort blue                                        \
    ))GL_ENTRY_PTR(glSecondaryColor3usEXT_Idx))


GLAPI void  APIENTRY glSecondaryColor3usEXT(GLushort red,GLushort green,GLushort blue)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSecondaryColor3usEXT_Idx))
	{
            GL_ENTRY_PTR(glSecondaryColor3usEXT_Idx) = dlsym(RTLD_NEXT,"glSecondaryColor3usEXT");
            if(!GL_ENTRY_PTR(glSecondaryColor3usEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSecondaryColor3usEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glSecondaryColor3usEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSecondaryColor3usEXT_wrp(red,green,blue);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSecondaryColor3usEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSecondaryColor3usEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glSecondaryColor3usEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSecondaryColor3usEXT_Idx),
				 GL_ENTRY_LAST_TS(glSecondaryColor3usEXT_Idx));
        if(last_diff > 1000000000){
            printf("glSecondaryColor3usEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3usEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3usEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3usEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3usEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSecondaryColor3usEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSecondaryColor3usEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSecondaryColor3usEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSecondaryColor3usEXT_Idx) = get_ts();
        }


	

}