#include <glTraceCommon.h>
#include <generated.h>

#define glColorMask_wrp						\
    ((void  (*)(GLboolean red,GLboolean green,GLboolean blue,GLboolean alpha                                        \
    ))GL_ENTRY_PTR(glColorMask_Idx))


GLAPI void  APIENTRY glColorMask(GLboolean red,GLboolean green,GLboolean blue,GLboolean alpha)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glColorMask_Idx))
    	{
            GL_ENTRY_PREV_TS(glColorMask_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColorMask_wrp(red,green,blue,alpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColorMask_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColorMask_Idx) ++;

        GL_ENTRY_LAST_TS(glColorMask_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColorMask_Idx),
				 GL_ENTRY_LAST_TS(glColorMask_Idx));


        if(last_diff > 1000000000){
            printf("glColorMask %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColorMask_Idx),
	             GL_ENTRY_CALL_TIME(glColorMask_Idx),
	             GL_ENTRY_CALL_TIME(glColorMask_Idx) /
	             GL_ENTRY_CALL_COUNT(glColorMask_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColorMask_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColorMask_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColorMask_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColorMask_Idx) = get_ts();
        }


	

}