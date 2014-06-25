#include <glTraceCommon.h>
#include <generated.h>

#define glIsFenceNV_wrp						\
    ((GLboolean  (*)(GLuint fence                                        \
    ))GL_ENTRY_PTR(glIsFenceNV_Idx))


GLAPI GLboolean  APIENTRY glIsFenceNV(GLuint fence)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glIsFenceNV_Idx))
	{
            GL_ENTRY_PTR(glIsFenceNV_Idx) = dlsym(RTLD_NEXT,"glIsFenceNV");
            if(!GL_ENTRY_PTR(glIsFenceNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glIsFenceNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsFenceNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsFenceNV_wrp(fence);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsFenceNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsFenceNV_Idx) ++;

        GL_ENTRY_LAST_TS(glIsFenceNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsFenceNV_Idx),
				 GL_ENTRY_LAST_TS(glIsFenceNV_Idx));
        if(last_diff > 1000000000){
            printf("glIsFenceNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsFenceNV_Idx),
	             GL_ENTRY_CALL_TIME(glIsFenceNV_Idx),
	             GL_ENTRY_CALL_TIME(glIsFenceNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsFenceNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsFenceNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsFenceNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsFenceNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsFenceNV_Idx) = get_ts();
        }


	return retval;

}