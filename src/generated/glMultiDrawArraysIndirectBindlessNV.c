#include <glTraceCommon.h>
#include <generated.h>

#define glMultiDrawArraysIndirectBindlessNV_wrp						\
    ((void  (*)(GLenum mode,const void *indirect,GLsizei drawCount,GLsizei stride,GLint vertexBufferCount                                        \
    ))GL_ENTRY_PTR(glMultiDrawArraysIndirectBindlessNV_Idx))


GLAPI void  APIENTRY glMultiDrawArraysIndirectBindlessNV(GLenum mode,const void *indirect,GLsizei drawCount,GLsizei stride,GLint vertexBufferCount)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiDrawArraysIndirectBindlessNV_Idx))
	{
            GL_ENTRY_PTR(glMultiDrawArraysIndirectBindlessNV_Idx) = dlsym(RTLD_NEXT,"glMultiDrawArraysIndirectBindlessNV");
            if(!GL_ENTRY_PTR(glMultiDrawArraysIndirectBindlessNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiDrawArraysIndirectBindlessNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiDrawArraysIndirectBindlessNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiDrawArraysIndirectBindlessNV_wrp(mode,indirect,drawCount,stride,vertexBufferCount);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiDrawArraysIndirectBindlessNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiDrawArraysIndirectBindlessNV_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiDrawArraysIndirectBindlessNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiDrawArraysIndirectBindlessNV_Idx),
				 GL_ENTRY_LAST_TS(glMultiDrawArraysIndirectBindlessNV_Idx));
        if(last_diff > 1000000000){
            printf("glMultiDrawArraysIndirectBindlessNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiDrawArraysIndirectBindlessNV_Idx),
	             GL_ENTRY_CALL_TIME(glMultiDrawArraysIndirectBindlessNV_Idx),
	             GL_ENTRY_CALL_TIME(glMultiDrawArraysIndirectBindlessNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiDrawArraysIndirectBindlessNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiDrawArraysIndirectBindlessNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiDrawArraysIndirectBindlessNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiDrawArraysIndirectBindlessNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiDrawArraysIndirectBindlessNV_Idx) = get_ts();
        }


	

}