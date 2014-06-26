#include <glTraceCommon.h>
#include <generated.h>

#define glColor3uiv_wrp						\
    ((void  (*)(const GLuint *v                                        \
    ))GL_ENTRY_PTR(glColor3uiv_Idx))


GLAPI void  APIENTRY glColor3uiv(const GLuint *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glColor3uiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glColor3uiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColor3uiv_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColor3uiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColor3uiv_Idx) ++;

        GL_ENTRY_LAST_TS(glColor3uiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColor3uiv_Idx),
				 GL_ENTRY_LAST_TS(glColor3uiv_Idx));


        if(last_diff > 1000000000){
            printf("glColor3uiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColor3uiv_Idx),
	             GL_ENTRY_CALL_TIME(glColor3uiv_Idx),
	             GL_ENTRY_CALL_TIME(glColor3uiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glColor3uiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColor3uiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColor3uiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColor3uiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColor3uiv_Idx) = get_ts();
        }


	

}