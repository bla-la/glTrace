#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribI4usvEXT_wrp						\
    ((void  (*)(GLuint index,const GLushort *v                                        \
    ))GL_ENTRY_PTR(glVertexAttribI4usvEXT_Idx))


GLAPI void  APIENTRY glVertexAttribI4usvEXT(GLuint index,const GLushort *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribI4usvEXT_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribI4usvEXT_Idx) = dlsym(RTLD_NEXT,"glVertexAttribI4usvEXT");
            if(!GL_ENTRY_PTR(glVertexAttribI4usvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribI4usvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribI4usvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribI4usvEXT_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribI4usvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribI4usvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribI4usvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribI4usvEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribI4usvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribI4usvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribI4usvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI4usvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI4usvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribI4usvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribI4usvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribI4usvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribI4usvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribI4usvEXT_Idx) = get_ts();
        }


	

}