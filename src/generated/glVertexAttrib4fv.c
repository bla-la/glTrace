#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib4fv_wrp						\
    ((void  (*)(GLuint index,const GLfloat *v                                        \
    ))GL_ENTRY_PTR(glVertexAttrib4fv_Idx))


GLAPI void  APIENTRY glVertexAttrib4fv(GLuint index,const GLfloat *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttrib4fv_Idx))
	{
            GL_ENTRY_PTR(glVertexAttrib4fv_Idx) = dlsym(RTLD_NEXT,"glVertexAttrib4fv");
            if(!GL_ENTRY_PTR(glVertexAttrib4fv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttrib4fv_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib4fv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib4fv_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib4fv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib4fv_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib4fv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib4fv_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib4fv_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttrib4fv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4fv_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4fv_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4fv_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4fv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib4fv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib4fv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib4fv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib4fv_Idx) = get_ts();
        }


	

}