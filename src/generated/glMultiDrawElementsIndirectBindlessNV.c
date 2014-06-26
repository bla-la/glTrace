#include <glTraceCommon.h>
#include <generated.h>

#define glMultiDrawElementsIndirectBindlessNV_wrp						\
    ((void  (*)(GLenum mode,GLenum type,const void *indirect,GLsizei drawCount,GLsizei stride,GLint vertexBufferCount                                        \
    ))GL_ENTRY_PTR(glMultiDrawElementsIndirectBindlessNV_Idx))


GLAPI void  APIENTRY glMultiDrawElementsIndirectBindlessNV(GLenum mode,GLenum type,const void *indirect,GLsizei drawCount,GLsizei stride,GLint vertexBufferCount)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiDrawElementsIndirectBindlessNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiDrawElementsIndirectBindlessNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiDrawElementsIndirectBindlessNV_wrp(mode,type,indirect,drawCount,stride,vertexBufferCount);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiDrawElementsIndirectBindlessNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiDrawElementsIndirectBindlessNV_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiDrawElementsIndirectBindlessNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiDrawElementsIndirectBindlessNV_Idx),
				 GL_ENTRY_LAST_TS(glMultiDrawElementsIndirectBindlessNV_Idx));


        if(last_diff > 1000000000){
            printf("glMultiDrawElementsIndirectBindlessNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiDrawElementsIndirectBindlessNV_Idx),
	             GL_ENTRY_CALL_TIME(glMultiDrawElementsIndirectBindlessNV_Idx),
	             GL_ENTRY_CALL_TIME(glMultiDrawElementsIndirectBindlessNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiDrawElementsIndirectBindlessNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiDrawElementsIndirectBindlessNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiDrawElementsIndirectBindlessNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiDrawElementsIndirectBindlessNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiDrawElementsIndirectBindlessNV_Idx) = get_ts();
        }


	

}