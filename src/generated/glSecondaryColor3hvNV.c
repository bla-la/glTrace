#include <glTraceCommon.h>
#include <generated.h>

#define glSecondaryColor3hvNV_wrp						\
    ((void  (*)(const GLhalfNV *v                                        \
    ))GL_ENTRY_PTR(glSecondaryColor3hvNV_Idx))


GLAPI void  APIENTRY glSecondaryColor3hvNV(const GLhalfNV *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSecondaryColor3hvNV_Idx))
	{
            GL_ENTRY_PTR(glSecondaryColor3hvNV_Idx) = dlsym(RTLD_NEXT,"glSecondaryColor3hvNV");
            if(!GL_ENTRY_PTR(glSecondaryColor3hvNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSecondaryColor3hvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glSecondaryColor3hvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSecondaryColor3hvNV_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSecondaryColor3hvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSecondaryColor3hvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glSecondaryColor3hvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSecondaryColor3hvNV_Idx),
				 GL_ENTRY_LAST_TS(glSecondaryColor3hvNV_Idx));
        if(last_diff > 1000000000){
            printf("glSecondaryColor3hvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3hvNV_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3hvNV_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3hvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3hvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSecondaryColor3hvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSecondaryColor3hvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSecondaryColor3hvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSecondaryColor3hvNV_Idx) = get_ts();
        }


	

}