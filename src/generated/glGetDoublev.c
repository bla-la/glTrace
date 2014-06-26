#include <glTraceCommon.h>
#include <generated.h>

#define glGetDoublev_wrp						\
    ((void  (*)(GLenum pname,GLdouble *data                                        \
    ))GL_ENTRY_PTR(glGetDoublev_Idx))


GLAPI void  APIENTRY glGetDoublev(GLenum pname,GLdouble *data)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetDoublev_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetDoublev_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetDoublev_wrp(pname,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetDoublev_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetDoublev_Idx) ++;

        GL_ENTRY_LAST_TS(glGetDoublev_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetDoublev_Idx),
				 GL_ENTRY_LAST_TS(glGetDoublev_Idx));


        if(last_diff > 1000000000){
            printf("glGetDoublev %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetDoublev_Idx),
	             GL_ENTRY_CALL_TIME(glGetDoublev_Idx),
	             GL_ENTRY_CALL_TIME(glGetDoublev_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetDoublev_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetDoublev_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetDoublev_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetDoublev_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetDoublev_Idx) = get_ts();
        }


	

}