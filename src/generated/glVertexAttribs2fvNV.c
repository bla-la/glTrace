#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribs2fvNV_wrp						\
    ((void  (*)(GLuint index,GLsizei count,const GLfloat *v                                        \
    ))GL_ENTRY_PTR(glVertexAttribs2fvNV_Idx))


GLAPI void  APIENTRY glVertexAttribs2fvNV(GLuint index,GLsizei count,const GLfloat *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttribs2fvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribs2fvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribs2fvNV_wrp(index,count,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribs2fvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribs2fvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribs2fvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribs2fvNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribs2fvNV_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttribs2fvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribs2fvNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribs2fvNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribs2fvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribs2fvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribs2fvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribs2fvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribs2fvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribs2fvNV_Idx) = get_ts();
        }


	

}