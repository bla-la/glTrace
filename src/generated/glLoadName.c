#include <glTraceCommon.h>
#include <generated.h>

#define glLoadName_wrp						\
    ((void  (*)(GLuint name                                        \
    ))GL_ENTRY_PTR(glLoadName_Idx))


GLAPI void  APIENTRY glLoadName(GLuint name)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glLoadName_Idx))
	{
            GL_ENTRY_PTR(glLoadName_Idx) = dlsym(RTLD_NEXT,"glLoadName");
            if(!GL_ENTRY_PTR(glLoadName_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glLoadName_Idx))
    	{
            GL_ENTRY_PREV_TS(glLoadName_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLoadName_wrp(name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLoadName_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLoadName_Idx) ++;

        GL_ENTRY_LAST_TS(glLoadName_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLoadName_Idx),
				 GL_ENTRY_LAST_TS(glLoadName_Idx));
        if(last_diff > 1000000000){
            printf("glLoadName %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLoadName_Idx),
	             GL_ENTRY_CALL_TIME(glLoadName_Idx),
	             GL_ENTRY_CALL_TIME(glLoadName_Idx) /
	             GL_ENTRY_CALL_COUNT(glLoadName_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLoadName_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLoadName_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLoadName_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLoadName_Idx) = get_ts();
        }


	

}