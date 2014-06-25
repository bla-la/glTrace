#include <glTraceCommon.h>
#include <generated.h>

#define glLightModeliv_wrp						\
    ((void  (*)(GLenum pname,const GLint *params                                        \
    ))GL_ENTRY_PTR(glLightModeliv_Idx))


GLAPI void  APIENTRY glLightModeliv(GLenum pname,const GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glLightModeliv_Idx))
	{
            GL_ENTRY_PTR(glLightModeliv_Idx) = dlsym(RTLD_NEXT,"glLightModeliv");
            if(!GL_ENTRY_PTR(glLightModeliv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glLightModeliv_Idx))
    	{
            GL_ENTRY_PREV_TS(glLightModeliv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLightModeliv_wrp(pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLightModeliv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLightModeliv_Idx) ++;

        GL_ENTRY_LAST_TS(glLightModeliv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLightModeliv_Idx),
				 GL_ENTRY_LAST_TS(glLightModeliv_Idx));
        if(last_diff > 1000000000){
            printf("glLightModeliv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLightModeliv_Idx),
	             GL_ENTRY_CALL_TIME(glLightModeliv_Idx),
	             GL_ENTRY_CALL_TIME(glLightModeliv_Idx) /
	             GL_ENTRY_CALL_COUNT(glLightModeliv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLightModeliv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLightModeliv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLightModeliv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLightModeliv_Idx) = get_ts();
        }


	

}