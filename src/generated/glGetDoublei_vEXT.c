#include <glTraceCommon.h>
#include <generated.h>

#define glGetDoublei_vEXT_wrp						\
    ((void  (*)(GLenum pname,GLuint index,GLdouble *params                                        \
    ))GL_ENTRY_PTR(glGetDoublei_vEXT_Idx))


GLAPI void  APIENTRY glGetDoublei_vEXT(GLenum pname,GLuint index,GLdouble *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetDoublei_vEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetDoublei_vEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetDoublei_vEXT_wrp(pname,index,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetDoublei_vEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetDoublei_vEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetDoublei_vEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetDoublei_vEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetDoublei_vEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetDoublei_vEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetDoublei_vEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetDoublei_vEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetDoublei_vEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetDoublei_vEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetDoublei_vEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetDoublei_vEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetDoublei_vEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetDoublei_vEXT_Idx) = get_ts();
        }


	

}