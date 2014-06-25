#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribL1dvEXT_wrp						\
    ((void  (*)(GLuint index,const GLdouble *v                                        \
    ))GL_ENTRY_PTR(glVertexAttribL1dvEXT_Idx))


GLAPI void  APIENTRY glVertexAttribL1dvEXT(GLuint index,const GLdouble *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribL1dvEXT_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribL1dvEXT_Idx) = dlsym(RTLD_NEXT,"glVertexAttribL1dvEXT");
            if(!GL_ENTRY_PTR(glVertexAttribL1dvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribL1dvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribL1dvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribL1dvEXT_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribL1dvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribL1dvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribL1dvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribL1dvEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribL1dvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribL1dvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribL1dvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribL1dvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribL1dvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribL1dvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribL1dvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribL1dvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribL1dvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribL1dvEXT_Idx) = get_ts();
        }


	

}