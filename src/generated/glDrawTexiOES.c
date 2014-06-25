#include <glTraceCommon.h>
#include <generated.h>

#define glDrawTexiOES_wrp						\
    ((void  (*)(GLint x,GLint y,GLint z,GLint width,GLint height                                        \
    ))GL_ENTRY_PTR(glDrawTexiOES_Idx))


GLAPI void  APIENTRY glDrawTexiOES(GLint x,GLint y,GLint z,GLint width,GLint height)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDrawTexiOES_Idx))
	{
            GL_ENTRY_PTR(glDrawTexiOES_Idx) = dlsym(RTLD_NEXT,"glDrawTexiOES");
            if(!GL_ENTRY_PTR(glDrawTexiOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDrawTexiOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawTexiOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawTexiOES_wrp(x,y,z,width,height);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawTexiOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawTexiOES_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawTexiOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawTexiOES_Idx),
				 GL_ENTRY_LAST_TS(glDrawTexiOES_Idx));
        if(last_diff > 1000000000){
            printf("glDrawTexiOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawTexiOES_Idx),
	             GL_ENTRY_CALL_TIME(glDrawTexiOES_Idx),
	             GL_ENTRY_CALL_TIME(glDrawTexiOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawTexiOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawTexiOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawTexiOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawTexiOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawTexiOES_Idx) = get_ts();
        }


	

}