#include <glTraceCommon.h>
#include <generated.h>

#define glTangent3bEXT_wrp						\
    ((void  (*)(GLbyte tx,GLbyte ty,GLbyte tz                                        \
    ))GL_ENTRY_PTR(glTangent3bEXT_Idx))


GLAPI void  APIENTRY glTangent3bEXT(GLbyte tx,GLbyte ty,GLbyte tz)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTangent3bEXT_Idx))
	{
            GL_ENTRY_PTR(glTangent3bEXT_Idx) = dlsym(RTLD_NEXT,"glTangent3bEXT");
            if(!GL_ENTRY_PTR(glTangent3bEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTangent3bEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTangent3bEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTangent3bEXT_wrp(tx,ty,tz);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTangent3bEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTangent3bEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTangent3bEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTangent3bEXT_Idx),
				 GL_ENTRY_LAST_TS(glTangent3bEXT_Idx));
        if(last_diff > 1000000000){
            printf("glTangent3bEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTangent3bEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTangent3bEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTangent3bEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTangent3bEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTangent3bEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTangent3bEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTangent3bEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTangent3bEXT_Idx) = get_ts();
        }


	

}