#include <glTraceCommon.h>
#include <generated.h>

#define glGetMapdv_wrp						\
    ((void  (*)(GLenum target,GLenum query,GLdouble *v                                        \
    ))GL_ENTRY_PTR(glGetMapdv_Idx))


GLAPI void  APIENTRY glGetMapdv(GLenum target,GLenum query,GLdouble *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetMapdv_Idx))
	{
            GL_ENTRY_PTR(glGetMapdv_Idx) = dlsym(RTLD_NEXT,"glGetMapdv");
            if(!GL_ENTRY_PTR(glGetMapdv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetMapdv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetMapdv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetMapdv_wrp(target,query,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetMapdv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetMapdv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetMapdv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetMapdv_Idx),
				 GL_ENTRY_LAST_TS(glGetMapdv_Idx));
        if(last_diff > 1000000000){
            printf("glGetMapdv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetMapdv_Idx),
	             GL_ENTRY_CALL_TIME(glGetMapdv_Idx),
	             GL_ENTRY_CALL_TIME(glGetMapdv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetMapdv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetMapdv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetMapdv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetMapdv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetMapdv_Idx) = get_ts();
        }


	

}