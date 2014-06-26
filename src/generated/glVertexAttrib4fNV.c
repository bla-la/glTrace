#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib4fNV_wrp						\
    ((void  (*)(GLuint index,GLfloat x,GLfloat y,GLfloat z,GLfloat w                                        \
    ))GL_ENTRY_PTR(glVertexAttrib4fNV_Idx))


GLAPI void  APIENTRY glVertexAttrib4fNV(GLuint index,GLfloat x,GLfloat y,GLfloat z,GLfloat w)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttrib4fNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib4fNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib4fNV_wrp(index,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib4fNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib4fNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib4fNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib4fNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib4fNV_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttrib4fNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4fNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4fNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4fNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4fNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib4fNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib4fNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib4fNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib4fNV_Idx) = get_ts();
        }


	

}