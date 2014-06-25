#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib2fNV_wrp						\
    ((void  (*)(GLuint index,GLfloat x,GLfloat y                                        \
    ))GL_ENTRY_PTR(glVertexAttrib2fNV_Idx))


GLAPI void  APIENTRY glVertexAttrib2fNV(GLuint index,GLfloat x,GLfloat y)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttrib2fNV_Idx))
	{
            GL_ENTRY_PTR(glVertexAttrib2fNV_Idx) = dlsym(RTLD_NEXT,"glVertexAttrib2fNV");
            if(!GL_ENTRY_PTR(glVertexAttrib2fNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttrib2fNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib2fNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib2fNV_wrp(index,x,y);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib2fNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib2fNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib2fNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib2fNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib2fNV_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttrib2fNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib2fNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib2fNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib2fNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib2fNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib2fNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib2fNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib2fNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib2fNV_Idx) = get_ts();
        }


	

}