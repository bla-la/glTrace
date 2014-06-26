#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib4Niv_wrp						\
    ((void  (*)(GLuint index,const GLint *v                                        \
    ))GL_ENTRY_PTR(glVertexAttrib4Niv_Idx))


GLAPI void  APIENTRY glVertexAttrib4Niv(GLuint index,const GLint *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttrib4Niv_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib4Niv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib4Niv_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib4Niv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib4Niv_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib4Niv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib4Niv_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib4Niv_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttrib4Niv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4Niv_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4Niv_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4Niv_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4Niv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib4Niv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib4Niv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib4Niv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib4Niv_Idx) = get_ts();
        }


	

}