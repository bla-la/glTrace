#include <glTraceCommon.h>
#include <generated.h>

#define glColorPointervINTEL_wrp						\
    ((void  (*)(GLint size,GLenum type,const void **pointer                                        \
    ))GL_ENTRY_PTR(glColorPointervINTEL_Idx))


GLAPI void  APIENTRY glColorPointervINTEL(GLint size,GLenum type,const void **pointer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glColorPointervINTEL_Idx))
	{
            GL_ENTRY_PTR(glColorPointervINTEL_Idx) = dlsym(RTLD_NEXT,"glColorPointervINTEL");
            if(!GL_ENTRY_PTR(glColorPointervINTEL_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glColorPointervINTEL_Idx))
    	{
            GL_ENTRY_PREV_TS(glColorPointervINTEL_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColorPointervINTEL_wrp(size,type,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColorPointervINTEL_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColorPointervINTEL_Idx) ++;

        GL_ENTRY_LAST_TS(glColorPointervINTEL_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColorPointervINTEL_Idx),
				 GL_ENTRY_LAST_TS(glColorPointervINTEL_Idx));
        if(last_diff > 1000000000){
            printf("glColorPointervINTEL %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColorPointervINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glColorPointervINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glColorPointervINTEL_Idx) /
	             GL_ENTRY_CALL_COUNT(glColorPointervINTEL_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColorPointervINTEL_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColorPointervINTEL_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColorPointervINTEL_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColorPointervINTEL_Idx) = get_ts();
        }


	

}