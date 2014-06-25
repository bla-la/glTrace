#include <glTraceCommon.h>
#include <generated.h>

#define glIsPathNV_wrp						\
    ((GLboolean  (*)(GLuint path                                        \
    ))GL_ENTRY_PTR(glIsPathNV_Idx))


GLAPI GLboolean  APIENTRY glIsPathNV(GLuint path)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glIsPathNV_Idx))
	{
            GL_ENTRY_PTR(glIsPathNV_Idx) = dlsym(RTLD_NEXT,"glIsPathNV");
            if(!GL_ENTRY_PTR(glIsPathNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glIsPathNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsPathNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsPathNV_wrp(path);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsPathNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsPathNV_Idx) ++;

        GL_ENTRY_LAST_TS(glIsPathNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsPathNV_Idx),
				 GL_ENTRY_LAST_TS(glIsPathNV_Idx));
        if(last_diff > 1000000000){
            printf("glIsPathNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsPathNV_Idx),
	             GL_ENTRY_CALL_TIME(glIsPathNV_Idx),
	             GL_ENTRY_CALL_TIME(glIsPathNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsPathNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsPathNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsPathNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsPathNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsPathNV_Idx) = get_ts();
        }


	return retval;

}