#include <glTraceCommon.h>
#include <generated.h>

#define glGetCombinerInputParameterfvNV_wrp						\
    ((void  (*)(GLenum stage,GLenum portion,GLenum variable,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetCombinerInputParameterfvNV_Idx))


GLAPI void  APIENTRY glGetCombinerInputParameterfvNV(GLenum stage,GLenum portion,GLenum variable,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetCombinerInputParameterfvNV_Idx))
	{
            GL_ENTRY_PTR(glGetCombinerInputParameterfvNV_Idx) = dlsym(RTLD_NEXT,"glGetCombinerInputParameterfvNV");
            if(!GL_ENTRY_PTR(glGetCombinerInputParameterfvNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetCombinerInputParameterfvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetCombinerInputParameterfvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetCombinerInputParameterfvNV_wrp(stage,portion,variable,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetCombinerInputParameterfvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetCombinerInputParameterfvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetCombinerInputParameterfvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetCombinerInputParameterfvNV_Idx),
				 GL_ENTRY_LAST_TS(glGetCombinerInputParameterfvNV_Idx));
        if(last_diff > 1000000000){
            printf("glGetCombinerInputParameterfvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetCombinerInputParameterfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetCombinerInputParameterfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetCombinerInputParameterfvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetCombinerInputParameterfvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetCombinerInputParameterfvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetCombinerInputParameterfvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetCombinerInputParameterfvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetCombinerInputParameterfvNV_Idx) = get_ts();
        }


	

}