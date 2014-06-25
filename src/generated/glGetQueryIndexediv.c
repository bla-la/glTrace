#include <glTraceCommon.h>
#include <generated.h>

#define glGetQueryIndexediv_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetQueryIndexediv_Idx))


GLAPI void  APIENTRY glGetQueryIndexediv(GLenum target,GLuint index,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetQueryIndexediv_Idx))
	{
            GL_ENTRY_PTR(glGetQueryIndexediv_Idx) = dlsym(RTLD_NEXT,"glGetQueryIndexediv");
            if(!GL_ENTRY_PTR(glGetQueryIndexediv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetQueryIndexediv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetQueryIndexediv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetQueryIndexediv_wrp(target,index,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetQueryIndexediv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetQueryIndexediv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetQueryIndexediv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetQueryIndexediv_Idx),
				 GL_ENTRY_LAST_TS(glGetQueryIndexediv_Idx));
        if(last_diff > 1000000000){
            printf("glGetQueryIndexediv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetQueryIndexediv_Idx),
	             GL_ENTRY_CALL_TIME(glGetQueryIndexediv_Idx),
	             GL_ENTRY_CALL_TIME(glGetQueryIndexediv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetQueryIndexediv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetQueryIndexediv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetQueryIndexediv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetQueryIndexediv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetQueryIndexediv_Idx) = get_ts();
        }


	

}