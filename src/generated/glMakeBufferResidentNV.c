#include <glTraceCommon.h>
#include <generated.h>

#define glMakeBufferResidentNV_wrp						\
    ((void  (*)(GLenum target,GLenum access                                        \
    ))GL_ENTRY_PTR(glMakeBufferResidentNV_Idx))


GLAPI void  APIENTRY glMakeBufferResidentNV(GLenum target,GLenum access)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMakeBufferResidentNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glMakeBufferResidentNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMakeBufferResidentNV_wrp(target,access);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMakeBufferResidentNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMakeBufferResidentNV_Idx) ++;

        GL_ENTRY_LAST_TS(glMakeBufferResidentNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMakeBufferResidentNV_Idx),
				 GL_ENTRY_LAST_TS(glMakeBufferResidentNV_Idx));


        if(last_diff > 1000000000){
            printf("glMakeBufferResidentNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMakeBufferResidentNV_Idx),
	             GL_ENTRY_CALL_TIME(glMakeBufferResidentNV_Idx),
	             GL_ENTRY_CALL_TIME(glMakeBufferResidentNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glMakeBufferResidentNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMakeBufferResidentNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMakeBufferResidentNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMakeBufferResidentNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMakeBufferResidentNV_Idx) = get_ts();
        }


	

}