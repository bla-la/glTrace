#include <glTraceCommon.h>
#include <generated.h>

#define glPixelTexGenParameterfvSGIS_wrp						\
    ((void  (*)(GLenum pname,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glPixelTexGenParameterfvSGIS_Idx))


GLAPI void  APIENTRY glPixelTexGenParameterfvSGIS(GLenum pname,const GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPixelTexGenParameterfvSGIS_Idx))
	{
            GL_ENTRY_PTR(glPixelTexGenParameterfvSGIS_Idx) = dlsym(RTLD_NEXT,"glPixelTexGenParameterfvSGIS");
            if(!GL_ENTRY_PTR(glPixelTexGenParameterfvSGIS_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPixelTexGenParameterfvSGIS_Idx))
    	{
            GL_ENTRY_PREV_TS(glPixelTexGenParameterfvSGIS_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPixelTexGenParameterfvSGIS_wrp(pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPixelTexGenParameterfvSGIS_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPixelTexGenParameterfvSGIS_Idx) ++;

        GL_ENTRY_LAST_TS(glPixelTexGenParameterfvSGIS_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPixelTexGenParameterfvSGIS_Idx),
				 GL_ENTRY_LAST_TS(glPixelTexGenParameterfvSGIS_Idx));
        if(last_diff > 1000000000){
            printf("glPixelTexGenParameterfvSGIS %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPixelTexGenParameterfvSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glPixelTexGenParameterfvSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glPixelTexGenParameterfvSGIS_Idx) /
	             GL_ENTRY_CALL_COUNT(glPixelTexGenParameterfvSGIS_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPixelTexGenParameterfvSGIS_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPixelTexGenParameterfvSGIS_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPixelTexGenParameterfvSGIS_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPixelTexGenParameterfvSGIS_Idx) = get_ts();
        }


	

}