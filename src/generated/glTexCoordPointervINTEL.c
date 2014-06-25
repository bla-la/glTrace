#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoordPointervINTEL_wrp						\
    ((void  (*)(GLint size,GLenum type,const void **pointer                                        \
    ))GL_ENTRY_PTR(glTexCoordPointervINTEL_Idx))


GLAPI void  APIENTRY glTexCoordPointervINTEL(GLint size,GLenum type,const void **pointer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexCoordPointervINTEL_Idx))
	{
            GL_ENTRY_PTR(glTexCoordPointervINTEL_Idx) = dlsym(RTLD_NEXT,"glTexCoordPointervINTEL");
            if(!GL_ENTRY_PTR(glTexCoordPointervINTEL_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexCoordPointervINTEL_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoordPointervINTEL_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoordPointervINTEL_wrp(size,type,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoordPointervINTEL_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoordPointervINTEL_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoordPointervINTEL_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoordPointervINTEL_Idx),
				 GL_ENTRY_LAST_TS(glTexCoordPointervINTEL_Idx));
        if(last_diff > 1000000000){
            printf("glTexCoordPointervINTEL %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoordPointervINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoordPointervINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoordPointervINTEL_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoordPointervINTEL_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoordPointervINTEL_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoordPointervINTEL_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoordPointervINTEL_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoordPointervINTEL_Idx) = get_ts();
        }


	

}