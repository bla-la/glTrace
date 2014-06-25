#include <glTraceCommon.h>
#include <generated.h>

#define glScissorIndexed_wrp						\
    ((void  (*)(GLuint index,GLint left,GLint bottom,GLsizei width,GLsizei height                                        \
    ))GL_ENTRY_PTR(glScissorIndexed_Idx))


GLAPI void  APIENTRY glScissorIndexed(GLuint index,GLint left,GLint bottom,GLsizei width,GLsizei height)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glScissorIndexed_Idx))
	{
            GL_ENTRY_PTR(glScissorIndexed_Idx) = dlsym(RTLD_NEXT,"glScissorIndexed");
            if(!GL_ENTRY_PTR(glScissorIndexed_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glScissorIndexed_Idx))
    	{
            GL_ENTRY_PREV_TS(glScissorIndexed_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glScissorIndexed_wrp(index,left,bottom,width,height);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glScissorIndexed_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glScissorIndexed_Idx) ++;

        GL_ENTRY_LAST_TS(glScissorIndexed_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glScissorIndexed_Idx),
				 GL_ENTRY_LAST_TS(glScissorIndexed_Idx));
        if(last_diff > 1000000000){
            printf("glScissorIndexed %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glScissorIndexed_Idx),
	             GL_ENTRY_CALL_TIME(glScissorIndexed_Idx),
	             GL_ENTRY_CALL_TIME(glScissorIndexed_Idx) /
	             GL_ENTRY_CALL_COUNT(glScissorIndexed_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glScissorIndexed_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glScissorIndexed_Idx) = 0;
             GL_ENTRY_CALL_TIME(glScissorIndexed_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glScissorIndexed_Idx) = get_ts();
        }


	

}