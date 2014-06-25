#include <glTraceCommon.h>
#include <generated.h>

#define glVertex3bOES_wrp						\
    ((void  (*)(GLbyte x,GLbyte y                                        \
    ))GL_ENTRY_PTR(glVertex3bOES_Idx))


GLAPI void  APIENTRY glVertex3bOES(GLbyte x,GLbyte y)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertex3bOES_Idx))
	{
            GL_ENTRY_PTR(glVertex3bOES_Idx) = dlsym(RTLD_NEXT,"glVertex3bOES");
            if(!GL_ENTRY_PTR(glVertex3bOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertex3bOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertex3bOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertex3bOES_wrp(x,y);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertex3bOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertex3bOES_Idx) ++;

        GL_ENTRY_LAST_TS(glVertex3bOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertex3bOES_Idx),
				 GL_ENTRY_LAST_TS(glVertex3bOES_Idx));
        if(last_diff > 1000000000){
            printf("glVertex3bOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertex3bOES_Idx),
	             GL_ENTRY_CALL_TIME(glVertex3bOES_Idx),
	             GL_ENTRY_CALL_TIME(glVertex3bOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertex3bOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertex3bOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertex3bOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertex3bOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertex3bOES_Idx) = get_ts();
        }


	

}