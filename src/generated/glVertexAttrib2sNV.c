#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib2sNV_wrp						\
    ((void  (*)(GLuint index,GLshort x,GLshort y                                        \
    ))GL_ENTRY_PTR(glVertexAttrib2sNV_Idx))


GLAPI void  APIENTRY glVertexAttrib2sNV(GLuint index,GLshort x,GLshort y)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttrib2sNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib2sNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib2sNV_wrp(index,x,y);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib2sNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib2sNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib2sNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib2sNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib2sNV_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttrib2sNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib2sNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib2sNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib2sNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib2sNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib2sNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib2sNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib2sNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib2sNV_Idx) = get_ts();
        }


	

}