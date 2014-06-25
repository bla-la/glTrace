#include <glTraceCommon.h>
#include <generated.h>

#define glDepthBoundsEXT_wrp						\
    ((void  (*)(GLclampd zmin,GLclampd zmax                                        \
    ))GL_ENTRY_PTR(glDepthBoundsEXT_Idx))


GLAPI void  APIENTRY glDepthBoundsEXT(GLclampd zmin,GLclampd zmax)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDepthBoundsEXT_Idx))
	{
            GL_ENTRY_PTR(glDepthBoundsEXT_Idx) = dlsym(RTLD_NEXT,"glDepthBoundsEXT");
            if(!GL_ENTRY_PTR(glDepthBoundsEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDepthBoundsEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glDepthBoundsEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDepthBoundsEXT_wrp(zmin,zmax);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDepthBoundsEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDepthBoundsEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glDepthBoundsEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDepthBoundsEXT_Idx),
				 GL_ENTRY_LAST_TS(glDepthBoundsEXT_Idx));
        if(last_diff > 1000000000){
            printf("glDepthBoundsEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDepthBoundsEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDepthBoundsEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDepthBoundsEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glDepthBoundsEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDepthBoundsEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDepthBoundsEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDepthBoundsEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDepthBoundsEXT_Idx) = get_ts();
        }


	

}