#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribI4ubvEXT_wrp						\
    ((void  (*)(GLuint index,const GLubyte *v                                        \
    ))GL_ENTRY_PTR(glVertexAttribI4ubvEXT_Idx))


GLAPI void  APIENTRY glVertexAttribI4ubvEXT(GLuint index,const GLubyte *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttribI4ubvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribI4ubvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribI4ubvEXT_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribI4ubvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribI4ubvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribI4ubvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribI4ubvEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribI4ubvEXT_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttribI4ubvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribI4ubvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI4ubvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI4ubvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribI4ubvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribI4ubvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribI4ubvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribI4ubvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribI4ubvEXT_Idx) = get_ts();
        }


	

}