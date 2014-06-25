#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib1dv_wrp						\
    ((void  (*)(GLuint index,const GLdouble *v                                        \
    ))GL_ENTRY_PTR(glVertexAttrib1dv_Idx))


GLAPI void  APIENTRY glVertexAttrib1dv(GLuint index,const GLdouble *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttrib1dv_Idx))
	{
            GL_ENTRY_PTR(glVertexAttrib1dv_Idx) = dlsym(RTLD_NEXT,"glVertexAttrib1dv");
            if(!GL_ENTRY_PTR(glVertexAttrib1dv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttrib1dv_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib1dv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib1dv_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib1dv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib1dv_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib1dv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib1dv_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib1dv_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttrib1dv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib1dv_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib1dv_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib1dv_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib1dv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib1dv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib1dv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib1dv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib1dv_Idx) = get_ts();
        }


	

}