#include <glTraceCommon.h>
#include <generated.h>

#define glGetCombinerOutputParameterivNV_wrp						\
    ((void  (*)(GLenum stage,GLenum portion,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetCombinerOutputParameterivNV_Idx))


GLAPI void  APIENTRY glGetCombinerOutputParameterivNV(GLenum stage,GLenum portion,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetCombinerOutputParameterivNV_Idx))
	{
            GL_ENTRY_PTR(glGetCombinerOutputParameterivNV_Idx) = dlsym(RTLD_NEXT,"glGetCombinerOutputParameterivNV");
            if(!GL_ENTRY_PTR(glGetCombinerOutputParameterivNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetCombinerOutputParameterivNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetCombinerOutputParameterivNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetCombinerOutputParameterivNV_wrp(stage,portion,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetCombinerOutputParameterivNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetCombinerOutputParameterivNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetCombinerOutputParameterivNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetCombinerOutputParameterivNV_Idx),
				 GL_ENTRY_LAST_TS(glGetCombinerOutputParameterivNV_Idx));
        if(last_diff > 1000000000){
            printf("glGetCombinerOutputParameterivNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetCombinerOutputParameterivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetCombinerOutputParameterivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetCombinerOutputParameterivNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetCombinerOutputParameterivNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetCombinerOutputParameterivNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetCombinerOutputParameterivNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetCombinerOutputParameterivNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetCombinerOutputParameterivNV_Idx) = get_ts();
        }


	

}