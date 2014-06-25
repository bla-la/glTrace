#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribI2ui_wrp						\
    ((void  (*)(GLuint index,GLuint x,GLuint y                                        \
    ))GL_ENTRY_PTR(glVertexAttribI2ui_Idx))


GLAPI void  APIENTRY glVertexAttribI2ui(GLuint index,GLuint x,GLuint y)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribI2ui_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribI2ui_Idx) = dlsym(RTLD_NEXT,"glVertexAttribI2ui");
            if(!GL_ENTRY_PTR(glVertexAttribI2ui_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribI2ui_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribI2ui_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribI2ui_wrp(index,x,y);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribI2ui_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribI2ui_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribI2ui_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribI2ui_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribI2ui_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribI2ui %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribI2ui_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI2ui_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI2ui_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribI2ui_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribI2ui_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribI2ui_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribI2ui_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribI2ui_Idx) = get_ts();
        }


	

}