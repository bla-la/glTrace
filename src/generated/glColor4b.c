#include <glTraceCommon.h>
#include <generated.h>

#define glColor4b_wrp						\
    ((void  (*)(GLbyte red,GLbyte green,GLbyte blue,GLbyte alpha                                        \
    ))GL_ENTRY_PTR(glColor4b_Idx))


GLAPI void  APIENTRY glColor4b(GLbyte red,GLbyte green,GLbyte blue,GLbyte alpha)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glColor4b_Idx))
	{
            GL_ENTRY_PTR(glColor4b_Idx) = dlsym(RTLD_NEXT,"glColor4b");
            if(!GL_ENTRY_PTR(glColor4b_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glColor4b_Idx))
    	{
            GL_ENTRY_PREV_TS(glColor4b_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColor4b_wrp(red,green,blue,alpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColor4b_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColor4b_Idx) ++;

        GL_ENTRY_LAST_TS(glColor4b_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColor4b_Idx),
				 GL_ENTRY_LAST_TS(glColor4b_Idx));
        if(last_diff > 1000000000){
            printf("glColor4b %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColor4b_Idx),
	             GL_ENTRY_CALL_TIME(glColor4b_Idx),
	             GL_ENTRY_CALL_TIME(glColor4b_Idx) /
	             GL_ENTRY_CALL_COUNT(glColor4b_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColor4b_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColor4b_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColor4b_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColor4b_Idx) = get_ts();
        }


	

}