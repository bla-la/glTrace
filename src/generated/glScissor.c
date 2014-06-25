#include <glTraceCommon.h>
#include <generated.h>

#define glScissor_wrp						\
    ((void  (*)(GLint x,GLint y,GLsizei width,GLsizei height                                        \
    ))GL_ENTRY_PTR(glScissor_Idx))


GLAPI void  APIENTRY glScissor(GLint x,GLint y,GLsizei width,GLsizei height)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glScissor_Idx))
	{
            GL_ENTRY_PTR(glScissor_Idx) = dlsym(RTLD_NEXT,"glScissor");
            if(!GL_ENTRY_PTR(glScissor_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glScissor_Idx))
    	{
            GL_ENTRY_PREV_TS(glScissor_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glScissor_wrp(x,y,width,height);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glScissor_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glScissor_Idx) ++;

        GL_ENTRY_LAST_TS(glScissor_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glScissor_Idx),
				 GL_ENTRY_LAST_TS(glScissor_Idx));
        if(last_diff > 1000000000){
            printf("glScissor %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glScissor_Idx),
	             GL_ENTRY_CALL_TIME(glScissor_Idx),
	             GL_ENTRY_CALL_TIME(glScissor_Idx) /
	             GL_ENTRY_CALL_COUNT(glScissor_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glScissor_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glScissor_Idx) = 0;
             GL_ENTRY_CALL_TIME(glScissor_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glScissor_Idx) = get_ts();
        }


	

}