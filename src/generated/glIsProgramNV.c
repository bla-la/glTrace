#include <glTraceCommon.h>
#include <generated.h>

#define glIsProgramNV_wrp						\
    ((GLboolean  (*)(GLuint id                                        \
    ))GL_ENTRY_PTR(glIsProgramNV_Idx))


GLAPI GLboolean  APIENTRY glIsProgramNV(GLuint id)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glIsProgramNV_Idx))
	{
            GL_ENTRY_PTR(glIsProgramNV_Idx) = dlsym(RTLD_NEXT,"glIsProgramNV");
            if(!GL_ENTRY_PTR(glIsProgramNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glIsProgramNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsProgramNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsProgramNV_wrp(id);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsProgramNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsProgramNV_Idx) ++;

        GL_ENTRY_LAST_TS(glIsProgramNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsProgramNV_Idx),
				 GL_ENTRY_LAST_TS(glIsProgramNV_Idx));
        if(last_diff > 1000000000){
            printf("glIsProgramNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsProgramNV_Idx),
	             GL_ENTRY_CALL_TIME(glIsProgramNV_Idx),
	             GL_ENTRY_CALL_TIME(glIsProgramNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsProgramNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsProgramNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsProgramNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsProgramNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsProgramNV_Idx) = get_ts();
        }


	return retval;

}