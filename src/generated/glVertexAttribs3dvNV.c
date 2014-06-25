#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribs3dvNV_wrp						\
    ((void  (*)(GLuint index,GLsizei count,const GLdouble *v                                        \
    ))GL_ENTRY_PTR(glVertexAttribs3dvNV_Idx))


GLAPI void  APIENTRY glVertexAttribs3dvNV(GLuint index,GLsizei count,const GLdouble *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribs3dvNV_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribs3dvNV_Idx) = dlsym(RTLD_NEXT,"glVertexAttribs3dvNV");
            if(!GL_ENTRY_PTR(glVertexAttribs3dvNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribs3dvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribs3dvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribs3dvNV_wrp(index,count,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribs3dvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribs3dvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribs3dvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribs3dvNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribs3dvNV_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribs3dvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribs3dvNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribs3dvNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribs3dvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribs3dvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribs3dvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribs3dvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribs3dvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribs3dvNV_Idx) = get_ts();
        }


	

}