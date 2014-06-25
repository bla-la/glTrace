#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib4s_wrp						\
    ((void  (*)(GLuint index,GLshort x,GLshort y,GLshort z,GLshort w                                        \
    ))GL_ENTRY_PTR(glVertexAttrib4s_Idx))


GLAPI void  APIENTRY glVertexAttrib4s(GLuint index,GLshort x,GLshort y,GLshort z,GLshort w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttrib4s_Idx))
	{
            GL_ENTRY_PTR(glVertexAttrib4s_Idx) = dlsym(RTLD_NEXT,"glVertexAttrib4s");
            if(!GL_ENTRY_PTR(glVertexAttrib4s_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttrib4s_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib4s_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib4s_wrp(index,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib4s_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib4s_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib4s_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib4s_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib4s_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttrib4s %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4s_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4s_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4s_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4s_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib4s_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib4s_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib4s_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib4s_Idx) = get_ts();
        }


	

}