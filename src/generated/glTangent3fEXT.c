#include <glTraceCommon.h>
#include <generated.h>

#define glTangent3fEXT_wrp						\
    ((void  (*)(GLfloat tx,GLfloat ty,GLfloat tz                                        \
    ))GL_ENTRY_PTR(glTangent3fEXT_Idx))


GLAPI void  APIENTRY glTangent3fEXT(GLfloat tx,GLfloat ty,GLfloat tz)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTangent3fEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTangent3fEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTangent3fEXT_wrp(tx,ty,tz);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTangent3fEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTangent3fEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTangent3fEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTangent3fEXT_Idx),
				 GL_ENTRY_LAST_TS(glTangent3fEXT_Idx));


        if(last_diff > 1000000000){
            printf("glTangent3fEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTangent3fEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTangent3fEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTangent3fEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTangent3fEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTangent3fEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTangent3fEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTangent3fEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTangent3fEXT_Idx) = get_ts();
        }


	

}