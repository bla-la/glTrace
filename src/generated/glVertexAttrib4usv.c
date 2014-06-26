#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib4usv_wrp						\
    ((void  (*)(GLuint index,const GLushort *v                                        \
    ))GL_ENTRY_PTR(glVertexAttrib4usv_Idx))


GLAPI void  APIENTRY glVertexAttrib4usv(GLuint index,const GLushort *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttrib4usv_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib4usv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib4usv_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib4usv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib4usv_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib4usv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib4usv_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib4usv_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttrib4usv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4usv_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4usv_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4usv_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4usv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib4usv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib4usv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib4usv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib4usv_Idx) = get_ts();
        }


	

}