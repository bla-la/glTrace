#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib1d_wrp						\
    ((void  (*)(GLuint index,GLdouble x                                        \
    ))GL_ENTRY_PTR(glVertexAttrib1d_Idx))


GLAPI void  APIENTRY glVertexAttrib1d(GLuint index,GLdouble x)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttrib1d_Idx))
	{
            GL_ENTRY_PTR(glVertexAttrib1d_Idx) = dlsym(RTLD_NEXT,"glVertexAttrib1d");
            if(!GL_ENTRY_PTR(glVertexAttrib1d_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttrib1d_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib1d_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib1d_wrp(index,x);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib1d_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib1d_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib1d_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib1d_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib1d_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttrib1d %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib1d_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib1d_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib1d_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib1d_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib1d_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib1d_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib1d_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib1d_Idx) = get_ts();
        }


	

}