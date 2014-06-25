#include <glTraceCommon.h>
#include <generated.h>

#define glLightModelxOES_wrp						\
    ((void  (*)(GLenum pname,GLfixed param                                        \
    ))GL_ENTRY_PTR(glLightModelxOES_Idx))


GLAPI void  APIENTRY glLightModelxOES(GLenum pname,GLfixed param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glLightModelxOES_Idx))
	{
            GL_ENTRY_PTR(glLightModelxOES_Idx) = dlsym(RTLD_NEXT,"glLightModelxOES");
            if(!GL_ENTRY_PTR(glLightModelxOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glLightModelxOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glLightModelxOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLightModelxOES_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLightModelxOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLightModelxOES_Idx) ++;

        GL_ENTRY_LAST_TS(glLightModelxOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLightModelxOES_Idx),
				 GL_ENTRY_LAST_TS(glLightModelxOES_Idx));
        if(last_diff > 1000000000){
            printf("glLightModelxOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLightModelxOES_Idx),
	             GL_ENTRY_CALL_TIME(glLightModelxOES_Idx),
	             GL_ENTRY_CALL_TIME(glLightModelxOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glLightModelxOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLightModelxOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLightModelxOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLightModelxOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLightModelxOES_Idx) = get_ts();
        }


	

}