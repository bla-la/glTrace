#include <glTraceCommon.h>
#include <generated.h>

#define glDisableVertexAttribArray_wrp						\
    ((void  (*)(GLuint index                                        \
    ))GL_ENTRY_PTR(glDisableVertexAttribArray_Idx))


GLAPI void  APIENTRY glDisableVertexAttribArray(GLuint index)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDisableVertexAttribArray_Idx))
	{
            GL_ENTRY_PTR(glDisableVertexAttribArray_Idx) = dlsym(RTLD_NEXT,"glDisableVertexAttribArray");
            if(!GL_ENTRY_PTR(glDisableVertexAttribArray_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDisableVertexAttribArray_Idx))
    	{
            GL_ENTRY_PREV_TS(glDisableVertexAttribArray_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDisableVertexAttribArray_wrp(index);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDisableVertexAttribArray_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDisableVertexAttribArray_Idx) ++;

        GL_ENTRY_LAST_TS(glDisableVertexAttribArray_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDisableVertexAttribArray_Idx),
				 GL_ENTRY_LAST_TS(glDisableVertexAttribArray_Idx));
        if(last_diff > 1000000000){
            printf("glDisableVertexAttribArray %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDisableVertexAttribArray_Idx),
	             GL_ENTRY_CALL_TIME(glDisableVertexAttribArray_Idx),
	             GL_ENTRY_CALL_TIME(glDisableVertexAttribArray_Idx) /
	             GL_ENTRY_CALL_COUNT(glDisableVertexAttribArray_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDisableVertexAttribArray_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDisableVertexAttribArray_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDisableVertexAttribArray_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDisableVertexAttribArray_Idx) = get_ts();
        }


	

}