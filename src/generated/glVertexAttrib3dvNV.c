#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib3dvNV_wrp						\
    ((void  (*)(GLuint index,const GLdouble *v                                        \
    ))GL_ENTRY_PTR(glVertexAttrib3dvNV_Idx))


GLAPI void  APIENTRY glVertexAttrib3dvNV(GLuint index,const GLdouble *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttrib3dvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib3dvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib3dvNV_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib3dvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib3dvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib3dvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib3dvNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib3dvNV_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttrib3dvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib3dvNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib3dvNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib3dvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib3dvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib3dvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib3dvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib3dvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib3dvNV_Idx) = get_ts();
        }


	

}