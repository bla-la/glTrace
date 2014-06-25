#include <glTraceCommon.h>
#include <generated.h>

#define glColorFragmentOp1ATI_wrp						\
    ((void  (*)(GLenum op,GLuint dst,GLuint dstMask,GLuint dstMod,GLuint arg1,GLuint arg1Rep,GLuint arg1Mod                                        \
    ))GL_ENTRY_PTR(glColorFragmentOp1ATI_Idx))


GLAPI void  APIENTRY glColorFragmentOp1ATI(GLenum op,GLuint dst,GLuint dstMask,GLuint dstMod,GLuint arg1,GLuint arg1Rep,GLuint arg1Mod)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glColorFragmentOp1ATI_Idx))
	{
            GL_ENTRY_PTR(glColorFragmentOp1ATI_Idx) = dlsym(RTLD_NEXT,"glColorFragmentOp1ATI");
            if(!GL_ENTRY_PTR(glColorFragmentOp1ATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glColorFragmentOp1ATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glColorFragmentOp1ATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColorFragmentOp1ATI_wrp(op,dst,dstMask,dstMod,arg1,arg1Rep,arg1Mod);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColorFragmentOp1ATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColorFragmentOp1ATI_Idx) ++;

        GL_ENTRY_LAST_TS(glColorFragmentOp1ATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColorFragmentOp1ATI_Idx),
				 GL_ENTRY_LAST_TS(glColorFragmentOp1ATI_Idx));
        if(last_diff > 1000000000){
            printf("glColorFragmentOp1ATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColorFragmentOp1ATI_Idx),
	             GL_ENTRY_CALL_TIME(glColorFragmentOp1ATI_Idx),
	             GL_ENTRY_CALL_TIME(glColorFragmentOp1ATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glColorFragmentOp1ATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColorFragmentOp1ATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColorFragmentOp1ATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColorFragmentOp1ATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColorFragmentOp1ATI_Idx) = get_ts();
        }


	

}