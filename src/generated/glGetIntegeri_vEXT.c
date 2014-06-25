#include <glTraceCommon.h>
#include <generated.h>

#define glGetIntegeri_vEXT_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLint *data                                        \
    ))GL_ENTRY_PTR(glGetIntegeri_vEXT_Idx))


GLAPI void  APIENTRY glGetIntegeri_vEXT(GLenum target,GLuint index,GLint *data)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetIntegeri_vEXT_Idx))
	{
            GL_ENTRY_PTR(glGetIntegeri_vEXT_Idx) = dlsym(RTLD_NEXT,"glGetIntegeri_vEXT");
            if(!GL_ENTRY_PTR(glGetIntegeri_vEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetIntegeri_vEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetIntegeri_vEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetIntegeri_vEXT_wrp(target,index,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetIntegeri_vEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetIntegeri_vEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetIntegeri_vEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetIntegeri_vEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetIntegeri_vEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetIntegeri_vEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetIntegeri_vEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetIntegeri_vEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetIntegeri_vEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetIntegeri_vEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetIntegeri_vEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetIntegeri_vEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetIntegeri_vEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetIntegeri_vEXT_Idx) = get_ts();
        }


	

}