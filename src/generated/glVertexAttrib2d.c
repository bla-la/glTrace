#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib2d_wrp						\
    ((void  (*)(GLuint index,GLdouble x,GLdouble y                                        \
    ))GL_ENTRY_PTR(glVertexAttrib2d_Idx))


GLAPI void  APIENTRY glVertexAttrib2d(GLuint index,GLdouble x,GLdouble y)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttrib2d_Idx))
	{
            GL_ENTRY_PTR(glVertexAttrib2d_Idx) = dlsym(RTLD_NEXT,"glVertexAttrib2d");
            if(!GL_ENTRY_PTR(glVertexAttrib2d_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttrib2d_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib2d_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib2d_wrp(index,x,y);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib2d_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib2d_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib2d_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib2d_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib2d_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttrib2d %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib2d_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib2d_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib2d_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib2d_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib2d_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib2d_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib2d_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib2d_Idx) = get_ts();
        }


	

}