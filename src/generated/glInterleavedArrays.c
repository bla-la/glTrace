#include <glTraceCommon.h>
#include <generated.h>

#define glInterleavedArrays_wrp						\
    ((void  (*)(GLenum format,GLsizei stride,const void *pointer                                        \
    ))GL_ENTRY_PTR(glInterleavedArrays_Idx))


GLAPI void  APIENTRY glInterleavedArrays(GLenum format,GLsizei stride,const void *pointer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glInterleavedArrays_Idx))
	{
            GL_ENTRY_PTR(glInterleavedArrays_Idx) = dlsym(RTLD_NEXT,"glInterleavedArrays");
            if(!GL_ENTRY_PTR(glInterleavedArrays_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glInterleavedArrays_Idx))
    	{
            GL_ENTRY_PREV_TS(glInterleavedArrays_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glInterleavedArrays_wrp(format,stride,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glInterleavedArrays_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glInterleavedArrays_Idx) ++;

        GL_ENTRY_LAST_TS(glInterleavedArrays_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glInterleavedArrays_Idx),
				 GL_ENTRY_LAST_TS(glInterleavedArrays_Idx));
        if(last_diff > 1000000000){
            printf("glInterleavedArrays %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glInterleavedArrays_Idx),
	             GL_ENTRY_CALL_TIME(glInterleavedArrays_Idx),
	             GL_ENTRY_CALL_TIME(glInterleavedArrays_Idx) /
	             GL_ENTRY_CALL_COUNT(glInterleavedArrays_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glInterleavedArrays_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glInterleavedArrays_Idx) = 0;
             GL_ENTRY_CALL_TIME(glInterleavedArrays_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glInterleavedArrays_Idx) = get_ts();
        }


	

}