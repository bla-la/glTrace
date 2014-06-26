#include <glTraceCommon.h>
#include <generated.h>

#define glGetCombinerOutputParameterfvNV_wrp						\
    ((void  (*)(GLenum stage,GLenum portion,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetCombinerOutputParameterfvNV_Idx))


GLAPI void  APIENTRY glGetCombinerOutputParameterfvNV(GLenum stage,GLenum portion,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetCombinerOutputParameterfvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetCombinerOutputParameterfvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetCombinerOutputParameterfvNV_wrp(stage,portion,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetCombinerOutputParameterfvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetCombinerOutputParameterfvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetCombinerOutputParameterfvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetCombinerOutputParameterfvNV_Idx),
				 GL_ENTRY_LAST_TS(glGetCombinerOutputParameterfvNV_Idx));


        if(last_diff > 1000000000){
            printf("glGetCombinerOutputParameterfvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetCombinerOutputParameterfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetCombinerOutputParameterfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetCombinerOutputParameterfvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetCombinerOutputParameterfvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetCombinerOutputParameterfvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetCombinerOutputParameterfvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetCombinerOutputParameterfvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetCombinerOutputParameterfvNV_Idx) = get_ts();
        }


	

}