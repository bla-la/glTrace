#include <glTraceCommon.h>
#include <generated.h>

#define glSampleMaskIndexedNV_wrp						\
    ((void  (*)(GLuint index,GLbitfield mask                                        \
    ))GL_ENTRY_PTR(glSampleMaskIndexedNV_Idx))


GLAPI void  APIENTRY glSampleMaskIndexedNV(GLuint index,GLbitfield mask)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSampleMaskIndexedNV_Idx))
	{
            GL_ENTRY_PTR(glSampleMaskIndexedNV_Idx) = dlsym(RTLD_NEXT,"glSampleMaskIndexedNV");
            if(!GL_ENTRY_PTR(glSampleMaskIndexedNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSampleMaskIndexedNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glSampleMaskIndexedNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSampleMaskIndexedNV_wrp(index,mask);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSampleMaskIndexedNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSampleMaskIndexedNV_Idx) ++;

        GL_ENTRY_LAST_TS(glSampleMaskIndexedNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSampleMaskIndexedNV_Idx),
				 GL_ENTRY_LAST_TS(glSampleMaskIndexedNV_Idx));
        if(last_diff > 1000000000){
            printf("glSampleMaskIndexedNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSampleMaskIndexedNV_Idx),
	             GL_ENTRY_CALL_TIME(glSampleMaskIndexedNV_Idx),
	             GL_ENTRY_CALL_TIME(glSampleMaskIndexedNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glSampleMaskIndexedNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSampleMaskIndexedNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSampleMaskIndexedNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSampleMaskIndexedNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSampleMaskIndexedNV_Idx) = get_ts();
        }


	

}