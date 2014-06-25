#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib4hNV_wrp						\
    ((void  (*)(GLuint index,GLhalfNV x,GLhalfNV y,GLhalfNV z,GLhalfNV w                                        \
    ))GL_ENTRY_PTR(glVertexAttrib4hNV_Idx))


GLAPI void  APIENTRY glVertexAttrib4hNV(GLuint index,GLhalfNV x,GLhalfNV y,GLhalfNV z,GLhalfNV w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttrib4hNV_Idx))
	{
            GL_ENTRY_PTR(glVertexAttrib4hNV_Idx) = dlsym(RTLD_NEXT,"glVertexAttrib4hNV");
            if(!GL_ENTRY_PTR(glVertexAttrib4hNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttrib4hNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib4hNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib4hNV_wrp(index,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib4hNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib4hNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib4hNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib4hNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib4hNV_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttrib4hNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4hNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4hNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4hNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4hNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib4hNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib4hNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib4hNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib4hNV_Idx) = get_ts();
        }


	

}