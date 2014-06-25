#include <glTraceCommon.h>
#include <generated.h>

#define glCullFace_wrp						\
    ((void  (*)(GLenum mode                                        \
    ))GL_ENTRY_PTR(glCullFace_Idx))


GLAPI void  APIENTRY glCullFace(GLenum mode)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCullFace_Idx))
	{
            GL_ENTRY_PTR(glCullFace_Idx) = dlsym(RTLD_NEXT,"glCullFace");
            if(!GL_ENTRY_PTR(glCullFace_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCullFace_Idx))
    	{
            GL_ENTRY_PREV_TS(glCullFace_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCullFace_wrp(mode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCullFace_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCullFace_Idx) ++;

        GL_ENTRY_LAST_TS(glCullFace_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCullFace_Idx),
				 GL_ENTRY_LAST_TS(glCullFace_Idx));
        if(last_diff > 1000000000){
            printf("glCullFace %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCullFace_Idx),
	             GL_ENTRY_CALL_TIME(glCullFace_Idx),
	             GL_ENTRY_CALL_TIME(glCullFace_Idx) /
	             GL_ENTRY_CALL_COUNT(glCullFace_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCullFace_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCullFace_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCullFace_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCullFace_Idx) = get_ts();
        }


	

}