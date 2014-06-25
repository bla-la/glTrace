#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribI4ubv_wrp						\
    ((void  (*)(GLuint index,const GLubyte *v                                        \
    ))GL_ENTRY_PTR(glVertexAttribI4ubv_Idx))


GLAPI void  APIENTRY glVertexAttribI4ubv(GLuint index,const GLubyte *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribI4ubv_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribI4ubv_Idx) = dlsym(RTLD_NEXT,"glVertexAttribI4ubv");
            if(!GL_ENTRY_PTR(glVertexAttribI4ubv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribI4ubv_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribI4ubv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribI4ubv_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribI4ubv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribI4ubv_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribI4ubv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribI4ubv_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribI4ubv_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribI4ubv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribI4ubv_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI4ubv_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI4ubv_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribI4ubv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribI4ubv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribI4ubv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribI4ubv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribI4ubv_Idx) = get_ts();
        }


	

}