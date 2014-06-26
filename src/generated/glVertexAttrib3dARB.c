#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib3dARB_wrp						\
    ((void  (*)(GLuint index,GLdouble x,GLdouble y,GLdouble z                                        \
    ))GL_ENTRY_PTR(glVertexAttrib3dARB_Idx))


GLAPI void  APIENTRY glVertexAttrib3dARB(GLuint index,GLdouble x,GLdouble y,GLdouble z)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttrib3dARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib3dARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib3dARB_wrp(index,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib3dARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib3dARB_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib3dARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib3dARB_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib3dARB_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttrib3dARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib3dARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib3dARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib3dARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib3dARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib3dARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib3dARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib3dARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib3dARB_Idx) = get_ts();
        }


	

}