#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib1fvNV_wrp						\
    ((void  (*)(GLuint index,const GLfloat *v                                        \
    ))GL_ENTRY_PTR(glVertexAttrib1fvNV_Idx))


GLAPI void  APIENTRY glVertexAttrib1fvNV(GLuint index,const GLfloat *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttrib1fvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib1fvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib1fvNV_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib1fvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib1fvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib1fvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib1fvNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib1fvNV_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttrib1fvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib1fvNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib1fvNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib1fvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib1fvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib1fvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib1fvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib1fvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib1fvNV_Idx) = get_ts();
        }


	

}