#include <glTraceCommon.h>
#include <generated.h>

#define glSecondaryColor3usv_wrp						\
    ((void  (*)(const GLushort *v                                        \
    ))GL_ENTRY_PTR(glSecondaryColor3usv_Idx))


GLAPI void  APIENTRY glSecondaryColor3usv(const GLushort *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSecondaryColor3usv_Idx))
	{
            GL_ENTRY_PTR(glSecondaryColor3usv_Idx) = dlsym(RTLD_NEXT,"glSecondaryColor3usv");
            if(!GL_ENTRY_PTR(glSecondaryColor3usv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSecondaryColor3usv_Idx))
    	{
            GL_ENTRY_PREV_TS(glSecondaryColor3usv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSecondaryColor3usv_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSecondaryColor3usv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSecondaryColor3usv_Idx) ++;

        GL_ENTRY_LAST_TS(glSecondaryColor3usv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSecondaryColor3usv_Idx),
				 GL_ENTRY_LAST_TS(glSecondaryColor3usv_Idx));
        if(last_diff > 1000000000){
            printf("glSecondaryColor3usv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3usv_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3usv_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3usv_Idx) /
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3usv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSecondaryColor3usv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSecondaryColor3usv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSecondaryColor3usv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSecondaryColor3usv_Idx) = get_ts();
        }


	

}