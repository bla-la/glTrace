#include <glTraceCommon.h>
#include <generated.h>

#define glTestObjectAPPLE_wrp						\
    ((GLboolean  (*)(GLenum object,GLuint name                                        \
    ))GL_ENTRY_PTR(glTestObjectAPPLE_Idx))


GLAPI GLboolean  APIENTRY glTestObjectAPPLE(GLenum object,GLuint name)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTestObjectAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glTestObjectAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glTestObjectAPPLE_wrp(object,name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTestObjectAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTestObjectAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glTestObjectAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTestObjectAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glTestObjectAPPLE_Idx));


        if(last_diff > 1000000000){
            printf("glTestObjectAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTestObjectAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glTestObjectAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glTestObjectAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glTestObjectAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTestObjectAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTestObjectAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTestObjectAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTestObjectAPPLE_Idx) = get_ts();
        }


	return retval;

}