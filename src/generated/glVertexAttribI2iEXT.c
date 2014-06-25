#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribI2iEXT_wrp						\
    ((void  (*)(GLuint index,GLint x,GLint y                                        \
    ))GL_ENTRY_PTR(glVertexAttribI2iEXT_Idx))


GLAPI void  APIENTRY glVertexAttribI2iEXT(GLuint index,GLint x,GLint y)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribI2iEXT_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribI2iEXT_Idx) = dlsym(RTLD_NEXT,"glVertexAttribI2iEXT");
            if(!GL_ENTRY_PTR(glVertexAttribI2iEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribI2iEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribI2iEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribI2iEXT_wrp(index,x,y);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribI2iEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribI2iEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribI2iEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribI2iEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribI2iEXT_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribI2iEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribI2iEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI2iEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI2iEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribI2iEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribI2iEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribI2iEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribI2iEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribI2iEXT_Idx) = get_ts();
        }


	

}