#include <glTraceCommon.h>
#include <generated.h>

#define glGetObjectParameterivAPPLE_wrp						\
    ((void  (*)(GLenum objectType,GLuint name,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetObjectParameterivAPPLE_Idx))


GLAPI void  APIENTRY glGetObjectParameterivAPPLE(GLenum objectType,GLuint name,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetObjectParameterivAPPLE_Idx))
	{
            GL_ENTRY_PTR(glGetObjectParameterivAPPLE_Idx) = dlsym(RTLD_NEXT,"glGetObjectParameterivAPPLE");
            if(!GL_ENTRY_PTR(glGetObjectParameterivAPPLE_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetObjectParameterivAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetObjectParameterivAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetObjectParameterivAPPLE_wrp(objectType,name,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetObjectParameterivAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetObjectParameterivAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glGetObjectParameterivAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetObjectParameterivAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glGetObjectParameterivAPPLE_Idx));
        if(last_diff > 1000000000){
            printf("glGetObjectParameterivAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetObjectParameterivAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glGetObjectParameterivAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glGetObjectParameterivAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetObjectParameterivAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetObjectParameterivAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetObjectParameterivAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetObjectParameterivAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetObjectParameterivAPPLE_Idx) = get_ts();
        }


	

}