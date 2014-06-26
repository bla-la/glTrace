#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribs4ubvNV_wrp						\
    ((void  (*)(GLuint index,GLsizei count,const GLubyte *v                                        \
    ))GL_ENTRY_PTR(glVertexAttribs4ubvNV_Idx))


GLAPI void  APIENTRY glVertexAttribs4ubvNV(GLuint index,GLsizei count,const GLubyte *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttribs4ubvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribs4ubvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribs4ubvNV_wrp(index,count,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribs4ubvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribs4ubvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribs4ubvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribs4ubvNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribs4ubvNV_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttribs4ubvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribs4ubvNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribs4ubvNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribs4ubvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribs4ubvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribs4ubvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribs4ubvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribs4ubvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribs4ubvNV_Idx) = get_ts();
        }


	

}