#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib1hNV_wrp						\
    ((void  (*)(GLuint index,GLhalfNV x                                        \
    ))GL_ENTRY_PTR(glVertexAttrib1hNV_Idx))


GLAPI void  APIENTRY glVertexAttrib1hNV(GLuint index,GLhalfNV x)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttrib1hNV_Idx))
	{
            GL_ENTRY_PTR(glVertexAttrib1hNV_Idx) = dlsym(RTLD_NEXT,"glVertexAttrib1hNV");
            if(!GL_ENTRY_PTR(glVertexAttrib1hNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttrib1hNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib1hNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib1hNV_wrp(index,x);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib1hNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib1hNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib1hNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib1hNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib1hNV_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttrib1hNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib1hNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib1hNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib1hNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib1hNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib1hNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib1hNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib1hNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib1hNV_Idx) = get_ts();
        }


	

}