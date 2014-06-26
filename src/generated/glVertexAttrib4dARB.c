#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib4dARB_wrp						\
    ((void  (*)(GLuint index,GLdouble x,GLdouble y,GLdouble z,GLdouble w                                        \
    ))GL_ENTRY_PTR(glVertexAttrib4dARB_Idx))


GLAPI void  APIENTRY glVertexAttrib4dARB(GLuint index,GLdouble x,GLdouble y,GLdouble z,GLdouble w)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttrib4dARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib4dARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib4dARB_wrp(index,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib4dARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib4dARB_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib4dARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib4dARB_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib4dARB_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttrib4dARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4dARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4dARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4dARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4dARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib4dARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib4dARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib4dARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib4dARB_Idx) = get_ts();
        }


	

}