#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib2f_wrp						\
    ((void  (*)(GLuint index,GLfloat x,GLfloat y                                        \
    ))GL_ENTRY_PTR(glVertexAttrib2f_Idx))


GLAPI void  APIENTRY glVertexAttrib2f(GLuint index,GLfloat x,GLfloat y)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttrib2f_Idx))
	{
            GL_ENTRY_PTR(glVertexAttrib2f_Idx) = dlsym(RTLD_NEXT,"glVertexAttrib2f");
            if(!GL_ENTRY_PTR(glVertexAttrib2f_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttrib2f_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib2f_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib2f_wrp(index,x,y);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib2f_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib2f_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib2f_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib2f_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib2f_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttrib2f %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib2f_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib2f_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib2f_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib2f_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib2f_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib2f_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib2f_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib2f_Idx) = get_ts();
        }


	

}