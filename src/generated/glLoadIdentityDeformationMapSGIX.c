#include <glTraceCommon.h>
#include <generated.h>

#define glLoadIdentityDeformationMapSGIX_wrp						\
    ((void  (*)(GLbitfield mask                                        \
    ))GL_ENTRY_PTR(glLoadIdentityDeformationMapSGIX_Idx))


GLAPI void  APIENTRY glLoadIdentityDeformationMapSGIX(GLbitfield mask)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glLoadIdentityDeformationMapSGIX_Idx))
	{
            GL_ENTRY_PTR(glLoadIdentityDeformationMapSGIX_Idx) = dlsym(RTLD_NEXT,"glLoadIdentityDeformationMapSGIX");
            if(!GL_ENTRY_PTR(glLoadIdentityDeformationMapSGIX_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glLoadIdentityDeformationMapSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glLoadIdentityDeformationMapSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLoadIdentityDeformationMapSGIX_wrp(mask);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLoadIdentityDeformationMapSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLoadIdentityDeformationMapSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glLoadIdentityDeformationMapSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLoadIdentityDeformationMapSGIX_Idx),
				 GL_ENTRY_LAST_TS(glLoadIdentityDeformationMapSGIX_Idx));
        if(last_diff > 1000000000){
            printf("glLoadIdentityDeformationMapSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLoadIdentityDeformationMapSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glLoadIdentityDeformationMapSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glLoadIdentityDeformationMapSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glLoadIdentityDeformationMapSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLoadIdentityDeformationMapSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLoadIdentityDeformationMapSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLoadIdentityDeformationMapSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLoadIdentityDeformationMapSGIX_Idx) = get_ts();
        }


	

}