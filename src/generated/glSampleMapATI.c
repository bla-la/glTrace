#include <glTraceCommon.h>
#include <generated.h>

#define glSampleMapATI_wrp						\
    ((void  (*)(GLuint dst,GLuint interp,GLenum swizzle                                        \
    ))GL_ENTRY_PTR(glSampleMapATI_Idx))


GLAPI void  APIENTRY glSampleMapATI(GLuint dst,GLuint interp,GLenum swizzle)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSampleMapATI_Idx))
	{
            GL_ENTRY_PTR(glSampleMapATI_Idx) = dlsym(RTLD_NEXT,"glSampleMapATI");
            if(!GL_ENTRY_PTR(glSampleMapATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSampleMapATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glSampleMapATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSampleMapATI_wrp(dst,interp,swizzle);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSampleMapATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSampleMapATI_Idx) ++;

        GL_ENTRY_LAST_TS(glSampleMapATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSampleMapATI_Idx),
				 GL_ENTRY_LAST_TS(glSampleMapATI_Idx));
        if(last_diff > 1000000000){
            printf("glSampleMapATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSampleMapATI_Idx),
	             GL_ENTRY_CALL_TIME(glSampleMapATI_Idx),
	             GL_ENTRY_CALL_TIME(glSampleMapATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glSampleMapATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSampleMapATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSampleMapATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSampleMapATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSampleMapATI_Idx) = get_ts();
        }


	

}