#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib4f_wrp						\
    ((void  (*)(GLuint index,GLfloat x,GLfloat y,GLfloat z,GLfloat w                                        \
    ))GL_ENTRY_PTR(glVertexAttrib4f_Idx))


GLAPI void  APIENTRY glVertexAttrib4f(GLuint index,GLfloat x,GLfloat y,GLfloat z,GLfloat w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttrib4f_Idx))
	{
            GL_ENTRY_PTR(glVertexAttrib4f_Idx) = dlsym(RTLD_NEXT,"glVertexAttrib4f");
            if(!GL_ENTRY_PTR(glVertexAttrib4f_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttrib4f_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib4f_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib4f_wrp(index,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib4f_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib4f_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib4f_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib4f_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib4f_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttrib4f %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4f_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4f_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4f_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4f_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib4f_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib4f_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib4f_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib4f_Idx) = get_ts();
        }


	

}