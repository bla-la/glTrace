#include <glTraceCommon.h>
#include <generated.h>

#define glVDPAUInitNV_wrp						\
    ((void  (*)(const void *vdpDevice,const void *getProcAddress                                        \
    ))GL_ENTRY_PTR(glVDPAUInitNV_Idx))


GLAPI void  APIENTRY glVDPAUInitNV(const void *vdpDevice,const void *getProcAddress)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVDPAUInitNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVDPAUInitNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVDPAUInitNV_wrp(vdpDevice,getProcAddress);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVDPAUInitNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVDPAUInitNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVDPAUInitNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVDPAUInitNV_Idx),
				 GL_ENTRY_LAST_TS(glVDPAUInitNV_Idx));


        if(last_diff > 1000000000){
            printf("glVDPAUInitNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVDPAUInitNV_Idx),
	             GL_ENTRY_CALL_TIME(glVDPAUInitNV_Idx),
	             GL_ENTRY_CALL_TIME(glVDPAUInitNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVDPAUInitNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVDPAUInitNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVDPAUInitNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVDPAUInitNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVDPAUInitNV_Idx) = get_ts();
        }


	

}