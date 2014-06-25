#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribs1dvNV_wrp						\
    ((void  (*)(GLuint index,GLsizei count,const GLdouble *v                                        \
    ))GL_ENTRY_PTR(glVertexAttribs1dvNV_Idx))


GLAPI void  APIENTRY glVertexAttribs1dvNV(GLuint index,GLsizei count,const GLdouble *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribs1dvNV_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribs1dvNV_Idx) = dlsym(RTLD_NEXT,"glVertexAttribs1dvNV");
            if(!GL_ENTRY_PTR(glVertexAttribs1dvNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribs1dvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribs1dvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribs1dvNV_wrp(index,count,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribs1dvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribs1dvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribs1dvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribs1dvNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribs1dvNV_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribs1dvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribs1dvNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribs1dvNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribs1dvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribs1dvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribs1dvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribs1dvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribs1dvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribs1dvNV_Idx) = get_ts();
        }


	

}