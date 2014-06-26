#include <glTraceCommon.h>
#include <generated.h>

#define glGetnMapdvARB_wrp						\
    ((void  (*)(GLenum target,GLenum query,GLsizei bufSize,GLdouble *v                                        \
    ))GL_ENTRY_PTR(glGetnMapdvARB_Idx))


GLAPI void  APIENTRY glGetnMapdvARB(GLenum target,GLenum query,GLsizei bufSize,GLdouble *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetnMapdvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetnMapdvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetnMapdvARB_wrp(target,query,bufSize,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetnMapdvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetnMapdvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetnMapdvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetnMapdvARB_Idx),
				 GL_ENTRY_LAST_TS(glGetnMapdvARB_Idx));


        if(last_diff > 1000000000){
            printf("glGetnMapdvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetnMapdvARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnMapdvARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnMapdvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetnMapdvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetnMapdvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetnMapdvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetnMapdvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetnMapdvARB_Idx) = get_ts();
        }


	

}