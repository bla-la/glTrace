#include <glTraceCommon.h>
#include <generated.h>

#define glGetShaderiv_wrp						\
    ((void  (*)(GLuint shader,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetShaderiv_Idx))


GLAPI void  APIENTRY glGetShaderiv(GLuint shader,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetShaderiv_Idx))
	{
            GL_ENTRY_PTR(glGetShaderiv_Idx) = dlsym(RTLD_NEXT,"glGetShaderiv");
            if(!GL_ENTRY_PTR(glGetShaderiv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetShaderiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetShaderiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetShaderiv_wrp(shader,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetShaderiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetShaderiv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetShaderiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetShaderiv_Idx),
				 GL_ENTRY_LAST_TS(glGetShaderiv_Idx));
        if(last_diff > 1000000000){
            printf("glGetShaderiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetShaderiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetShaderiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetShaderiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetShaderiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetShaderiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetShaderiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetShaderiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetShaderiv_Idx) = get_ts();
        }


	

}