#include <glTraceCommon.h>
#include <generated.h>

#define glEvalMesh1_wrp						\
    ((void  (*)(GLenum mode,GLint i1,GLint i2                                        \
    ))GL_ENTRY_PTR(glEvalMesh1_Idx))


GLAPI void  APIENTRY glEvalMesh1(GLenum mode,GLint i1,GLint i2)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glEvalMesh1_Idx))
	{
            GL_ENTRY_PTR(glEvalMesh1_Idx) = dlsym(RTLD_NEXT,"glEvalMesh1");
            if(!GL_ENTRY_PTR(glEvalMesh1_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glEvalMesh1_Idx))
    	{
            GL_ENTRY_PREV_TS(glEvalMesh1_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEvalMesh1_wrp(mode,i1,i2);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEvalMesh1_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEvalMesh1_Idx) ++;

        GL_ENTRY_LAST_TS(glEvalMesh1_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEvalMesh1_Idx),
				 GL_ENTRY_LAST_TS(glEvalMesh1_Idx));
        if(last_diff > 1000000000){
            printf("glEvalMesh1 %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEvalMesh1_Idx),
	             GL_ENTRY_CALL_TIME(glEvalMesh1_Idx),
	             GL_ENTRY_CALL_TIME(glEvalMesh1_Idx) /
	             GL_ENTRY_CALL_COUNT(glEvalMesh1_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEvalMesh1_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEvalMesh1_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEvalMesh1_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEvalMesh1_Idx) = get_ts();
        }


	

}