#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteLists_wrp						\
    ((void  (*)(GLuint list,GLsizei range                                        \
    ))GL_ENTRY_PTR(glDeleteLists_Idx))


GLAPI void  APIENTRY glDeleteLists(GLuint list,GLsizei range)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDeleteLists_Idx))
	{
            GL_ENTRY_PTR(glDeleteLists_Idx) = dlsym(RTLD_NEXT,"glDeleteLists");
            if(!GL_ENTRY_PTR(glDeleteLists_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDeleteLists_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteLists_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteLists_wrp(list,range);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteLists_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteLists_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteLists_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteLists_Idx),
				 GL_ENTRY_LAST_TS(glDeleteLists_Idx));
        if(last_diff > 1000000000){
            printf("glDeleteLists %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteLists_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteLists_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteLists_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteLists_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteLists_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteLists_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteLists_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteLists_Idx) = get_ts();
        }


	

}