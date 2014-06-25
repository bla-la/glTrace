#include <glTraceCommon.h>
#include <generated.h>

#define glObjectLabel_wrp						\
    ((void  (*)(GLenum identifier,GLuint name,GLsizei length,const GLchar *label                                        \
    ))GL_ENTRY_PTR(glObjectLabel_Idx))


GLAPI void  APIENTRY glObjectLabel(GLenum identifier,GLuint name,GLsizei length,const GLchar *label)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glObjectLabel_Idx))
	{
            GL_ENTRY_PTR(glObjectLabel_Idx) = dlsym(RTLD_NEXT,"glObjectLabel");
            if(!GL_ENTRY_PTR(glObjectLabel_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glObjectLabel_Idx))
    	{
            GL_ENTRY_PREV_TS(glObjectLabel_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glObjectLabel_wrp(identifier,name,length,label);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glObjectLabel_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glObjectLabel_Idx) ++;

        GL_ENTRY_LAST_TS(glObjectLabel_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glObjectLabel_Idx),
				 GL_ENTRY_LAST_TS(glObjectLabel_Idx));
        if(last_diff > 1000000000){
            printf("glObjectLabel %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glObjectLabel_Idx),
	             GL_ENTRY_CALL_TIME(glObjectLabel_Idx),
	             GL_ENTRY_CALL_TIME(glObjectLabel_Idx) /
	             GL_ENTRY_CALL_COUNT(glObjectLabel_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glObjectLabel_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glObjectLabel_Idx) = 0;
             GL_ENTRY_CALL_TIME(glObjectLabel_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glObjectLabel_Idx) = get_ts();
        }


	

}