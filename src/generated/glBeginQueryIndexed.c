#include <glTraceCommon.h>
#include <generated.h>

#define glBeginQueryIndexed_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLuint id                                        \
    ))GL_ENTRY_PTR(glBeginQueryIndexed_Idx))


GLAPI void  APIENTRY glBeginQueryIndexed(GLenum target,GLuint index,GLuint id)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBeginQueryIndexed_Idx))
	{
            GL_ENTRY_PTR(glBeginQueryIndexed_Idx) = dlsym(RTLD_NEXT,"glBeginQueryIndexed");
            if(!GL_ENTRY_PTR(glBeginQueryIndexed_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBeginQueryIndexed_Idx))
    	{
            GL_ENTRY_PREV_TS(glBeginQueryIndexed_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBeginQueryIndexed_wrp(target,index,id);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBeginQueryIndexed_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBeginQueryIndexed_Idx) ++;

        GL_ENTRY_LAST_TS(glBeginQueryIndexed_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBeginQueryIndexed_Idx),
				 GL_ENTRY_LAST_TS(glBeginQueryIndexed_Idx));
        if(last_diff > 1000000000){
            printf("glBeginQueryIndexed %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBeginQueryIndexed_Idx),
	             GL_ENTRY_CALL_TIME(glBeginQueryIndexed_Idx),
	             GL_ENTRY_CALL_TIME(glBeginQueryIndexed_Idx) /
	             GL_ENTRY_CALL_COUNT(glBeginQueryIndexed_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBeginQueryIndexed_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBeginQueryIndexed_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBeginQueryIndexed_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBeginQueryIndexed_Idx) = get_ts();
        }


	

}