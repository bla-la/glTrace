#include <glTraceCommon.h>
#include <generated.h>

#define glListBase_wrp						\
    ((void  (*)(GLuint base                                        \
    ))GL_ENTRY_PTR(glListBase_Idx))


GLAPI void  APIENTRY glListBase(GLuint base)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glListBase_Idx))
    	{
            GL_ENTRY_PREV_TS(glListBase_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glListBase_wrp(base);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glListBase_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glListBase_Idx) ++;

        GL_ENTRY_LAST_TS(glListBase_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glListBase_Idx),
				 GL_ENTRY_LAST_TS(glListBase_Idx));


        if(last_diff > 1000000000){
            printf("glListBase %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glListBase_Idx),
	             GL_ENTRY_CALL_TIME(glListBase_Idx),
	             GL_ENTRY_CALL_TIME(glListBase_Idx) /
	             GL_ENTRY_CALL_COUNT(glListBase_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glListBase_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glListBase_Idx) = 0;
             GL_ENTRY_CALL_TIME(glListBase_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glListBase_Idx) = get_ts();
        }


	

}