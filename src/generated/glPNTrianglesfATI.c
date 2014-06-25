#include <glTraceCommon.h>
#include <generated.h>

#define glPNTrianglesfATI_wrp						\
    ((void  (*)(GLenum pname,GLfloat param                                        \
    ))GL_ENTRY_PTR(glPNTrianglesfATI_Idx))


GLAPI void  APIENTRY glPNTrianglesfATI(GLenum pname,GLfloat param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPNTrianglesfATI_Idx))
	{
            GL_ENTRY_PTR(glPNTrianglesfATI_Idx) = dlsym(RTLD_NEXT,"glPNTrianglesfATI");
            if(!GL_ENTRY_PTR(glPNTrianglesfATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPNTrianglesfATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glPNTrianglesfATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPNTrianglesfATI_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPNTrianglesfATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPNTrianglesfATI_Idx) ++;

        GL_ENTRY_LAST_TS(glPNTrianglesfATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPNTrianglesfATI_Idx),
				 GL_ENTRY_LAST_TS(glPNTrianglesfATI_Idx));
        if(last_diff > 1000000000){
            printf("glPNTrianglesfATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPNTrianglesfATI_Idx),
	             GL_ENTRY_CALL_TIME(glPNTrianglesfATI_Idx),
	             GL_ENTRY_CALL_TIME(glPNTrianglesfATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glPNTrianglesfATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPNTrianglesfATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPNTrianglesfATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPNTrianglesfATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPNTrianglesfATI_Idx) = get_ts();
        }


	

}