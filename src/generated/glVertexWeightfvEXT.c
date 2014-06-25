#include <glTraceCommon.h>
#include <generated.h>

#define glVertexWeightfvEXT_wrp						\
    ((void  (*)(const GLfloat *weight                                        \
    ))GL_ENTRY_PTR(glVertexWeightfvEXT_Idx))


GLAPI void  APIENTRY glVertexWeightfvEXT(const GLfloat *weight)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexWeightfvEXT_Idx))
	{
            GL_ENTRY_PTR(glVertexWeightfvEXT_Idx) = dlsym(RTLD_NEXT,"glVertexWeightfvEXT");
            if(!GL_ENTRY_PTR(glVertexWeightfvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexWeightfvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexWeightfvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexWeightfvEXT_wrp(weight);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexWeightfvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexWeightfvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexWeightfvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexWeightfvEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexWeightfvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glVertexWeightfvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexWeightfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexWeightfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexWeightfvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexWeightfvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexWeightfvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexWeightfvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexWeightfvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexWeightfvEXT_Idx) = get_ts();
        }


	

}