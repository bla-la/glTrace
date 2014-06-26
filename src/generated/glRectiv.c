#include <glTraceCommon.h>
#include <generated.h>

#define glRectiv_wrp						\
    ((void  (*)(const GLint *v1,const GLint *v2                                        \
    ))GL_ENTRY_PTR(glRectiv_Idx))


GLAPI void  APIENTRY glRectiv(const GLint *v1,const GLint *v2)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glRectiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glRectiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRectiv_wrp(v1,v2);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRectiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRectiv_Idx) ++;

        GL_ENTRY_LAST_TS(glRectiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRectiv_Idx),
				 GL_ENTRY_LAST_TS(glRectiv_Idx));


        if(last_diff > 1000000000){
            printf("glRectiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRectiv_Idx),
	             GL_ENTRY_CALL_TIME(glRectiv_Idx),
	             GL_ENTRY_CALL_TIME(glRectiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glRectiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRectiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRectiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRectiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRectiv_Idx) = get_ts();
        }


	

}