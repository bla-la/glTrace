#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribI3ivEXT_wrp						\
    ((void  (*)(GLuint index,const GLint *v                                        \
    ))GL_ENTRY_PTR(glVertexAttribI3ivEXT_Idx))


GLAPI void  APIENTRY glVertexAttribI3ivEXT(GLuint index,const GLint *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribI3ivEXT_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribI3ivEXT_Idx) = dlsym(RTLD_NEXT,"glVertexAttribI3ivEXT");
            if(!GL_ENTRY_PTR(glVertexAttribI3ivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribI3ivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribI3ivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribI3ivEXT_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribI3ivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribI3ivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribI3ivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribI3ivEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribI3ivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribI3ivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribI3ivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI3ivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI3ivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribI3ivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribI3ivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribI3ivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribI3ivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribI3ivEXT_Idx) = get_ts();
        }


	

}