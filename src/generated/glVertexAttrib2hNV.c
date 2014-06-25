#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib2hNV_wrp						\
    ((void  (*)(GLuint index,GLhalfNV x,GLhalfNV y                                        \
    ))GL_ENTRY_PTR(glVertexAttrib2hNV_Idx))


GLAPI void  APIENTRY glVertexAttrib2hNV(GLuint index,GLhalfNV x,GLhalfNV y)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttrib2hNV_Idx))
	{
            GL_ENTRY_PTR(glVertexAttrib2hNV_Idx) = dlsym(RTLD_NEXT,"glVertexAttrib2hNV");
            if(!GL_ENTRY_PTR(glVertexAttrib2hNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttrib2hNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib2hNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib2hNV_wrp(index,x,y);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib2hNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib2hNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib2hNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib2hNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib2hNV_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttrib2hNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib2hNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib2hNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib2hNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib2hNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib2hNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib2hNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib2hNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib2hNV_Idx) = get_ts();
        }


	

}