#include <glTraceCommon.h>
#include <generated.h>

#define glIsQueryEXT_wrp						\
    ((GLboolean  (*)(GLuint id                                        \
    ))GL_ENTRY_PTR(glIsQueryEXT_Idx))


GLAPI GLboolean  APIENTRY glIsQueryEXT(GLuint id)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIsQueryEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsQueryEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsQueryEXT_wrp(id);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsQueryEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsQueryEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glIsQueryEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsQueryEXT_Idx),
				 GL_ENTRY_LAST_TS(glIsQueryEXT_Idx));


        if(last_diff > 1000000000){
            printf("glIsQueryEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsQueryEXT_Idx),
	             GL_ENTRY_CALL_TIME(glIsQueryEXT_Idx),
	             GL_ENTRY_CALL_TIME(glIsQueryEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsQueryEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsQueryEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsQueryEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsQueryEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsQueryEXT_Idx) = get_ts();
        }


	return retval;

}