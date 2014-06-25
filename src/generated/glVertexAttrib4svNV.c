#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib4svNV_wrp						\
    ((void  (*)(GLuint index,const GLshort *v                                        \
    ))GL_ENTRY_PTR(glVertexAttrib4svNV_Idx))


GLAPI void  APIENTRY glVertexAttrib4svNV(GLuint index,const GLshort *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttrib4svNV_Idx))
	{
            GL_ENTRY_PTR(glVertexAttrib4svNV_Idx) = dlsym(RTLD_NEXT,"glVertexAttrib4svNV");
            if(!GL_ENTRY_PTR(glVertexAttrib4svNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttrib4svNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib4svNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib4svNV_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib4svNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib4svNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib4svNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib4svNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib4svNV_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttrib4svNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4svNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4svNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4svNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4svNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib4svNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib4svNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib4svNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib4svNV_Idx) = get_ts();
        }


	

}