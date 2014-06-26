#include <glTraceCommon.h>
#include <generated.h>

#define glColor3hvNV_wrp						\
    ((void  (*)(const GLhalfNV *v                                        \
    ))GL_ENTRY_PTR(glColor3hvNV_Idx))


GLAPI void  APIENTRY glColor3hvNV(const GLhalfNV *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glColor3hvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glColor3hvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColor3hvNV_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColor3hvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColor3hvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glColor3hvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColor3hvNV_Idx),
				 GL_ENTRY_LAST_TS(glColor3hvNV_Idx));


        if(last_diff > 1000000000){
            printf("glColor3hvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColor3hvNV_Idx),
	             GL_ENTRY_CALL_TIME(glColor3hvNV_Idx),
	             GL_ENTRY_CALL_TIME(glColor3hvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glColor3hvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColor3hvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColor3hvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColor3hvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColor3hvNV_Idx) = get_ts();
        }


	

}