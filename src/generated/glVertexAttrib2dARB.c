#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib2dARB_wrp						\
    ((void  (*)(GLuint index,GLdouble x,GLdouble y                                        \
    ))GL_ENTRY_PTR(glVertexAttrib2dARB_Idx))


GLAPI void  APIENTRY glVertexAttrib2dARB(GLuint index,GLdouble x,GLdouble y)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttrib2dARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib2dARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib2dARB_wrp(index,x,y);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib2dARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib2dARB_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib2dARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib2dARB_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib2dARB_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttrib2dARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib2dARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib2dARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib2dARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib2dARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib2dARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib2dARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib2dARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib2dARB_Idx) = get_ts();
        }


	

}