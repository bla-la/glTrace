#include <glTraceCommon.h>
#include <generated.h>

#define glEnableVertexAttribAPPLE_wrp						\
    ((void  (*)(GLuint index,GLenum pname                                        \
    ))GL_ENTRY_PTR(glEnableVertexAttribAPPLE_Idx))


GLAPI void  APIENTRY glEnableVertexAttribAPPLE(GLuint index,GLenum pname)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glEnableVertexAttribAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glEnableVertexAttribAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEnableVertexAttribAPPLE_wrp(index,pname);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEnableVertexAttribAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEnableVertexAttribAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glEnableVertexAttribAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEnableVertexAttribAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glEnableVertexAttribAPPLE_Idx));


        if(last_diff > 1000000000){
            printf("glEnableVertexAttribAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEnableVertexAttribAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glEnableVertexAttribAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glEnableVertexAttribAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glEnableVertexAttribAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEnableVertexAttribAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEnableVertexAttribAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEnableVertexAttribAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEnableVertexAttribAPPLE_Idx) = get_ts();
        }


	

}