#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribL3dEXT_wrp						\
    ((void  (*)(GLuint index,GLdouble x,GLdouble y,GLdouble z                                        \
    ))GL_ENTRY_PTR(glVertexAttribL3dEXT_Idx))


GLAPI void  APIENTRY glVertexAttribL3dEXT(GLuint index,GLdouble x,GLdouble y,GLdouble z)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribL3dEXT_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribL3dEXT_Idx) = dlsym(RTLD_NEXT,"glVertexAttribL3dEXT");
            if(!GL_ENTRY_PTR(glVertexAttribL3dEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribL3dEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribL3dEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribL3dEXT_wrp(index,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribL3dEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribL3dEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribL3dEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribL3dEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribL3dEXT_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribL3dEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribL3dEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribL3dEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribL3dEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribL3dEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribL3dEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribL3dEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribL3dEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribL3dEXT_Idx) = get_ts();
        }


	

}