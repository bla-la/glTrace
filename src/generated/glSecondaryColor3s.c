#include <glTraceCommon.h>
#include <generated.h>

#define glSecondaryColor3s_wrp						\
    ((void  (*)(GLshort red,GLshort green,GLshort blue                                        \
    ))GL_ENTRY_PTR(glSecondaryColor3s_Idx))


GLAPI void  APIENTRY glSecondaryColor3s(GLshort red,GLshort green,GLshort blue)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSecondaryColor3s_Idx))
	{
            GL_ENTRY_PTR(glSecondaryColor3s_Idx) = dlsym(RTLD_NEXT,"glSecondaryColor3s");
            if(!GL_ENTRY_PTR(glSecondaryColor3s_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSecondaryColor3s_Idx))
    	{
            GL_ENTRY_PREV_TS(glSecondaryColor3s_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSecondaryColor3s_wrp(red,green,blue);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSecondaryColor3s_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSecondaryColor3s_Idx) ++;

        GL_ENTRY_LAST_TS(glSecondaryColor3s_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSecondaryColor3s_Idx),
				 GL_ENTRY_LAST_TS(glSecondaryColor3s_Idx));
        if(last_diff > 1000000000){
            printf("glSecondaryColor3s %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3s_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3s_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3s_Idx) /
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3s_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSecondaryColor3s_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSecondaryColor3s_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSecondaryColor3s_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSecondaryColor3s_Idx) = get_ts();
        }


	

}