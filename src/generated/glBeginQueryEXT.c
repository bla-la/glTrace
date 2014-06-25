#include <glTraceCommon.h>
#include <generated.h>

#define glBeginQueryEXT_wrp						\
    ((void  (*)(GLenum target,GLuint id                                        \
    ))GL_ENTRY_PTR(glBeginQueryEXT_Idx))


GLAPI void  APIENTRY glBeginQueryEXT(GLenum target,GLuint id)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBeginQueryEXT_Idx))
	{
            GL_ENTRY_PTR(glBeginQueryEXT_Idx) = dlsym(RTLD_NEXT,"glBeginQueryEXT");
            if(!GL_ENTRY_PTR(glBeginQueryEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBeginQueryEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBeginQueryEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBeginQueryEXT_wrp(target,id);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBeginQueryEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBeginQueryEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBeginQueryEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBeginQueryEXT_Idx),
				 GL_ENTRY_LAST_TS(glBeginQueryEXT_Idx));
        if(last_diff > 1000000000){
            printf("glBeginQueryEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBeginQueryEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBeginQueryEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBeginQueryEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBeginQueryEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBeginQueryEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBeginQueryEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBeginQueryEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBeginQueryEXT_Idx) = get_ts();
        }


	

}