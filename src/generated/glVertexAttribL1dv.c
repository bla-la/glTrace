#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribL1dv_wrp						\
    ((void  (*)(GLuint index,const GLdouble *v                                        \
    ))GL_ENTRY_PTR(glVertexAttribL1dv_Idx))


GLAPI void  APIENTRY glVertexAttribL1dv(GLuint index,const GLdouble *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribL1dv_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribL1dv_Idx) = dlsym(RTLD_NEXT,"glVertexAttribL1dv");
            if(!GL_ENTRY_PTR(glVertexAttribL1dv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribL1dv_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribL1dv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribL1dv_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribL1dv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribL1dv_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribL1dv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribL1dv_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribL1dv_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribL1dv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribL1dv_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribL1dv_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribL1dv_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribL1dv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribL1dv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribL1dv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribL1dv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribL1dv_Idx) = get_ts();
        }


	

}