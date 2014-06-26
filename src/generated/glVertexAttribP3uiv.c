#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribP3uiv_wrp						\
    ((void  (*)(GLuint index,GLenum type,GLboolean normalized,const GLuint *value                                        \
    ))GL_ENTRY_PTR(glVertexAttribP3uiv_Idx))


GLAPI void  APIENTRY glVertexAttribP3uiv(GLuint index,GLenum type,GLboolean normalized,const GLuint *value)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttribP3uiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribP3uiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribP3uiv_wrp(index,type,normalized,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribP3uiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribP3uiv_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribP3uiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribP3uiv_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribP3uiv_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttribP3uiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribP3uiv_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribP3uiv_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribP3uiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribP3uiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribP3uiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribP3uiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribP3uiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribP3uiv_Idx) = get_ts();
        }


	

}