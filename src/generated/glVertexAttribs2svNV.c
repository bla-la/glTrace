#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribs2svNV_wrp						\
    ((void  (*)(GLuint index,GLsizei count,const GLshort *v                                        \
    ))GL_ENTRY_PTR(glVertexAttribs2svNV_Idx))


GLAPI void  APIENTRY glVertexAttribs2svNV(GLuint index,GLsizei count,const GLshort *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribs2svNV_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribs2svNV_Idx) = dlsym(RTLD_NEXT,"glVertexAttribs2svNV");
            if(!GL_ENTRY_PTR(glVertexAttribs2svNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribs2svNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribs2svNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribs2svNV_wrp(index,count,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribs2svNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribs2svNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribs2svNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribs2svNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribs2svNV_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribs2svNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribs2svNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribs2svNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribs2svNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribs2svNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribs2svNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribs2svNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribs2svNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribs2svNV_Idx) = get_ts();
        }


	

}