#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib2fARB_wrp						\
    ((void  (*)(GLuint index,GLfloat x,GLfloat y                                        \
    ))GL_ENTRY_PTR(glVertexAttrib2fARB_Idx))


GLAPI void  APIENTRY glVertexAttrib2fARB(GLuint index,GLfloat x,GLfloat y)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttrib2fARB_Idx))
	{
            GL_ENTRY_PTR(glVertexAttrib2fARB_Idx) = dlsym(RTLD_NEXT,"glVertexAttrib2fARB");
            if(!GL_ENTRY_PTR(glVertexAttrib2fARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttrib2fARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib2fARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib2fARB_wrp(index,x,y);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib2fARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib2fARB_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib2fARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib2fARB_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib2fARB_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttrib2fARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib2fARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib2fARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib2fARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib2fARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib2fARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib2fARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib2fARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib2fARB_Idx) = get_ts();
        }


	

}