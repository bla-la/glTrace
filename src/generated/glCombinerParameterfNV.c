#include <glTraceCommon.h>
#include <generated.h>

#define glCombinerParameterfNV_wrp						\
    ((void  (*)(GLenum pname,GLfloat param                                        \
    ))GL_ENTRY_PTR(glCombinerParameterfNV_Idx))


GLAPI void  APIENTRY glCombinerParameterfNV(GLenum pname,GLfloat param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCombinerParameterfNV_Idx))
	{
            GL_ENTRY_PTR(glCombinerParameterfNV_Idx) = dlsym(RTLD_NEXT,"glCombinerParameterfNV");
            if(!GL_ENTRY_PTR(glCombinerParameterfNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCombinerParameterfNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glCombinerParameterfNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCombinerParameterfNV_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCombinerParameterfNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCombinerParameterfNV_Idx) ++;

        GL_ENTRY_LAST_TS(glCombinerParameterfNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCombinerParameterfNV_Idx),
				 GL_ENTRY_LAST_TS(glCombinerParameterfNV_Idx));
        if(last_diff > 1000000000){
            printf("glCombinerParameterfNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCombinerParameterfNV_Idx),
	             GL_ENTRY_CALL_TIME(glCombinerParameterfNV_Idx),
	             GL_ENTRY_CALL_TIME(glCombinerParameterfNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glCombinerParameterfNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCombinerParameterfNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCombinerParameterfNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCombinerParameterfNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCombinerParameterfNV_Idx) = get_ts();
        }


	

}