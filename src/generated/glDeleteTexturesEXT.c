#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteTexturesEXT_wrp						\
    ((void  (*)(GLsizei n,const GLuint *textures                                        \
    ))GL_ENTRY_PTR(glDeleteTexturesEXT_Idx))


GLAPI void  APIENTRY glDeleteTexturesEXT(GLsizei n,const GLuint *textures)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDeleteTexturesEXT_Idx))
	{
            GL_ENTRY_PTR(glDeleteTexturesEXT_Idx) = dlsym(RTLD_NEXT,"glDeleteTexturesEXT");
            if(!GL_ENTRY_PTR(glDeleteTexturesEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDeleteTexturesEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteTexturesEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteTexturesEXT_wrp(n,textures);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteTexturesEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteTexturesEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteTexturesEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteTexturesEXT_Idx),
				 GL_ENTRY_LAST_TS(glDeleteTexturesEXT_Idx));
        if(last_diff > 1000000000){
            printf("glDeleteTexturesEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteTexturesEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteTexturesEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteTexturesEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteTexturesEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteTexturesEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteTexturesEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteTexturesEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteTexturesEXT_Idx) = get_ts();
        }


	

}