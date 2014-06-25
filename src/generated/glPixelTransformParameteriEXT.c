#include <glTraceCommon.h>
#include <generated.h>

#define glPixelTransformParameteriEXT_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLint param                                        \
    ))GL_ENTRY_PTR(glPixelTransformParameteriEXT_Idx))


GLAPI void  APIENTRY glPixelTransformParameteriEXT(GLenum target,GLenum pname,GLint param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPixelTransformParameteriEXT_Idx))
	{
            GL_ENTRY_PTR(glPixelTransformParameteriEXT_Idx) = dlsym(RTLD_NEXT,"glPixelTransformParameteriEXT");
            if(!GL_ENTRY_PTR(glPixelTransformParameteriEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPixelTransformParameteriEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glPixelTransformParameteriEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPixelTransformParameteriEXT_wrp(target,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPixelTransformParameteriEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPixelTransformParameteriEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glPixelTransformParameteriEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPixelTransformParameteriEXT_Idx),
				 GL_ENTRY_LAST_TS(glPixelTransformParameteriEXT_Idx));
        if(last_diff > 1000000000){
            printf("glPixelTransformParameteriEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPixelTransformParameteriEXT_Idx),
	             GL_ENTRY_CALL_TIME(glPixelTransformParameteriEXT_Idx),
	             GL_ENTRY_CALL_TIME(glPixelTransformParameteriEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glPixelTransformParameteriEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPixelTransformParameteriEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPixelTransformParameteriEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPixelTransformParameteriEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPixelTransformParameteriEXT_Idx) = get_ts();
        }


	

}