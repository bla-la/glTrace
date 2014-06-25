#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribs2hvNV_wrp						\
    ((void  (*)(GLuint index,GLsizei n,const GLhalfNV *v                                        \
    ))GL_ENTRY_PTR(glVertexAttribs2hvNV_Idx))


GLAPI void  APIENTRY glVertexAttribs2hvNV(GLuint index,GLsizei n,const GLhalfNV *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribs2hvNV_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribs2hvNV_Idx) = dlsym(RTLD_NEXT,"glVertexAttribs2hvNV");
            if(!GL_ENTRY_PTR(glVertexAttribs2hvNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribs2hvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribs2hvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribs2hvNV_wrp(index,n,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribs2hvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribs2hvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribs2hvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribs2hvNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribs2hvNV_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribs2hvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribs2hvNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribs2hvNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribs2hvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribs2hvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribs2hvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribs2hvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribs2hvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribs2hvNV_Idx) = get_ts();
        }


	

}