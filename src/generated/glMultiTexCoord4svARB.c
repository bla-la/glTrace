#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord4svARB_wrp						\
    ((void  (*)(GLenum target,const GLshort *v                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord4svARB_Idx))


GLAPI void  APIENTRY glMultiTexCoord4svARB(GLenum target,const GLshort *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexCoord4svARB_Idx))
	{
            GL_ENTRY_PTR(glMultiTexCoord4svARB_Idx) = dlsym(RTLD_NEXT,"glMultiTexCoord4svARB");
            if(!GL_ENTRY_PTR(glMultiTexCoord4svARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexCoord4svARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord4svARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord4svARB_wrp(target,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord4svARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord4svARB_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord4svARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord4svARB_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord4svARB_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexCoord4svARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord4svARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord4svARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord4svARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord4svARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord4svARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord4svARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord4svARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord4svARB_Idx) = get_ts();
        }


	

}