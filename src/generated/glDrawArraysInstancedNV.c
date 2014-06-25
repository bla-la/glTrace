#include <glTraceCommon.h>
#include <generated.h>

#define glDrawArraysInstancedNV_wrp						\
    ((void  (*)(GLenum mode,GLint first,GLsizei count,GLsizei primcount                                        \
    ))GL_ENTRY_PTR(glDrawArraysInstancedNV_Idx))


GLAPI void  APIENTRY glDrawArraysInstancedNV(GLenum mode,GLint first,GLsizei count,GLsizei primcount)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDrawArraysInstancedNV_Idx))
	{
            GL_ENTRY_PTR(glDrawArraysInstancedNV_Idx) = dlsym(RTLD_NEXT,"glDrawArraysInstancedNV");
            if(!GL_ENTRY_PTR(glDrawArraysInstancedNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDrawArraysInstancedNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawArraysInstancedNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawArraysInstancedNV_wrp(mode,first,count,primcount);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawArraysInstancedNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawArraysInstancedNV_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawArraysInstancedNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawArraysInstancedNV_Idx),
				 GL_ENTRY_LAST_TS(glDrawArraysInstancedNV_Idx));
        if(last_diff > 1000000000){
            printf("glDrawArraysInstancedNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawArraysInstancedNV_Idx),
	             GL_ENTRY_CALL_TIME(glDrawArraysInstancedNV_Idx),
	             GL_ENTRY_CALL_TIME(glDrawArraysInstancedNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawArraysInstancedNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawArraysInstancedNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawArraysInstancedNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawArraysInstancedNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawArraysInstancedNV_Idx) = get_ts();
        }


	

}