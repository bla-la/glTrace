#include <glTraceCommon.h>
#include <generated.h>

#define glCoverFillPathNV_wrp						\
    ((void  (*)(GLuint path,GLenum coverMode                                        \
    ))GL_ENTRY_PTR(glCoverFillPathNV_Idx))


GLAPI void  APIENTRY glCoverFillPathNV(GLuint path,GLenum coverMode)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCoverFillPathNV_Idx))
	{
            GL_ENTRY_PTR(glCoverFillPathNV_Idx) = dlsym(RTLD_NEXT,"glCoverFillPathNV");
            if(!GL_ENTRY_PTR(glCoverFillPathNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCoverFillPathNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glCoverFillPathNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCoverFillPathNV_wrp(path,coverMode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCoverFillPathNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCoverFillPathNV_Idx) ++;

        GL_ENTRY_LAST_TS(glCoverFillPathNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCoverFillPathNV_Idx),
				 GL_ENTRY_LAST_TS(glCoverFillPathNV_Idx));
        if(last_diff > 1000000000){
            printf("glCoverFillPathNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCoverFillPathNV_Idx),
	             GL_ENTRY_CALL_TIME(glCoverFillPathNV_Idx),
	             GL_ENTRY_CALL_TIME(glCoverFillPathNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glCoverFillPathNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCoverFillPathNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCoverFillPathNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCoverFillPathNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCoverFillPathNV_Idx) = get_ts();
        }


	

}