#include <glTraceCommon.h>
#include <generated.h>

#define glTangent3iEXT_wrp						\
    ((void  (*)(GLint tx,GLint ty,GLint tz                                        \
    ))GL_ENTRY_PTR(glTangent3iEXT_Idx))


GLAPI void  APIENTRY glTangent3iEXT(GLint tx,GLint ty,GLint tz)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTangent3iEXT_Idx))
	{
            GL_ENTRY_PTR(glTangent3iEXT_Idx) = dlsym(RTLD_NEXT,"glTangent3iEXT");
            if(!GL_ENTRY_PTR(glTangent3iEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTangent3iEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTangent3iEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTangent3iEXT_wrp(tx,ty,tz);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTangent3iEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTangent3iEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTangent3iEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTangent3iEXT_Idx),
				 GL_ENTRY_LAST_TS(glTangent3iEXT_Idx));
        if(last_diff > 1000000000){
            printf("glTangent3iEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTangent3iEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTangent3iEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTangent3iEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTangent3iEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTangent3iEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTangent3iEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTangent3iEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTangent3iEXT_Idx) = get_ts();
        }


	

}