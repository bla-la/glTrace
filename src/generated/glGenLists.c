#include <glTraceCommon.h>
#include <generated.h>

#define glGenLists_wrp						\
    ((GLuint  (*)(GLsizei range                                        \
    ))GL_ENTRY_PTR(glGenLists_Idx))


GLAPI GLuint  APIENTRY glGenLists(GLsizei range)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGenLists_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenLists_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLuint  retval = glGenLists_wrp(range);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenLists_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenLists_Idx) ++;

        GL_ENTRY_LAST_TS(glGenLists_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenLists_Idx),
				 GL_ENTRY_LAST_TS(glGenLists_Idx));


        if(last_diff > 1000000000){
            printf("glGenLists %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenLists_Idx),
	             GL_ENTRY_CALL_TIME(glGenLists_Idx),
	             GL_ENTRY_CALL_TIME(glGenLists_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenLists_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenLists_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenLists_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenLists_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenLists_Idx) = get_ts();
        }


	return retval;

}