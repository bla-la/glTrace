#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib2fv_wrp						\
    ((void  (*)(GLuint index,const GLfloat *v                                        \
    ))GL_ENTRY_PTR(glVertexAttrib2fv_Idx))


GLAPI void  APIENTRY glVertexAttrib2fv(GLuint index,const GLfloat *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttrib2fv_Idx))
	{
            GL_ENTRY_PTR(glVertexAttrib2fv_Idx) = dlsym(RTLD_NEXT,"glVertexAttrib2fv");
            if(!GL_ENTRY_PTR(glVertexAttrib2fv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttrib2fv_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib2fv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib2fv_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib2fv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib2fv_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib2fv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib2fv_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib2fv_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttrib2fv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib2fv_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib2fv_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib2fv_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib2fv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib2fv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib2fv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib2fv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib2fv_Idx) = get_ts();
        }


	

}