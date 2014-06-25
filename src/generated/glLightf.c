#include <glTraceCommon.h>
#include <generated.h>

#define glLightf_wrp						\
    ((void  (*)(GLenum light,GLenum pname,GLfloat param                                        \
    ))GL_ENTRY_PTR(glLightf_Idx))


GLAPI void  APIENTRY glLightf(GLenum light,GLenum pname,GLfloat param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glLightf_Idx))
	{
            GL_ENTRY_PTR(glLightf_Idx) = dlsym(RTLD_NEXT,"glLightf");
            if(!GL_ENTRY_PTR(glLightf_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glLightf_Idx))
    	{
            GL_ENTRY_PREV_TS(glLightf_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLightf_wrp(light,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLightf_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLightf_Idx) ++;

        GL_ENTRY_LAST_TS(glLightf_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLightf_Idx),
				 GL_ENTRY_LAST_TS(glLightf_Idx));
        if(last_diff > 1000000000){
            printf("glLightf %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLightf_Idx),
	             GL_ENTRY_CALL_TIME(glLightf_Idx),
	             GL_ENTRY_CALL_TIME(glLightf_Idx) /
	             GL_ENTRY_CALL_COUNT(glLightf_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLightf_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLightf_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLightf_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLightf_Idx) = get_ts();
        }


	

}