#include <glTraceCommon.h>
#include <generated.h>

#define glAlphaFunc_wrp						\
    ((void  (*)(GLenum func,GLfloat ref                                        \
    ))GL_ENTRY_PTR(glAlphaFunc_Idx))


GLAPI void  APIENTRY glAlphaFunc(GLenum func,GLfloat ref)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glAlphaFunc_Idx))
	{
            GL_ENTRY_PTR(glAlphaFunc_Idx) = dlsym(RTLD_NEXT,"glAlphaFunc");
            if(!GL_ENTRY_PTR(glAlphaFunc_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glAlphaFunc_Idx))
    	{
            GL_ENTRY_PREV_TS(glAlphaFunc_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glAlphaFunc_wrp(func,ref);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glAlphaFunc_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glAlphaFunc_Idx) ++;

        GL_ENTRY_LAST_TS(glAlphaFunc_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glAlphaFunc_Idx),
				 GL_ENTRY_LAST_TS(glAlphaFunc_Idx));
        if(last_diff > 1000000000){
            printf("glAlphaFunc %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glAlphaFunc_Idx),
	             GL_ENTRY_CALL_TIME(glAlphaFunc_Idx),
	             GL_ENTRY_CALL_TIME(glAlphaFunc_Idx) /
	             GL_ENTRY_CALL_COUNT(glAlphaFunc_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glAlphaFunc_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glAlphaFunc_Idx) = 0;
             GL_ENTRY_CALL_TIME(glAlphaFunc_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glAlphaFunc_Idx) = get_ts();
        }


	

}