#include <glTraceCommon.h>
#include <generated.h>

#define glGetnTexImageARB_wrp						\
    ((void  (*)(GLenum target,GLint level,GLenum format,GLenum type,GLsizei bufSize,void *img                                        \
    ))GL_ENTRY_PTR(glGetnTexImageARB_Idx))


GLAPI void  APIENTRY glGetnTexImageARB(GLenum target,GLint level,GLenum format,GLenum type,GLsizei bufSize,void *img)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetnTexImageARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetnTexImageARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetnTexImageARB_wrp(target,level,format,type,bufSize,img);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetnTexImageARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetnTexImageARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetnTexImageARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetnTexImageARB_Idx),
				 GL_ENTRY_LAST_TS(glGetnTexImageARB_Idx));


        if(last_diff > 1000000000){
            printf("glGetnTexImageARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetnTexImageARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnTexImageARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnTexImageARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetnTexImageARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetnTexImageARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetnTexImageARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetnTexImageARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetnTexImageARB_Idx) = get_ts();
        }


	

}