#include <glTraceCommon.h>
#include <generated.h>

#define glGetMapxvOES_wrp						\
    ((void  (*)(GLenum target,GLenum query,GLfixed *v                                        \
    ))GL_ENTRY_PTR(glGetMapxvOES_Idx))


GLAPI void  APIENTRY glGetMapxvOES(GLenum target,GLenum query,GLfixed *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetMapxvOES_Idx))
	{
            GL_ENTRY_PTR(glGetMapxvOES_Idx) = dlsym(RTLD_NEXT,"glGetMapxvOES");
            if(!GL_ENTRY_PTR(glGetMapxvOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetMapxvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetMapxvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetMapxvOES_wrp(target,query,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetMapxvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetMapxvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glGetMapxvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetMapxvOES_Idx),
				 GL_ENTRY_LAST_TS(glGetMapxvOES_Idx));
        if(last_diff > 1000000000){
            printf("glGetMapxvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetMapxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetMapxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetMapxvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetMapxvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetMapxvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetMapxvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetMapxvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetMapxvOES_Idx) = get_ts();
        }


	

}