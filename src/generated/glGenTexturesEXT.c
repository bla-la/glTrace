#include <glTraceCommon.h>
#include <generated.h>

#define glGenTexturesEXT_wrp						\
    ((void  (*)(GLsizei n,GLuint *textures                                        \
    ))GL_ENTRY_PTR(glGenTexturesEXT_Idx))


GLAPI void  APIENTRY glGenTexturesEXT(GLsizei n,GLuint *textures)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGenTexturesEXT_Idx))
	{
            GL_ENTRY_PTR(glGenTexturesEXT_Idx) = dlsym(RTLD_NEXT,"glGenTexturesEXT");
            if(!GL_ENTRY_PTR(glGenTexturesEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGenTexturesEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenTexturesEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGenTexturesEXT_wrp(n,textures);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenTexturesEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenTexturesEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGenTexturesEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenTexturesEXT_Idx),
				 GL_ENTRY_LAST_TS(glGenTexturesEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGenTexturesEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenTexturesEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGenTexturesEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGenTexturesEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenTexturesEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenTexturesEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenTexturesEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenTexturesEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenTexturesEXT_Idx) = get_ts();
        }


	

}