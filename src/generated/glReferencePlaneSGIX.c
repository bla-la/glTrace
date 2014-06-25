#include <glTraceCommon.h>
#include <generated.h>

#define glReferencePlaneSGIX_wrp						\
    ((void  (*)(const GLdouble *equation                                        \
    ))GL_ENTRY_PTR(glReferencePlaneSGIX_Idx))


GLAPI void  APIENTRY glReferencePlaneSGIX(const GLdouble *equation)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glReferencePlaneSGIX_Idx))
	{
            GL_ENTRY_PTR(glReferencePlaneSGIX_Idx) = dlsym(RTLD_NEXT,"glReferencePlaneSGIX");
            if(!GL_ENTRY_PTR(glReferencePlaneSGIX_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glReferencePlaneSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glReferencePlaneSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glReferencePlaneSGIX_wrp(equation);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glReferencePlaneSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glReferencePlaneSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glReferencePlaneSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glReferencePlaneSGIX_Idx),
				 GL_ENTRY_LAST_TS(glReferencePlaneSGIX_Idx));
        if(last_diff > 1000000000){
            printf("glReferencePlaneSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glReferencePlaneSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glReferencePlaneSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glReferencePlaneSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glReferencePlaneSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glReferencePlaneSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glReferencePlaneSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glReferencePlaneSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glReferencePlaneSGIX_Idx) = get_ts();
        }


	

}