#include <glTraceCommon.h>
#include <generated.h>

#define glSecondaryColor3b_wrp						\
    ((void  (*)(GLbyte red,GLbyte green,GLbyte blue                                        \
    ))GL_ENTRY_PTR(glSecondaryColor3b_Idx))


GLAPI void  APIENTRY glSecondaryColor3b(GLbyte red,GLbyte green,GLbyte blue)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSecondaryColor3b_Idx))
	{
            GL_ENTRY_PTR(glSecondaryColor3b_Idx) = dlsym(RTLD_NEXT,"glSecondaryColor3b");
            if(!GL_ENTRY_PTR(glSecondaryColor3b_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSecondaryColor3b_Idx))
    	{
            GL_ENTRY_PREV_TS(glSecondaryColor3b_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSecondaryColor3b_wrp(red,green,blue);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSecondaryColor3b_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSecondaryColor3b_Idx) ++;

        GL_ENTRY_LAST_TS(glSecondaryColor3b_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSecondaryColor3b_Idx),
				 GL_ENTRY_LAST_TS(glSecondaryColor3b_Idx));
        if(last_diff > 1000000000){
            printf("glSecondaryColor3b %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3b_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3b_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3b_Idx) /
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3b_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSecondaryColor3b_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSecondaryColor3b_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSecondaryColor3b_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSecondaryColor3b_Idx) = get_ts();
        }


	

}