#include <glTraceCommon.h>
#include <generated.h>

#define glBufferData_wrp						\
    ((void  (*)(GLenum target,GLsizeiptr size,const void *data,GLenum usage                                        \
    ))GL_ENTRY_PTR(glBufferData_Idx))


GLAPI void  APIENTRY glBufferData(GLenum target,GLsizeiptr size,const void *data,GLenum usage)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBufferData_Idx))
	{
            GL_ENTRY_PTR(glBufferData_Idx) = dlsym(RTLD_NEXT,"glBufferData");
            if(!GL_ENTRY_PTR(glBufferData_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBufferData_Idx))
    	{
            GL_ENTRY_PREV_TS(glBufferData_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBufferData_wrp(target,size,data,usage);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBufferData_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBufferData_Idx) ++;

        GL_ENTRY_LAST_TS(glBufferData_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBufferData_Idx),
				 GL_ENTRY_LAST_TS(glBufferData_Idx));
        if(last_diff > 1000000000){
            printf("glBufferData %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBufferData_Idx),
	             GL_ENTRY_CALL_TIME(glBufferData_Idx),
	             GL_ENTRY_CALL_TIME(glBufferData_Idx) /
	             GL_ENTRY_CALL_COUNT(glBufferData_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBufferData_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBufferData_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBufferData_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBufferData_Idx) = get_ts();
        }


	

}