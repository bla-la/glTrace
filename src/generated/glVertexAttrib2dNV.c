#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib2dNV_wrp						\
    ((void  (*)(GLuint index,GLdouble x,GLdouble y                                        \
    ))GL_ENTRY_PTR(glVertexAttrib2dNV_Idx))


GLAPI void  APIENTRY glVertexAttrib2dNV(GLuint index,GLdouble x,GLdouble y)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttrib2dNV_Idx))
	{
            GL_ENTRY_PTR(glVertexAttrib2dNV_Idx) = dlsym(RTLD_NEXT,"glVertexAttrib2dNV");
            if(!GL_ENTRY_PTR(glVertexAttrib2dNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttrib2dNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib2dNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib2dNV_wrp(index,x,y);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib2dNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib2dNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib2dNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib2dNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib2dNV_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttrib2dNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib2dNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib2dNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib2dNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib2dNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib2dNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib2dNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib2dNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib2dNV_Idx) = get_ts();
        }


	

}