#include <glTraceCommon.h>
#include <generated.h>

#define glGenFragmentShadersATI_wrp						\
    ((GLuint  (*)(GLuint range                                        \
    ))GL_ENTRY_PTR(glGenFragmentShadersATI_Idx))


GLAPI GLuint  APIENTRY glGenFragmentShadersATI(GLuint range)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGenFragmentShadersATI_Idx))
	{
            GL_ENTRY_PTR(glGenFragmentShadersATI_Idx) = dlsym(RTLD_NEXT,"glGenFragmentShadersATI");
            if(!GL_ENTRY_PTR(glGenFragmentShadersATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGenFragmentShadersATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenFragmentShadersATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLuint  retval = glGenFragmentShadersATI_wrp(range);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenFragmentShadersATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenFragmentShadersATI_Idx) ++;

        GL_ENTRY_LAST_TS(glGenFragmentShadersATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenFragmentShadersATI_Idx),
				 GL_ENTRY_LAST_TS(glGenFragmentShadersATI_Idx));
        if(last_diff > 1000000000){
            printf("glGenFragmentShadersATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenFragmentShadersATI_Idx),
	             GL_ENTRY_CALL_TIME(glGenFragmentShadersATI_Idx),
	             GL_ENTRY_CALL_TIME(glGenFragmentShadersATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenFragmentShadersATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenFragmentShadersATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenFragmentShadersATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenFragmentShadersATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenFragmentShadersATI_Idx) = get_ts();
        }


	return retval;

}