#include <glTraceCommon.h>
#include <generated.h>

#define glSecondaryColor3us_wrp						\
    ((void  (*)(GLushort red,GLushort green,GLushort blue                                        \
    ))GL_ENTRY_PTR(glSecondaryColor3us_Idx))


GLAPI void  APIENTRY glSecondaryColor3us(GLushort red,GLushort green,GLushort blue)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glSecondaryColor3us_Idx))
    	{
            GL_ENTRY_PREV_TS(glSecondaryColor3us_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSecondaryColor3us_wrp(red,green,blue);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSecondaryColor3us_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSecondaryColor3us_Idx) ++;

        GL_ENTRY_LAST_TS(glSecondaryColor3us_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSecondaryColor3us_Idx),
				 GL_ENTRY_LAST_TS(glSecondaryColor3us_Idx));


        if(last_diff > 1000000000){
            printf("glSecondaryColor3us %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3us_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3us_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3us_Idx) /
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3us_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSecondaryColor3us_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSecondaryColor3us_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSecondaryColor3us_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSecondaryColor3us_Idx) = get_ts();
        }


	

}