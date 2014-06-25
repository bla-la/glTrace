#include <glTraceCommon.h>
#include <generated.h>

#define glListParameterivSGIX_wrp						\
    ((void  (*)(GLuint list,GLenum pname,const GLint *params                                        \
    ))GL_ENTRY_PTR(glListParameterivSGIX_Idx))


GLAPI void  APIENTRY glListParameterivSGIX(GLuint list,GLenum pname,const GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glListParameterivSGIX_Idx))
	{
            GL_ENTRY_PTR(glListParameterivSGIX_Idx) = dlsym(RTLD_NEXT,"glListParameterivSGIX");
            if(!GL_ENTRY_PTR(glListParameterivSGIX_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glListParameterivSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glListParameterivSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glListParameterivSGIX_wrp(list,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glListParameterivSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glListParameterivSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glListParameterivSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glListParameterivSGIX_Idx),
				 GL_ENTRY_LAST_TS(glListParameterivSGIX_Idx));
        if(last_diff > 1000000000){
            printf("glListParameterivSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glListParameterivSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glListParameterivSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glListParameterivSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glListParameterivSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glListParameterivSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glListParameterivSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glListParameterivSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glListParameterivSGIX_Idx) = get_ts();
        }


	

}