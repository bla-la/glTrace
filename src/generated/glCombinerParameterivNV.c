#include <glTraceCommon.h>
#include <generated.h>

#define glCombinerParameterivNV_wrp						\
    ((void  (*)(GLenum pname,const GLint *params                                        \
    ))GL_ENTRY_PTR(glCombinerParameterivNV_Idx))


GLAPI void  APIENTRY glCombinerParameterivNV(GLenum pname,const GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCombinerParameterivNV_Idx))
	{
            GL_ENTRY_PTR(glCombinerParameterivNV_Idx) = dlsym(RTLD_NEXT,"glCombinerParameterivNV");
            if(!GL_ENTRY_PTR(glCombinerParameterivNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCombinerParameterivNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glCombinerParameterivNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCombinerParameterivNV_wrp(pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCombinerParameterivNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCombinerParameterivNV_Idx) ++;

        GL_ENTRY_LAST_TS(glCombinerParameterivNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCombinerParameterivNV_Idx),
				 GL_ENTRY_LAST_TS(glCombinerParameterivNV_Idx));
        if(last_diff > 1000000000){
            printf("glCombinerParameterivNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCombinerParameterivNV_Idx),
	             GL_ENTRY_CALL_TIME(glCombinerParameterivNV_Idx),
	             GL_ENTRY_CALL_TIME(glCombinerParameterivNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glCombinerParameterivNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCombinerParameterivNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCombinerParameterivNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCombinerParameterivNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCombinerParameterivNV_Idx) = get_ts();
        }


	

}