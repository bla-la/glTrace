#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribs1fvNV_wrp						\
    ((void  (*)(GLuint index,GLsizei count,const GLfloat *v                                        \
    ))GL_ENTRY_PTR(glVertexAttribs1fvNV_Idx))


GLAPI void  APIENTRY glVertexAttribs1fvNV(GLuint index,GLsizei count,const GLfloat *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttribs1fvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribs1fvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribs1fvNV_wrp(index,count,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribs1fvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribs1fvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribs1fvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribs1fvNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribs1fvNV_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttribs1fvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribs1fvNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribs1fvNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribs1fvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribs1fvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribs1fvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribs1fvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribs1fvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribs1fvNV_Idx) = get_ts();
        }


	

}