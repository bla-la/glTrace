#include <glTraceCommon.h>
#include <generated.h>

#define glBufferParameteriAPPLE_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLint param                                        \
    ))GL_ENTRY_PTR(glBufferParameteriAPPLE_Idx))


GLAPI void  APIENTRY glBufferParameteriAPPLE(GLenum target,GLenum pname,GLint param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBufferParameteriAPPLE_Idx))
	{
            GL_ENTRY_PTR(glBufferParameteriAPPLE_Idx) = dlsym(RTLD_NEXT,"glBufferParameteriAPPLE");
            if(!GL_ENTRY_PTR(glBufferParameteriAPPLE_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBufferParameteriAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glBufferParameteriAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBufferParameteriAPPLE_wrp(target,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBufferParameteriAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBufferParameteriAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glBufferParameteriAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBufferParameteriAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glBufferParameteriAPPLE_Idx));
        if(last_diff > 1000000000){
            printf("glBufferParameteriAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBufferParameteriAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glBufferParameteriAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glBufferParameteriAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glBufferParameteriAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBufferParameteriAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBufferParameteriAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBufferParameteriAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBufferParameteriAPPLE_Idx) = get_ts();
        }


	

}