#include <glTraceCommon.h>
#include <generated.h>

#define glColor3s_wrp						\
    ((void  (*)(GLshort red,GLshort green,GLshort blue                                        \
    ))GL_ENTRY_PTR(glColor3s_Idx))


GLAPI void  APIENTRY glColor3s(GLshort red,GLshort green,GLshort blue)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glColor3s_Idx))
    	{
            GL_ENTRY_PREV_TS(glColor3s_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColor3s_wrp(red,green,blue);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColor3s_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColor3s_Idx) ++;

        GL_ENTRY_LAST_TS(glColor3s_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColor3s_Idx),
				 GL_ENTRY_LAST_TS(glColor3s_Idx));


        if(last_diff > 1000000000){
            printf("glColor3s %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColor3s_Idx),
	             GL_ENTRY_CALL_TIME(glColor3s_Idx),
	             GL_ENTRY_CALL_TIME(glColor3s_Idx) /
	             GL_ENTRY_CALL_COUNT(glColor3s_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColor3s_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColor3s_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColor3s_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColor3s_Idx) = get_ts();
        }


	

}