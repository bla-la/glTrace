#include <glTraceCommon.h>
#include <generated.h>

#define glTangent3fvEXT_wrp						\
    ((void  (*)(const GLfloat *v                                        \
    ))GL_ENTRY_PTR(glTangent3fvEXT_Idx))


GLAPI void  APIENTRY glTangent3fvEXT(const GLfloat *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTangent3fvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTangent3fvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTangent3fvEXT_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTangent3fvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTangent3fvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTangent3fvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTangent3fvEXT_Idx),
				 GL_ENTRY_LAST_TS(glTangent3fvEXT_Idx));


        if(last_diff > 1000000000){
            printf("glTangent3fvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTangent3fvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTangent3fvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTangent3fvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTangent3fvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTangent3fvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTangent3fvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTangent3fvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTangent3fvEXT_Idx) = get_ts();
        }


	

}