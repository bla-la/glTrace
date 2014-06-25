#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib3sNV_wrp						\
    ((void  (*)(GLuint index,GLshort x,GLshort y,GLshort z                                        \
    ))GL_ENTRY_PTR(glVertexAttrib3sNV_Idx))


GLAPI void  APIENTRY glVertexAttrib3sNV(GLuint index,GLshort x,GLshort y,GLshort z)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttrib3sNV_Idx))
	{
            GL_ENTRY_PTR(glVertexAttrib3sNV_Idx) = dlsym(RTLD_NEXT,"glVertexAttrib3sNV");
            if(!GL_ENTRY_PTR(glVertexAttrib3sNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttrib3sNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib3sNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib3sNV_wrp(index,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib3sNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib3sNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib3sNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib3sNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib3sNV_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttrib3sNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib3sNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib3sNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib3sNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib3sNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib3sNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib3sNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib3sNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib3sNV_Idx) = get_ts();
        }


	

}