#include <glTraceCommon.h>
#include <generated.h>

#define glVertexWeightfEXT_wrp						\
    ((void  (*)(GLfloat weight                                        \
    ))GL_ENTRY_PTR(glVertexWeightfEXT_Idx))


GLAPI void  APIENTRY glVertexWeightfEXT(GLfloat weight)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexWeightfEXT_Idx))
	{
            GL_ENTRY_PTR(glVertexWeightfEXT_Idx) = dlsym(RTLD_NEXT,"glVertexWeightfEXT");
            if(!GL_ENTRY_PTR(glVertexWeightfEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexWeightfEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexWeightfEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexWeightfEXT_wrp(weight);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexWeightfEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexWeightfEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexWeightfEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexWeightfEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexWeightfEXT_Idx));
        if(last_diff > 1000000000){
            printf("glVertexWeightfEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexWeightfEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexWeightfEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexWeightfEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexWeightfEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexWeightfEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexWeightfEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexWeightfEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexWeightfEXT_Idx) = get_ts();
        }


	

}