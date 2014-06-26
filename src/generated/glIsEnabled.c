#include <glTraceCommon.h>
#include <generated.h>

#define glIsEnabled_wrp						\
    ((GLboolean  (*)(GLenum cap                                        \
    ))GL_ENTRY_PTR(glIsEnabled_Idx))


GLAPI GLboolean  APIENTRY glIsEnabled(GLenum cap)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIsEnabled_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsEnabled_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsEnabled_wrp(cap);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsEnabled_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsEnabled_Idx) ++;

        GL_ENTRY_LAST_TS(glIsEnabled_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsEnabled_Idx),
				 GL_ENTRY_LAST_TS(glIsEnabled_Idx));


        if(last_diff > 1000000000){
            printf("glIsEnabled %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsEnabled_Idx),
	             GL_ENTRY_CALL_TIME(glIsEnabled_Idx),
	             GL_ENTRY_CALL_TIME(glIsEnabled_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsEnabled_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsEnabled_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsEnabled_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsEnabled_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsEnabled_Idx) = get_ts();
        }


	return retval;

}