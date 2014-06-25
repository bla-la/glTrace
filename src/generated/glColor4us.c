#include <glTraceCommon.h>
#include <generated.h>

#define glColor4us_wrp						\
    ((void  (*)(GLushort red,GLushort green,GLushort blue,GLushort alpha                                        \
    ))GL_ENTRY_PTR(glColor4us_Idx))


GLAPI void  APIENTRY glColor4us(GLushort red,GLushort green,GLushort blue,GLushort alpha)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glColor4us_Idx))
	{
            GL_ENTRY_PTR(glColor4us_Idx) = dlsym(RTLD_NEXT,"glColor4us");
            if(!GL_ENTRY_PTR(glColor4us_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glColor4us_Idx))
    	{
            GL_ENTRY_PREV_TS(glColor4us_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColor4us_wrp(red,green,blue,alpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColor4us_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColor4us_Idx) ++;

        GL_ENTRY_LAST_TS(glColor4us_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColor4us_Idx),
				 GL_ENTRY_LAST_TS(glColor4us_Idx));
        if(last_diff > 1000000000){
            printf("glColor4us %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColor4us_Idx),
	             GL_ENTRY_CALL_TIME(glColor4us_Idx),
	             GL_ENTRY_CALL_TIME(glColor4us_Idx) /
	             GL_ENTRY_CALL_COUNT(glColor4us_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColor4us_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColor4us_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColor4us_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColor4us_Idx) = get_ts();
        }


	

}