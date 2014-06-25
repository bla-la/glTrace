#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribI2uiv_wrp						\
    ((void  (*)(GLuint index,const GLuint *v                                        \
    ))GL_ENTRY_PTR(glVertexAttribI2uiv_Idx))


GLAPI void  APIENTRY glVertexAttribI2uiv(GLuint index,const GLuint *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribI2uiv_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribI2uiv_Idx) = dlsym(RTLD_NEXT,"glVertexAttribI2uiv");
            if(!GL_ENTRY_PTR(glVertexAttribI2uiv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribI2uiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribI2uiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribI2uiv_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribI2uiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribI2uiv_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribI2uiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribI2uiv_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribI2uiv_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribI2uiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribI2uiv_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI2uiv_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI2uiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribI2uiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribI2uiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribI2uiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribI2uiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribI2uiv_Idx) = get_ts();
        }


	

}