#include <glTraceCommon.h>
#include <generated.h>

#define glMateriali_wrp						\
    ((void  (*)(GLenum face,GLenum pname,GLint param                                        \
    ))GL_ENTRY_PTR(glMateriali_Idx))


GLAPI void  APIENTRY glMateriali(GLenum face,GLenum pname,GLint param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMateriali_Idx))
	{
            GL_ENTRY_PTR(glMateriali_Idx) = dlsym(RTLD_NEXT,"glMateriali");
            if(!GL_ENTRY_PTR(glMateriali_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMateriali_Idx))
    	{
            GL_ENTRY_PREV_TS(glMateriali_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMateriali_wrp(face,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMateriali_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMateriali_Idx) ++;

        GL_ENTRY_LAST_TS(glMateriali_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMateriali_Idx),
				 GL_ENTRY_LAST_TS(glMateriali_Idx));
        if(last_diff > 1000000000){
            printf("glMateriali %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMateriali_Idx),
	             GL_ENTRY_CALL_TIME(glMateriali_Idx),
	             GL_ENTRY_CALL_TIME(glMateriali_Idx) /
	             GL_ENTRY_CALL_COUNT(glMateriali_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMateriali_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMateriali_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMateriali_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMateriali_Idx) = get_ts();
        }


	

}