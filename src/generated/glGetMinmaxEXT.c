#include <glTraceCommon.h>
#include <generated.h>

#define glGetMinmaxEXT_wrp						\
    ((void  (*)(GLenum target,GLboolean reset,GLenum format,GLenum type,void *values                                        \
    ))GL_ENTRY_PTR(glGetMinmaxEXT_Idx))


GLAPI void  APIENTRY glGetMinmaxEXT(GLenum target,GLboolean reset,GLenum format,GLenum type,void *values)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetMinmaxEXT_Idx))
	{
            GL_ENTRY_PTR(glGetMinmaxEXT_Idx) = dlsym(RTLD_NEXT,"glGetMinmaxEXT");
            if(!GL_ENTRY_PTR(glGetMinmaxEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetMinmaxEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetMinmaxEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetMinmaxEXT_wrp(target,reset,format,type,values);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetMinmaxEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetMinmaxEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetMinmaxEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetMinmaxEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetMinmaxEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetMinmaxEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetMinmaxEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetMinmaxEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetMinmaxEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetMinmaxEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetMinmaxEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetMinmaxEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetMinmaxEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetMinmaxEXT_Idx) = get_ts();
        }


	

}