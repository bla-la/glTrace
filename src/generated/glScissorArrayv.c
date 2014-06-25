#include <glTraceCommon.h>
#include <generated.h>

#define glScissorArrayv_wrp						\
    ((void  (*)(GLuint first,GLsizei count,const GLint *v                                        \
    ))GL_ENTRY_PTR(glScissorArrayv_Idx))


GLAPI void  APIENTRY glScissorArrayv(GLuint first,GLsizei count,const GLint *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glScissorArrayv_Idx))
	{
            GL_ENTRY_PTR(glScissorArrayv_Idx) = dlsym(RTLD_NEXT,"glScissorArrayv");
            if(!GL_ENTRY_PTR(glScissorArrayv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glScissorArrayv_Idx))
    	{
            GL_ENTRY_PREV_TS(glScissorArrayv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glScissorArrayv_wrp(first,count,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glScissorArrayv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glScissorArrayv_Idx) ++;

        GL_ENTRY_LAST_TS(glScissorArrayv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glScissorArrayv_Idx),
				 GL_ENTRY_LAST_TS(glScissorArrayv_Idx));
        if(last_diff > 1000000000){
            printf("glScissorArrayv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glScissorArrayv_Idx),
	             GL_ENTRY_CALL_TIME(glScissorArrayv_Idx),
	             GL_ENTRY_CALL_TIME(glScissorArrayv_Idx) /
	             GL_ENTRY_CALL_COUNT(glScissorArrayv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glScissorArrayv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glScissorArrayv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glScissorArrayv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glScissorArrayv_Idx) = get_ts();
        }


	

}