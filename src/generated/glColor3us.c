#include <glTraceCommon.h>
#include <generated.h>

#define glColor3us_wrp						\
    ((void  (*)(GLushort red,GLushort green,GLushort blue                                        \
    ))GL_ENTRY_PTR(glColor3us_Idx))


GLAPI void  APIENTRY glColor3us(GLushort red,GLushort green,GLushort blue)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glColor3us_Idx))
	{
            GL_ENTRY_PTR(glColor3us_Idx) = dlsym(RTLD_NEXT,"glColor3us");
            if(!GL_ENTRY_PTR(glColor3us_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glColor3us_Idx))
    	{
            GL_ENTRY_PREV_TS(glColor3us_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColor3us_wrp(red,green,blue);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColor3us_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColor3us_Idx) ++;

        GL_ENTRY_LAST_TS(glColor3us_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColor3us_Idx),
				 GL_ENTRY_LAST_TS(glColor3us_Idx));
        if(last_diff > 1000000000){
            printf("glColor3us %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColor3us_Idx),
	             GL_ENTRY_CALL_TIME(glColor3us_Idx),
	             GL_ENTRY_CALL_TIME(glColor3us_Idx) /
	             GL_ENTRY_CALL_COUNT(glColor3us_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColor3us_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColor3us_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColor3us_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColor3us_Idx) = get_ts();
        }


	

}