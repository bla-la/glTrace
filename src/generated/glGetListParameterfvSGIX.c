#include <glTraceCommon.h>
#include <generated.h>

#define glGetListParameterfvSGIX_wrp						\
    ((void  (*)(GLuint list,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetListParameterfvSGIX_Idx))


GLAPI void  APIENTRY glGetListParameterfvSGIX(GLuint list,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetListParameterfvSGIX_Idx))
	{
            GL_ENTRY_PTR(glGetListParameterfvSGIX_Idx) = dlsym(RTLD_NEXT,"glGetListParameterfvSGIX");
            if(!GL_ENTRY_PTR(glGetListParameterfvSGIX_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetListParameterfvSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetListParameterfvSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetListParameterfvSGIX_wrp(list,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetListParameterfvSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetListParameterfvSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glGetListParameterfvSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetListParameterfvSGIX_Idx),
				 GL_ENTRY_LAST_TS(glGetListParameterfvSGIX_Idx));
        if(last_diff > 1000000000){
            printf("glGetListParameterfvSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetListParameterfvSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glGetListParameterfvSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glGetListParameterfvSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetListParameterfvSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetListParameterfvSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetListParameterfvSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetListParameterfvSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetListParameterfvSGIX_Idx) = get_ts();
        }


	

}