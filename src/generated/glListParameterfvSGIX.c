#include <glTraceCommon.h>
#include <generated.h>

#define glListParameterfvSGIX_wrp						\
    ((void  (*)(GLuint list,GLenum pname,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glListParameterfvSGIX_Idx))


GLAPI void  APIENTRY glListParameterfvSGIX(GLuint list,GLenum pname,const GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glListParameterfvSGIX_Idx))
	{
            GL_ENTRY_PTR(glListParameterfvSGIX_Idx) = dlsym(RTLD_NEXT,"glListParameterfvSGIX");
            if(!GL_ENTRY_PTR(glListParameterfvSGIX_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glListParameterfvSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glListParameterfvSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glListParameterfvSGIX_wrp(list,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glListParameterfvSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glListParameterfvSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glListParameterfvSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glListParameterfvSGIX_Idx),
				 GL_ENTRY_LAST_TS(glListParameterfvSGIX_Idx));
        if(last_diff > 1000000000){
            printf("glListParameterfvSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glListParameterfvSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glListParameterfvSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glListParameterfvSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glListParameterfvSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glListParameterfvSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glListParameterfvSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glListParameterfvSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glListParameterfvSGIX_Idx) = get_ts();
        }


	

}