#include <glTraceCommon.h>
#include <generated.h>

#define glColor3usv_wrp						\
    ((void  (*)(const GLushort *v                                        \
    ))GL_ENTRY_PTR(glColor3usv_Idx))


GLAPI void  APIENTRY glColor3usv(const GLushort *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glColor3usv_Idx))
    	{
            GL_ENTRY_PREV_TS(glColor3usv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColor3usv_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColor3usv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColor3usv_Idx) ++;

        GL_ENTRY_LAST_TS(glColor3usv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColor3usv_Idx),
				 GL_ENTRY_LAST_TS(glColor3usv_Idx));


        if(last_diff > 1000000000){
            printf("glColor3usv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColor3usv_Idx),
	             GL_ENTRY_CALL_TIME(glColor3usv_Idx),
	             GL_ENTRY_CALL_TIME(glColor3usv_Idx) /
	             GL_ENTRY_CALL_COUNT(glColor3usv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColor3usv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColor3usv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColor3usv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColor3usv_Idx) = get_ts();
        }


	

}