#include <glTraceCommon.h>
#include <generated.h>

#define glColorFragmentOp2ATI_wrp						\
    ((void  (*)(GLenum op,GLuint dst,GLuint dstMask,GLuint dstMod,GLuint arg1,GLuint arg1Rep,GLuint arg1Mod,GLuint arg2,GLuint arg2Rep,GLuint arg2Mod                                        \
    ))GL_ENTRY_PTR(glColorFragmentOp2ATI_Idx))


GLAPI void  APIENTRY glColorFragmentOp2ATI(GLenum op,GLuint dst,GLuint dstMask,GLuint dstMod,GLuint arg1,GLuint arg1Rep,GLuint arg1Mod,GLuint arg2,GLuint arg2Rep,GLuint arg2Mod)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glColorFragmentOp2ATI_Idx))
	{
            GL_ENTRY_PTR(glColorFragmentOp2ATI_Idx) = dlsym(RTLD_NEXT,"glColorFragmentOp2ATI");
            if(!GL_ENTRY_PTR(glColorFragmentOp2ATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glColorFragmentOp2ATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glColorFragmentOp2ATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColorFragmentOp2ATI_wrp(op,dst,dstMask,dstMod,arg1,arg1Rep,arg1Mod,arg2,arg2Rep,arg2Mod);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColorFragmentOp2ATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColorFragmentOp2ATI_Idx) ++;

        GL_ENTRY_LAST_TS(glColorFragmentOp2ATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColorFragmentOp2ATI_Idx),
				 GL_ENTRY_LAST_TS(glColorFragmentOp2ATI_Idx));
        if(last_diff > 1000000000){
            printf("glColorFragmentOp2ATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColorFragmentOp2ATI_Idx),
	             GL_ENTRY_CALL_TIME(glColorFragmentOp2ATI_Idx),
	             GL_ENTRY_CALL_TIME(glColorFragmentOp2ATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glColorFragmentOp2ATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColorFragmentOp2ATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColorFragmentOp2ATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColorFragmentOp2ATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColorFragmentOp2ATI_Idx) = get_ts();
        }


	

}