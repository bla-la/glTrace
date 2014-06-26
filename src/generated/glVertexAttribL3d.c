#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribL3d_wrp						\
    ((void  (*)(GLuint index,GLdouble x,GLdouble y,GLdouble z                                        \
    ))GL_ENTRY_PTR(glVertexAttribL3d_Idx))


GLAPI void  APIENTRY glVertexAttribL3d(GLuint index,GLdouble x,GLdouble y,GLdouble z)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttribL3d_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribL3d_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribL3d_wrp(index,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribL3d_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribL3d_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribL3d_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribL3d_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribL3d_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttribL3d %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribL3d_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribL3d_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribL3d_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribL3d_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribL3d_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribL3d_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribL3d_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribL3d_Idx) = get_ts();
        }


	

}