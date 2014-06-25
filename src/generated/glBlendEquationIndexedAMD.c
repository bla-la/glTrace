#include <glTraceCommon.h>
#include <generated.h>

#define glBlendEquationIndexedAMD_wrp						\
    ((void  (*)(GLuint buf,GLenum mode                                        \
    ))GL_ENTRY_PTR(glBlendEquationIndexedAMD_Idx))


GLAPI void  APIENTRY glBlendEquationIndexedAMD(GLuint buf,GLenum mode)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBlendEquationIndexedAMD_Idx))
	{
            GL_ENTRY_PTR(glBlendEquationIndexedAMD_Idx) = dlsym(RTLD_NEXT,"glBlendEquationIndexedAMD");
            if(!GL_ENTRY_PTR(glBlendEquationIndexedAMD_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBlendEquationIndexedAMD_Idx))
    	{
            GL_ENTRY_PREV_TS(glBlendEquationIndexedAMD_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBlendEquationIndexedAMD_wrp(buf,mode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBlendEquationIndexedAMD_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBlendEquationIndexedAMD_Idx) ++;

        GL_ENTRY_LAST_TS(glBlendEquationIndexedAMD_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBlendEquationIndexedAMD_Idx),
				 GL_ENTRY_LAST_TS(glBlendEquationIndexedAMD_Idx));
        if(last_diff > 1000000000){
            printf("glBlendEquationIndexedAMD %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBlendEquationIndexedAMD_Idx),
	             GL_ENTRY_CALL_TIME(glBlendEquationIndexedAMD_Idx),
	             GL_ENTRY_CALL_TIME(glBlendEquationIndexedAMD_Idx) /
	             GL_ENTRY_CALL_COUNT(glBlendEquationIndexedAMD_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBlendEquationIndexedAMD_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBlendEquationIndexedAMD_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBlendEquationIndexedAMD_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBlendEquationIndexedAMD_Idx) = get_ts();
        }


	

}