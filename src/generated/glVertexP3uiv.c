#include <glTraceCommon.h>
#include <generated.h>

#define glVertexP3uiv_wrp						\
    ((void  (*)(GLenum type,const GLuint *value                                        \
    ))GL_ENTRY_PTR(glVertexP3uiv_Idx))


GLAPI void  APIENTRY glVertexP3uiv(GLenum type,const GLuint *value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexP3uiv_Idx))
	{
            GL_ENTRY_PTR(glVertexP3uiv_Idx) = dlsym(RTLD_NEXT,"glVertexP3uiv");
            if(!GL_ENTRY_PTR(glVertexP3uiv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexP3uiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexP3uiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexP3uiv_wrp(type,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexP3uiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexP3uiv_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexP3uiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexP3uiv_Idx),
				 GL_ENTRY_LAST_TS(glVertexP3uiv_Idx));
        if(last_diff > 1000000000){
            printf("glVertexP3uiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexP3uiv_Idx),
	             GL_ENTRY_CALL_TIME(glVertexP3uiv_Idx),
	             GL_ENTRY_CALL_TIME(glVertexP3uiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexP3uiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexP3uiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexP3uiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexP3uiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexP3uiv_Idx) = get_ts();
        }


	

}