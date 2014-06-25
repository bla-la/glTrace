#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib2hvNV_wrp						\
    ((void  (*)(GLuint index,const GLhalfNV *v                                        \
    ))GL_ENTRY_PTR(glVertexAttrib2hvNV_Idx))


GLAPI void  APIENTRY glVertexAttrib2hvNV(GLuint index,const GLhalfNV *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttrib2hvNV_Idx))
	{
            GL_ENTRY_PTR(glVertexAttrib2hvNV_Idx) = dlsym(RTLD_NEXT,"glVertexAttrib2hvNV");
            if(!GL_ENTRY_PTR(glVertexAttrib2hvNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttrib2hvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib2hvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib2hvNV_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib2hvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib2hvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib2hvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib2hvNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib2hvNV_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttrib2hvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib2hvNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib2hvNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib2hvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib2hvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib2hvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib2hvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib2hvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib2hvNV_Idx) = get_ts();
        }


	

}