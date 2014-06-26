#include <glTraceCommon.h>
#include <generated.h>

#define glEndQueryIndexed_wrp						\
    ((void  (*)(GLenum target,GLuint index                                        \
    ))GL_ENTRY_PTR(glEndQueryIndexed_Idx))


GLAPI void  APIENTRY glEndQueryIndexed(GLenum target,GLuint index)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glEndQueryIndexed_Idx))
    	{
            GL_ENTRY_PREV_TS(glEndQueryIndexed_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEndQueryIndexed_wrp(target,index);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEndQueryIndexed_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEndQueryIndexed_Idx) ++;

        GL_ENTRY_LAST_TS(glEndQueryIndexed_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEndQueryIndexed_Idx),
				 GL_ENTRY_LAST_TS(glEndQueryIndexed_Idx));


        if(last_diff > 1000000000){
            printf("glEndQueryIndexed %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEndQueryIndexed_Idx),
	             GL_ENTRY_CALL_TIME(glEndQueryIndexed_Idx),
	             GL_ENTRY_CALL_TIME(glEndQueryIndexed_Idx) /
	             GL_ENTRY_CALL_COUNT(glEndQueryIndexed_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEndQueryIndexed_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEndQueryIndexed_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEndQueryIndexed_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEndQueryIndexed_Idx) = get_ts();
        }


	

}