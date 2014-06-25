#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib2s_wrp						\
    ((void  (*)(GLuint index,GLshort x,GLshort y                                        \
    ))GL_ENTRY_PTR(glVertexAttrib2s_Idx))


GLAPI void  APIENTRY glVertexAttrib2s(GLuint index,GLshort x,GLshort y)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttrib2s_Idx))
	{
            GL_ENTRY_PTR(glVertexAttrib2s_Idx) = dlsym(RTLD_NEXT,"glVertexAttrib2s");
            if(!GL_ENTRY_PTR(glVertexAttrib2s_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttrib2s_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib2s_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib2s_wrp(index,x,y);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib2s_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib2s_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib2s_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib2s_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib2s_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttrib2s %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib2s_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib2s_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib2s_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib2s_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib2s_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib2s_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib2s_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib2s_Idx) = get_ts();
        }


	

}