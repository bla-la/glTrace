#include <glTraceCommon.h>
#include <generated.h>

#define glLightModelxv_wrp						\
    ((void  (*)(GLenum pname,const GLfixed *param                                        \
    ))GL_ENTRY_PTR(glLightModelxv_Idx))


GLAPI void  APIENTRY glLightModelxv(GLenum pname,const GLfixed *param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glLightModelxv_Idx))
    	{
            GL_ENTRY_PREV_TS(glLightModelxv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLightModelxv_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLightModelxv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLightModelxv_Idx) ++;

        GL_ENTRY_LAST_TS(glLightModelxv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLightModelxv_Idx),
				 GL_ENTRY_LAST_TS(glLightModelxv_Idx));


        if(last_diff > 1000000000){
            printf("glLightModelxv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLightModelxv_Idx),
	             GL_ENTRY_CALL_TIME(glLightModelxv_Idx),
	             GL_ENTRY_CALL_TIME(glLightModelxv_Idx) /
	             GL_ENTRY_CALL_COUNT(glLightModelxv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLightModelxv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLightModelxv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLightModelxv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLightModelxv_Idx) = get_ts();
        }


	

}