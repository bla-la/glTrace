#include <glTraceCommon.h>
#include <generated.h>

#define glAccumxOES_wrp						\
    ((void  (*)(GLenum op,GLfixed value                                        \
    ))GL_ENTRY_PTR(glAccumxOES_Idx))


GLAPI void  APIENTRY glAccumxOES(GLenum op,GLfixed value)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glAccumxOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glAccumxOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glAccumxOES_wrp(op,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glAccumxOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glAccumxOES_Idx) ++;

        GL_ENTRY_LAST_TS(glAccumxOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glAccumxOES_Idx),
				 GL_ENTRY_LAST_TS(glAccumxOES_Idx));


        if(last_diff > 1000000000){
            printf("glAccumxOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glAccumxOES_Idx),
	             GL_ENTRY_CALL_TIME(glAccumxOES_Idx),
	             GL_ENTRY_CALL_TIME(glAccumxOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glAccumxOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glAccumxOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glAccumxOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glAccumxOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glAccumxOES_Idx) = get_ts();
        }


	

}