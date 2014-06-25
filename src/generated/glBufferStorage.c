#include <glTraceCommon.h>
#include <generated.h>

#define glBufferStorage_wrp						\
    ((void  (*)(GLenum target,GLsizeiptr size,const void *data,GLbitfield flags                                        \
    ))GL_ENTRY_PTR(glBufferStorage_Idx))


GLAPI void  APIENTRY glBufferStorage(GLenum target,GLsizeiptr size,const void *data,GLbitfield flags)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBufferStorage_Idx))
	{
            GL_ENTRY_PTR(glBufferStorage_Idx) = dlsym(RTLD_NEXT,"glBufferStorage");
            if(!GL_ENTRY_PTR(glBufferStorage_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBufferStorage_Idx))
    	{
            GL_ENTRY_PREV_TS(glBufferStorage_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBufferStorage_wrp(target,size,data,flags);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBufferStorage_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBufferStorage_Idx) ++;

        GL_ENTRY_LAST_TS(glBufferStorage_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBufferStorage_Idx),
				 GL_ENTRY_LAST_TS(glBufferStorage_Idx));
        if(last_diff > 1000000000){
            printf("glBufferStorage %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBufferStorage_Idx),
	             GL_ENTRY_CALL_TIME(glBufferStorage_Idx),
	             GL_ENTRY_CALL_TIME(glBufferStorage_Idx) /
	             GL_ENTRY_CALL_COUNT(glBufferStorage_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBufferStorage_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBufferStorage_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBufferStorage_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBufferStorage_Idx) = get_ts();
        }


	

}