#include <glTraceCommon.h>
#include <generated.h>

#define glSetLocalConstantEXT_wrp						\
    ((void  (*)(GLuint id,GLenum type,const void *addr                                        \
    ))GL_ENTRY_PTR(glSetLocalConstantEXT_Idx))


GLAPI void  APIENTRY glSetLocalConstantEXT(GLuint id,GLenum type,const void *addr)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSetLocalConstantEXT_Idx))
	{
            GL_ENTRY_PTR(glSetLocalConstantEXT_Idx) = dlsym(RTLD_NEXT,"glSetLocalConstantEXT");
            if(!GL_ENTRY_PTR(glSetLocalConstantEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSetLocalConstantEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glSetLocalConstantEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSetLocalConstantEXT_wrp(id,type,addr);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSetLocalConstantEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSetLocalConstantEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glSetLocalConstantEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSetLocalConstantEXT_Idx),
				 GL_ENTRY_LAST_TS(glSetLocalConstantEXT_Idx));
        if(last_diff > 1000000000){
            printf("glSetLocalConstantEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSetLocalConstantEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSetLocalConstantEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSetLocalConstantEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glSetLocalConstantEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSetLocalConstantEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSetLocalConstantEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSetLocalConstantEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSetLocalConstantEXT_Idx) = get_ts();
        }


	

}