#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribI4usv_wrp						\
    ((void  (*)(GLuint index,const GLushort *v                                        \
    ))GL_ENTRY_PTR(glVertexAttribI4usv_Idx))


GLAPI void  APIENTRY glVertexAttribI4usv(GLuint index,const GLushort *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttribI4usv_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribI4usv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribI4usv_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribI4usv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribI4usv_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribI4usv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribI4usv_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribI4usv_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttribI4usv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribI4usv_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI4usv_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI4usv_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribI4usv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribI4usv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribI4usv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribI4usv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribI4usv_Idx) = get_ts();
        }


	

}