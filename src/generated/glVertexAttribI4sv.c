#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribI4sv_wrp						\
    ((void  (*)(GLuint index,const GLshort *v                                        \
    ))GL_ENTRY_PTR(glVertexAttribI4sv_Idx))


GLAPI void  APIENTRY glVertexAttribI4sv(GLuint index,const GLshort *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribI4sv_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribI4sv_Idx) = dlsym(RTLD_NEXT,"glVertexAttribI4sv");
            if(!GL_ENTRY_PTR(glVertexAttribI4sv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribI4sv_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribI4sv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribI4sv_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribI4sv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribI4sv_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribI4sv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribI4sv_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribI4sv_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribI4sv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribI4sv_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI4sv_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI4sv_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribI4sv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribI4sv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribI4sv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribI4sv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribI4sv_Idx) = get_ts();
        }


	

}