#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib1fNV_wrp						\
    ((void  (*)(GLuint index,GLfloat x                                        \
    ))GL_ENTRY_PTR(glVertexAttrib1fNV_Idx))


GLAPI void  APIENTRY glVertexAttrib1fNV(GLuint index,GLfloat x)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttrib1fNV_Idx))
	{
            GL_ENTRY_PTR(glVertexAttrib1fNV_Idx) = dlsym(RTLD_NEXT,"glVertexAttrib1fNV");
            if(!GL_ENTRY_PTR(glVertexAttrib1fNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttrib1fNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib1fNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib1fNV_wrp(index,x);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib1fNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib1fNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib1fNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib1fNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib1fNV_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttrib1fNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib1fNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib1fNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib1fNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib1fNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib1fNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib1fNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib1fNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib1fNV_Idx) = get_ts();
        }


	

}