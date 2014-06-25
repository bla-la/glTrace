#include <glTraceCommon.h>
#include <generated.h>

#define glDeformSGIX_wrp						\
    ((void  (*)(GLbitfield mask                                        \
    ))GL_ENTRY_PTR(glDeformSGIX_Idx))


GLAPI void  APIENTRY glDeformSGIX(GLbitfield mask)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDeformSGIX_Idx))
	{
            GL_ENTRY_PTR(glDeformSGIX_Idx) = dlsym(RTLD_NEXT,"glDeformSGIX");
            if(!GL_ENTRY_PTR(glDeformSGIX_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDeformSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeformSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeformSGIX_wrp(mask);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeformSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeformSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glDeformSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeformSGIX_Idx),
				 GL_ENTRY_LAST_TS(glDeformSGIX_Idx));
        if(last_diff > 1000000000){
            printf("glDeformSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeformSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glDeformSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glDeformSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeformSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeformSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeformSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeformSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeformSGIX_Idx) = get_ts();
        }


	

}