#include <glTraceCommon.h>
#include <generated.h>

#define glGetPixelTransformParameterivEXT_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetPixelTransformParameterivEXT_Idx))


GLAPI void  APIENTRY glGetPixelTransformParameterivEXT(GLenum target,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetPixelTransformParameterivEXT_Idx))
	{
            GL_ENTRY_PTR(glGetPixelTransformParameterivEXT_Idx) = dlsym(RTLD_NEXT,"glGetPixelTransformParameterivEXT");
            if(!GL_ENTRY_PTR(glGetPixelTransformParameterivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetPixelTransformParameterivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPixelTransformParameterivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetPixelTransformParameterivEXT_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPixelTransformParameterivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPixelTransformParameterivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPixelTransformParameterivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPixelTransformParameterivEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetPixelTransformParameterivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetPixelTransformParameterivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPixelTransformParameterivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetPixelTransformParameterivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetPixelTransformParameterivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPixelTransformParameterivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPixelTransformParameterivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPixelTransformParameterivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPixelTransformParameterivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPixelTransformParameterivEXT_Idx) = get_ts();
        }


	

}