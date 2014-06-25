#include <glTraceCommon.h>
#include <generated.h>

#define glGetMapiv_wrp						\
    ((void  (*)(GLenum target,GLenum query,GLint *v                                        \
    ))GL_ENTRY_PTR(glGetMapiv_Idx))


GLAPI void  APIENTRY glGetMapiv(GLenum target,GLenum query,GLint *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetMapiv_Idx))
	{
            GL_ENTRY_PTR(glGetMapiv_Idx) = dlsym(RTLD_NEXT,"glGetMapiv");
            if(!GL_ENTRY_PTR(glGetMapiv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetMapiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetMapiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetMapiv_wrp(target,query,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetMapiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetMapiv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetMapiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetMapiv_Idx),
				 GL_ENTRY_LAST_TS(glGetMapiv_Idx));
        if(last_diff > 1000000000){
            printf("glGetMapiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetMapiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetMapiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetMapiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetMapiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetMapiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetMapiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetMapiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetMapiv_Idx) = get_ts();
        }


	

}