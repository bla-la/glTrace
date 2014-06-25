#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib3hNV_wrp						\
    ((void  (*)(GLuint index,GLhalfNV x,GLhalfNV y,GLhalfNV z                                        \
    ))GL_ENTRY_PTR(glVertexAttrib3hNV_Idx))


GLAPI void  APIENTRY glVertexAttrib3hNV(GLuint index,GLhalfNV x,GLhalfNV y,GLhalfNV z)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttrib3hNV_Idx))
	{
            GL_ENTRY_PTR(glVertexAttrib3hNV_Idx) = dlsym(RTLD_NEXT,"glVertexAttrib3hNV");
            if(!GL_ENTRY_PTR(glVertexAttrib3hNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttrib3hNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib3hNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib3hNV_wrp(index,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib3hNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib3hNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib3hNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib3hNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib3hNV_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttrib3hNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib3hNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib3hNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib3hNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib3hNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib3hNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib3hNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib3hNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib3hNV_Idx) = get_ts();
        }


	

}