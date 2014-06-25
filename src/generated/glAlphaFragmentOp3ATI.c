#include <glTraceCommon.h>
#include <generated.h>

#define glAlphaFragmentOp3ATI_wrp						\
    ((void  (*)(GLenum op,GLuint dst,GLuint dstMod,GLuint arg1,GLuint arg1Rep,GLuint arg1Mod,GLuint arg2,GLuint arg2Rep,GLuint arg2Mod,GLuint arg3,GLuint arg3Rep,GLuint arg3Mod                                        \
    ))GL_ENTRY_PTR(glAlphaFragmentOp3ATI_Idx))


GLAPI void  APIENTRY glAlphaFragmentOp3ATI(GLenum op,GLuint dst,GLuint dstMod,GLuint arg1,GLuint arg1Rep,GLuint arg1Mod,GLuint arg2,GLuint arg2Rep,GLuint arg2Mod,GLuint arg3,GLuint arg3Rep,GLuint arg3Mod)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glAlphaFragmentOp3ATI_Idx))
	{
            GL_ENTRY_PTR(glAlphaFragmentOp3ATI_Idx) = dlsym(RTLD_NEXT,"glAlphaFragmentOp3ATI");
            if(!GL_ENTRY_PTR(glAlphaFragmentOp3ATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glAlphaFragmentOp3ATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glAlphaFragmentOp3ATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glAlphaFragmentOp3ATI_wrp(op,dst,dstMod,arg1,arg1Rep,arg1Mod,arg2,arg2Rep,arg2Mod,arg3,arg3Rep,arg3Mod);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glAlphaFragmentOp3ATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glAlphaFragmentOp3ATI_Idx) ++;

        GL_ENTRY_LAST_TS(glAlphaFragmentOp3ATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glAlphaFragmentOp3ATI_Idx),
				 GL_ENTRY_LAST_TS(glAlphaFragmentOp3ATI_Idx));
        if(last_diff > 1000000000){
            printf("glAlphaFragmentOp3ATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glAlphaFragmentOp3ATI_Idx),
	             GL_ENTRY_CALL_TIME(glAlphaFragmentOp3ATI_Idx),
	             GL_ENTRY_CALL_TIME(glAlphaFragmentOp3ATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glAlphaFragmentOp3ATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glAlphaFragmentOp3ATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glAlphaFragmentOp3ATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glAlphaFragmentOp3ATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glAlphaFragmentOp3ATI_Idx) = get_ts();
        }


	

}