#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib4dNV_wrp						\
    ((void  (*)(GLuint index,GLdouble x,GLdouble y,GLdouble z,GLdouble w                                        \
    ))GL_ENTRY_PTR(glVertexAttrib4dNV_Idx))


GLAPI void  APIENTRY glVertexAttrib4dNV(GLuint index,GLdouble x,GLdouble y,GLdouble z,GLdouble w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttrib4dNV_Idx))
	{
            GL_ENTRY_PTR(glVertexAttrib4dNV_Idx) = dlsym(RTLD_NEXT,"glVertexAttrib4dNV");
            if(!GL_ENTRY_PTR(glVertexAttrib4dNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttrib4dNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib4dNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib4dNV_wrp(index,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib4dNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib4dNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib4dNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib4dNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib4dNV_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttrib4dNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4dNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4dNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4dNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4dNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib4dNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib4dNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib4dNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib4dNV_Idx) = get_ts();
        }


	

}