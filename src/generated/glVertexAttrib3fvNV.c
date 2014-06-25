#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib3fvNV_wrp						\
    ((void  (*)(GLuint index,const GLfloat *v                                        \
    ))GL_ENTRY_PTR(glVertexAttrib3fvNV_Idx))


GLAPI void  APIENTRY glVertexAttrib3fvNV(GLuint index,const GLfloat *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttrib3fvNV_Idx))
	{
            GL_ENTRY_PTR(glVertexAttrib3fvNV_Idx) = dlsym(RTLD_NEXT,"glVertexAttrib3fvNV");
            if(!GL_ENTRY_PTR(glVertexAttrib3fvNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttrib3fvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib3fvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib3fvNV_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib3fvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib3fvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib3fvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib3fvNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib3fvNV_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttrib3fvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib3fvNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib3fvNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib3fvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib3fvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib3fvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib3fvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib3fvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib3fvNV_Idx) = get_ts();
        }


	

}