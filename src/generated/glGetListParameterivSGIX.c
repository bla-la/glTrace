#include <glTraceCommon.h>
#include <generated.h>

#define glGetListParameterivSGIX_wrp						\
    ((void  (*)(GLuint list,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetListParameterivSGIX_Idx))


GLAPI void  APIENTRY glGetListParameterivSGIX(GLuint list,GLenum pname,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetListParameterivSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetListParameterivSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetListParameterivSGIX_wrp(list,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetListParameterivSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetListParameterivSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glGetListParameterivSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetListParameterivSGIX_Idx),
				 GL_ENTRY_LAST_TS(glGetListParameterivSGIX_Idx));


        if(last_diff > 1000000000){
            printf("glGetListParameterivSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetListParameterivSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glGetListParameterivSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glGetListParameterivSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetListParameterivSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetListParameterivSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetListParameterivSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetListParameterivSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetListParameterivSGIX_Idx) = get_ts();
        }


	

}