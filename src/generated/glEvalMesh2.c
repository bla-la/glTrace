#include <glTraceCommon.h>
#include <generated.h>

#define glEvalMesh2_wrp						\
    ((void  (*)(GLenum mode,GLint i1,GLint i2,GLint j1,GLint j2                                        \
    ))GL_ENTRY_PTR(glEvalMesh2_Idx))


GLAPI void  APIENTRY glEvalMesh2(GLenum mode,GLint i1,GLint i2,GLint j1,GLint j2)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glEvalMesh2_Idx))
	{
            GL_ENTRY_PTR(glEvalMesh2_Idx) = dlsym(RTLD_NEXT,"glEvalMesh2");
            if(!GL_ENTRY_PTR(glEvalMesh2_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glEvalMesh2_Idx))
    	{
            GL_ENTRY_PREV_TS(glEvalMesh2_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEvalMesh2_wrp(mode,i1,i2,j1,j2);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEvalMesh2_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEvalMesh2_Idx) ++;

        GL_ENTRY_LAST_TS(glEvalMesh2_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEvalMesh2_Idx),
				 GL_ENTRY_LAST_TS(glEvalMesh2_Idx));
        if(last_diff > 1000000000){
            printf("glEvalMesh2 %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEvalMesh2_Idx),
	             GL_ENTRY_CALL_TIME(glEvalMesh2_Idx),
	             GL_ENTRY_CALL_TIME(glEvalMesh2_Idx) /
	             GL_ENTRY_CALL_COUNT(glEvalMesh2_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEvalMesh2_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEvalMesh2_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEvalMesh2_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEvalMesh2_Idx) = get_ts();
        }


	

}