#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib1dARB_wrp						\
    ((void  (*)(GLuint index,GLdouble x                                        \
    ))GL_ENTRY_PTR(glVertexAttrib1dARB_Idx))


GLAPI void  APIENTRY glVertexAttrib1dARB(GLuint index,GLdouble x)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttrib1dARB_Idx))
	{
            GL_ENTRY_PTR(glVertexAttrib1dARB_Idx) = dlsym(RTLD_NEXT,"glVertexAttrib1dARB");
            if(!GL_ENTRY_PTR(glVertexAttrib1dARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttrib1dARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib1dARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib1dARB_wrp(index,x);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib1dARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib1dARB_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib1dARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib1dARB_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib1dARB_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttrib1dARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib1dARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib1dARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib1dARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib1dARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib1dARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib1dARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib1dARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib1dARB_Idx) = get_ts();
        }


	

}