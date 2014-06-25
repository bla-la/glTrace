#include <glTraceCommon.h>
#include <generated.h>

#define glGetTexGenivOES_wrp						\
    ((void  (*)(GLenum coord,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetTexGenivOES_Idx))


GLAPI void  APIENTRY glGetTexGenivOES(GLenum coord,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetTexGenivOES_Idx))
	{
            GL_ENTRY_PTR(glGetTexGenivOES_Idx) = dlsym(RTLD_NEXT,"glGetTexGenivOES");
            if(!GL_ENTRY_PTR(glGetTexGenivOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetTexGenivOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTexGenivOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTexGenivOES_wrp(coord,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTexGenivOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTexGenivOES_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTexGenivOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTexGenivOES_Idx),
				 GL_ENTRY_LAST_TS(glGetTexGenivOES_Idx));
        if(last_diff > 1000000000){
            printf("glGetTexGenivOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTexGenivOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexGenivOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexGenivOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTexGenivOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTexGenivOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTexGenivOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTexGenivOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTexGenivOES_Idx) = get_ts();
        }


	

}