#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib1sv_wrp						\
    ((void  (*)(GLuint index,const GLshort *v                                        \
    ))GL_ENTRY_PTR(glVertexAttrib1sv_Idx))


GLAPI void  APIENTRY glVertexAttrib1sv(GLuint index,const GLshort *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttrib1sv_Idx))
	{
            GL_ENTRY_PTR(glVertexAttrib1sv_Idx) = dlsym(RTLD_NEXT,"glVertexAttrib1sv");
            if(!GL_ENTRY_PTR(glVertexAttrib1sv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttrib1sv_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib1sv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib1sv_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib1sv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib1sv_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib1sv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib1sv_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib1sv_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttrib1sv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib1sv_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib1sv_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib1sv_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib1sv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib1sv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib1sv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib1sv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib1sv_Idx) = get_ts();
        }


	

}