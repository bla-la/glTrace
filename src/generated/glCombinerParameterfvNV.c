#include <glTraceCommon.h>
#include <generated.h>

#define glCombinerParameterfvNV_wrp						\
    ((void  (*)(GLenum pname,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glCombinerParameterfvNV_Idx))


GLAPI void  APIENTRY glCombinerParameterfvNV(GLenum pname,const GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCombinerParameterfvNV_Idx))
	{
            GL_ENTRY_PTR(glCombinerParameterfvNV_Idx) = dlsym(RTLD_NEXT,"glCombinerParameterfvNV");
            if(!GL_ENTRY_PTR(glCombinerParameterfvNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCombinerParameterfvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glCombinerParameterfvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCombinerParameterfvNV_wrp(pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCombinerParameterfvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCombinerParameterfvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glCombinerParameterfvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCombinerParameterfvNV_Idx),
				 GL_ENTRY_LAST_TS(glCombinerParameterfvNV_Idx));
        if(last_diff > 1000000000){
            printf("glCombinerParameterfvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCombinerParameterfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glCombinerParameterfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glCombinerParameterfvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glCombinerParameterfvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCombinerParameterfvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCombinerParameterfvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCombinerParameterfvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCombinerParameterfvNV_Idx) = get_ts();
        }


	

}