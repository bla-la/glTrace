#include <glTraceCommon.h>
#include <generated.h>

#define glTangent3dEXT_wrp						\
    ((void  (*)(GLdouble tx,GLdouble ty,GLdouble tz                                        \
    ))GL_ENTRY_PTR(glTangent3dEXT_Idx))


GLAPI void  APIENTRY glTangent3dEXT(GLdouble tx,GLdouble ty,GLdouble tz)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTangent3dEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTangent3dEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTangent3dEXT_wrp(tx,ty,tz);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTangent3dEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTangent3dEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTangent3dEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTangent3dEXT_Idx),
				 GL_ENTRY_LAST_TS(glTangent3dEXT_Idx));


        if(last_diff > 1000000000){
            printf("glTangent3dEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTangent3dEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTangent3dEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTangent3dEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTangent3dEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTangent3dEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTangent3dEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTangent3dEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTangent3dEXT_Idx) = get_ts();
        }


	

}