#include <glTraceCommon.h>
#include <generated.h>

#define glTangent3dvEXT_wrp						\
    ((void  (*)(const GLdouble *v                                        \
    ))GL_ENTRY_PTR(glTangent3dvEXT_Idx))


GLAPI void  APIENTRY glTangent3dvEXT(const GLdouble *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTangent3dvEXT_Idx))
	{
            GL_ENTRY_PTR(glTangent3dvEXT_Idx) = dlsym(RTLD_NEXT,"glTangent3dvEXT");
            if(!GL_ENTRY_PTR(glTangent3dvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTangent3dvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTangent3dvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTangent3dvEXT_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTangent3dvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTangent3dvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTangent3dvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTangent3dvEXT_Idx),
				 GL_ENTRY_LAST_TS(glTangent3dvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glTangent3dvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTangent3dvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTangent3dvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTangent3dvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTangent3dvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTangent3dvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTangent3dvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTangent3dvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTangent3dvEXT_Idx) = get_ts();
        }


	

}