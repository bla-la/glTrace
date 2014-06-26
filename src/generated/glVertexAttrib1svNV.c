#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib1svNV_wrp						\
    ((void  (*)(GLuint index,const GLshort *v                                        \
    ))GL_ENTRY_PTR(glVertexAttrib1svNV_Idx))


GLAPI void  APIENTRY glVertexAttrib1svNV(GLuint index,const GLshort *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttrib1svNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib1svNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib1svNV_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib1svNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib1svNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib1svNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib1svNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib1svNV_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttrib1svNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib1svNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib1svNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib1svNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib1svNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib1svNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib1svNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib1svNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib1svNV_Idx) = get_ts();
        }


	

}