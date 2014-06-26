#include <glTraceCommon.h>
#include <generated.h>

#define glTangent3bvEXT_wrp						\
    ((void  (*)(const GLbyte *v                                        \
    ))GL_ENTRY_PTR(glTangent3bvEXT_Idx))


GLAPI void  APIENTRY glTangent3bvEXT(const GLbyte *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTangent3bvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTangent3bvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTangent3bvEXT_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTangent3bvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTangent3bvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTangent3bvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTangent3bvEXT_Idx),
				 GL_ENTRY_LAST_TS(glTangent3bvEXT_Idx));


        if(last_diff > 1000000000){
            printf("glTangent3bvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTangent3bvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTangent3bvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTangent3bvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTangent3bvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTangent3bvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTangent3bvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTangent3bvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTangent3bvEXT_Idx) = get_ts();
        }


	

}