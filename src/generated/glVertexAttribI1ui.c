#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribI1ui_wrp						\
    ((void  (*)(GLuint index,GLuint x                                        \
    ))GL_ENTRY_PTR(glVertexAttribI1ui_Idx))


GLAPI void  APIENTRY glVertexAttribI1ui(GLuint index,GLuint x)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttribI1ui_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribI1ui_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribI1ui_wrp(index,x);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribI1ui_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribI1ui_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribI1ui_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribI1ui_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribI1ui_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttribI1ui %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribI1ui_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI1ui_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI1ui_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribI1ui_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribI1ui_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribI1ui_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribI1ui_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribI1ui_Idx) = get_ts();
        }


	

}