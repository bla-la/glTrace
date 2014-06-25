#include <glTraceCommon.h>
#include <generated.h>

#define glGetnMapfvARB_wrp						\
    ((void  (*)(GLenum target,GLenum query,GLsizei bufSize,GLfloat *v                                        \
    ))GL_ENTRY_PTR(glGetnMapfvARB_Idx))


GLAPI void  APIENTRY glGetnMapfvARB(GLenum target,GLenum query,GLsizei bufSize,GLfloat *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetnMapfvARB_Idx))
	{
            GL_ENTRY_PTR(glGetnMapfvARB_Idx) = dlsym(RTLD_NEXT,"glGetnMapfvARB");
            if(!GL_ENTRY_PTR(glGetnMapfvARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetnMapfvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetnMapfvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetnMapfvARB_wrp(target,query,bufSize,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetnMapfvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetnMapfvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetnMapfvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetnMapfvARB_Idx),
				 GL_ENTRY_LAST_TS(glGetnMapfvARB_Idx));
        if(last_diff > 1000000000){
            printf("glGetnMapfvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetnMapfvARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnMapfvARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnMapfvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetnMapfvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetnMapfvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetnMapfvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetnMapfvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetnMapfvARB_Idx) = get_ts();
        }


	

}