#include <glTraceCommon.h>
#include <generated.h>

#define glGetnMapivARB_wrp						\
    ((void  (*)(GLenum target,GLenum query,GLsizei bufSize,GLint *v                                        \
    ))GL_ENTRY_PTR(glGetnMapivARB_Idx))


GLAPI void  APIENTRY glGetnMapivARB(GLenum target,GLenum query,GLsizei bufSize,GLint *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetnMapivARB_Idx))
	{
            GL_ENTRY_PTR(glGetnMapivARB_Idx) = dlsym(RTLD_NEXT,"glGetnMapivARB");
            if(!GL_ENTRY_PTR(glGetnMapivARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetnMapivARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetnMapivARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetnMapivARB_wrp(target,query,bufSize,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetnMapivARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetnMapivARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetnMapivARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetnMapivARB_Idx),
				 GL_ENTRY_LAST_TS(glGetnMapivARB_Idx));
        if(last_diff > 1000000000){
            printf("glGetnMapivARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetnMapivARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnMapivARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnMapivARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetnMapivARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetnMapivARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetnMapivARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetnMapivARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetnMapivARB_Idx) = get_ts();
        }


	

}