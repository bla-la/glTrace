#include <glTraceCommon.h>
#include <generated.h>

#define glDisableVertexAttribAPPLE_wrp						\
    ((void  (*)(GLuint index,GLenum pname                                        \
    ))GL_ENTRY_PTR(glDisableVertexAttribAPPLE_Idx))


GLAPI void  APIENTRY glDisableVertexAttribAPPLE(GLuint index,GLenum pname)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDisableVertexAttribAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glDisableVertexAttribAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDisableVertexAttribAPPLE_wrp(index,pname);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDisableVertexAttribAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDisableVertexAttribAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glDisableVertexAttribAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDisableVertexAttribAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glDisableVertexAttribAPPLE_Idx));


        if(last_diff > 1000000000){
            printf("glDisableVertexAttribAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDisableVertexAttribAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glDisableVertexAttribAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glDisableVertexAttribAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glDisableVertexAttribAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDisableVertexAttribAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDisableVertexAttribAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDisableVertexAttribAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDisableVertexAttribAPPLE_Idx) = get_ts();
        }


	

}