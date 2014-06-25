#include <glTraceCommon.h>
#include <generated.h>

#define glColor3i_wrp						\
    ((void  (*)(GLint red,GLint green,GLint blue                                        \
    ))GL_ENTRY_PTR(glColor3i_Idx))


GLAPI void  APIENTRY glColor3i(GLint red,GLint green,GLint blue)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glColor3i_Idx))
	{
            GL_ENTRY_PTR(glColor3i_Idx) = dlsym(RTLD_NEXT,"glColor3i");
            if(!GL_ENTRY_PTR(glColor3i_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glColor3i_Idx))
    	{
            GL_ENTRY_PREV_TS(glColor3i_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColor3i_wrp(red,green,blue);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColor3i_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColor3i_Idx) ++;

        GL_ENTRY_LAST_TS(glColor3i_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColor3i_Idx),
				 GL_ENTRY_LAST_TS(glColor3i_Idx));
        if(last_diff > 1000000000){
            printf("glColor3i %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColor3i_Idx),
	             GL_ENTRY_CALL_TIME(glColor3i_Idx),
	             GL_ENTRY_CALL_TIME(glColor3i_Idx) /
	             GL_ENTRY_CALL_COUNT(glColor3i_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColor3i_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColor3i_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColor3i_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColor3i_Idx) = get_ts();
        }


	

}