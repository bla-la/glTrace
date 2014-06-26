#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribParameteriAMD_wrp						\
    ((void  (*)(GLuint index,GLenum pname,GLint param                                        \
    ))GL_ENTRY_PTR(glVertexAttribParameteriAMD_Idx))


GLAPI void  APIENTRY glVertexAttribParameteriAMD(GLuint index,GLenum pname,GLint param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttribParameteriAMD_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribParameteriAMD_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribParameteriAMD_wrp(index,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribParameteriAMD_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribParameteriAMD_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribParameteriAMD_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribParameteriAMD_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribParameteriAMD_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttribParameteriAMD %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribParameteriAMD_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribParameteriAMD_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribParameteriAMD_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribParameteriAMD_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribParameteriAMD_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribParameteriAMD_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribParameteriAMD_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribParameteriAMD_Idx) = get_ts();
        }


	

}