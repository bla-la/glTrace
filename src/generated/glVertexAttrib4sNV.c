#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib4sNV_wrp						\
    ((void  (*)(GLuint index,GLshort x,GLshort y,GLshort z,GLshort w                                        \
    ))GL_ENTRY_PTR(glVertexAttrib4sNV_Idx))


GLAPI void  APIENTRY glVertexAttrib4sNV(GLuint index,GLshort x,GLshort y,GLshort z,GLshort w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttrib4sNV_Idx))
	{
            GL_ENTRY_PTR(glVertexAttrib4sNV_Idx) = dlsym(RTLD_NEXT,"glVertexAttrib4sNV");
            if(!GL_ENTRY_PTR(glVertexAttrib4sNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttrib4sNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib4sNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib4sNV_wrp(index,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib4sNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib4sNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib4sNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib4sNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib4sNV_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttrib4sNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4sNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4sNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4sNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4sNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib4sNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib4sNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib4sNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib4sNV_Idx) = get_ts();
        }


	

}