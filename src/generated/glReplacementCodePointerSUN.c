#include <glTraceCommon.h>
#include <generated.h>

#define glReplacementCodePointerSUN_wrp						\
    ((void  (*)(GLenum type,GLsizei stride,const void **pointer                                        \
    ))GL_ENTRY_PTR(glReplacementCodePointerSUN_Idx))


GLAPI void  APIENTRY glReplacementCodePointerSUN(GLenum type,GLsizei stride,const void **pointer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glReplacementCodePointerSUN_Idx))
	{
            GL_ENTRY_PTR(glReplacementCodePointerSUN_Idx) = dlsym(RTLD_NEXT,"glReplacementCodePointerSUN");
            if(!GL_ENTRY_PTR(glReplacementCodePointerSUN_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glReplacementCodePointerSUN_Idx))
    	{
            GL_ENTRY_PREV_TS(glReplacementCodePointerSUN_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glReplacementCodePointerSUN_wrp(type,stride,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glReplacementCodePointerSUN_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glReplacementCodePointerSUN_Idx) ++;

        GL_ENTRY_LAST_TS(glReplacementCodePointerSUN_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glReplacementCodePointerSUN_Idx),
				 GL_ENTRY_LAST_TS(glReplacementCodePointerSUN_Idx));
        if(last_diff > 1000000000){
            printf("glReplacementCodePointerSUN %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glReplacementCodePointerSUN_Idx),
	             GL_ENTRY_CALL_TIME(glReplacementCodePointerSUN_Idx),
	             GL_ENTRY_CALL_TIME(glReplacementCodePointerSUN_Idx) /
	             GL_ENTRY_CALL_COUNT(glReplacementCodePointerSUN_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glReplacementCodePointerSUN_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glReplacementCodePointerSUN_Idx) = 0;
             GL_ENTRY_CALL_TIME(glReplacementCodePointerSUN_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glReplacementCodePointerSUN_Idx) = get_ts();
        }


	

}