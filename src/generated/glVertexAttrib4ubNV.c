#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib4ubNV_wrp						\
    ((void  (*)(GLuint index,GLubyte x,GLubyte y,GLubyte z,GLubyte w                                        \
    ))GL_ENTRY_PTR(glVertexAttrib4ubNV_Idx))


GLAPI void  APIENTRY glVertexAttrib4ubNV(GLuint index,GLubyte x,GLubyte y,GLubyte z,GLubyte w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttrib4ubNV_Idx))
	{
            GL_ENTRY_PTR(glVertexAttrib4ubNV_Idx) = dlsym(RTLD_NEXT,"glVertexAttrib4ubNV");
            if(!GL_ENTRY_PTR(glVertexAttrib4ubNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttrib4ubNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib4ubNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib4ubNV_wrp(index,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib4ubNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib4ubNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib4ubNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib4ubNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib4ubNV_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttrib4ubNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4ubNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4ubNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4ubNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4ubNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib4ubNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib4ubNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib4ubNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib4ubNV_Idx) = get_ts();
        }


	

}