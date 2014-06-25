#include <glTraceCommon.h>
#include <generated.h>

#define glIsQuery_wrp						\
    ((GLboolean  (*)(GLuint id                                        \
    ))GL_ENTRY_PTR(glIsQuery_Idx))


GLAPI GLboolean  APIENTRY glIsQuery(GLuint id)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glIsQuery_Idx))
	{
            GL_ENTRY_PTR(glIsQuery_Idx) = dlsym(RTLD_NEXT,"glIsQuery");
            if(!GL_ENTRY_PTR(glIsQuery_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glIsQuery_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsQuery_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsQuery_wrp(id);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsQuery_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsQuery_Idx) ++;

        GL_ENTRY_LAST_TS(glIsQuery_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsQuery_Idx),
				 GL_ENTRY_LAST_TS(glIsQuery_Idx));
        if(last_diff > 1000000000){
            printf("glIsQuery %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsQuery_Idx),
	             GL_ENTRY_CALL_TIME(glIsQuery_Idx),
	             GL_ENTRY_CALL_TIME(glIsQuery_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsQuery_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsQuery_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsQuery_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsQuery_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsQuery_Idx) = get_ts();
        }


	return retval;

}