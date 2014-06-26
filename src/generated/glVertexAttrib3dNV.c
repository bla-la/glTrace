#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib3dNV_wrp						\
    ((void  (*)(GLuint index,GLdouble x,GLdouble y,GLdouble z                                        \
    ))GL_ENTRY_PTR(glVertexAttrib3dNV_Idx))


GLAPI void  APIENTRY glVertexAttrib3dNV(GLuint index,GLdouble x,GLdouble y,GLdouble z)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttrib3dNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib3dNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib3dNV_wrp(index,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib3dNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib3dNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib3dNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib3dNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib3dNV_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttrib3dNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib3dNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib3dNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib3dNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib3dNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib3dNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib3dNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib3dNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib3dNV_Idx) = get_ts();
        }


	

}