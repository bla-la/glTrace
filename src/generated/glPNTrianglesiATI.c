#include <glTraceCommon.h>
#include <generated.h>

#define glPNTrianglesiATI_wrp						\
    ((void  (*)(GLenum pname,GLint param                                        \
    ))GL_ENTRY_PTR(glPNTrianglesiATI_Idx))


GLAPI void  APIENTRY glPNTrianglesiATI(GLenum pname,GLint param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPNTrianglesiATI_Idx))
	{
            GL_ENTRY_PTR(glPNTrianglesiATI_Idx) = dlsym(RTLD_NEXT,"glPNTrianglesiATI");
            if(!GL_ENTRY_PTR(glPNTrianglesiATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPNTrianglesiATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glPNTrianglesiATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPNTrianglesiATI_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPNTrianglesiATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPNTrianglesiATI_Idx) ++;

        GL_ENTRY_LAST_TS(glPNTrianglesiATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPNTrianglesiATI_Idx),
				 GL_ENTRY_LAST_TS(glPNTrianglesiATI_Idx));
        if(last_diff > 1000000000){
            printf("glPNTrianglesiATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPNTrianglesiATI_Idx),
	             GL_ENTRY_CALL_TIME(glPNTrianglesiATI_Idx),
	             GL_ENTRY_CALL_TIME(glPNTrianglesiATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glPNTrianglesiATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPNTrianglesiATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPNTrianglesiATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPNTrianglesiATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPNTrianglesiATI_Idx) = get_ts();
        }


	

}