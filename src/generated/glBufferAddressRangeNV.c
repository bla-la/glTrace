#include <glTraceCommon.h>
#include <generated.h>

#define glBufferAddressRangeNV_wrp						\
    ((void  (*)(GLenum pname,GLuint index,GLuint64EXT address,GLsizeiptr length                                        \
    ))GL_ENTRY_PTR(glBufferAddressRangeNV_Idx))


GLAPI void  APIENTRY glBufferAddressRangeNV(GLenum pname,GLuint index,GLuint64EXT address,GLsizeiptr length)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBufferAddressRangeNV_Idx))
	{
            GL_ENTRY_PTR(glBufferAddressRangeNV_Idx) = dlsym(RTLD_NEXT,"glBufferAddressRangeNV");
            if(!GL_ENTRY_PTR(glBufferAddressRangeNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBufferAddressRangeNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glBufferAddressRangeNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBufferAddressRangeNV_wrp(pname,index,address,length);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBufferAddressRangeNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBufferAddressRangeNV_Idx) ++;

        GL_ENTRY_LAST_TS(glBufferAddressRangeNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBufferAddressRangeNV_Idx),
				 GL_ENTRY_LAST_TS(glBufferAddressRangeNV_Idx));
        if(last_diff > 1000000000){
            printf("glBufferAddressRangeNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBufferAddressRangeNV_Idx),
	             GL_ENTRY_CALL_TIME(glBufferAddressRangeNV_Idx),
	             GL_ENTRY_CALL_TIME(glBufferAddressRangeNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glBufferAddressRangeNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBufferAddressRangeNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBufferAddressRangeNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBufferAddressRangeNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBufferAddressRangeNV_Idx) = get_ts();
        }


	

}