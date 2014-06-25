#include <glTraceCommon.h>
#include <generated.h>

#define glAccum_wrp						\
    ((void  (*)(GLenum op,GLfloat value                                        \
    ))GL_ENTRY_PTR(glAccum_Idx))


GLAPI void  APIENTRY glAccum(GLenum op,GLfloat value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glAccum_Idx))
	{
            GL_ENTRY_PTR(glAccum_Idx) = dlsym(RTLD_NEXT,"glAccum");
            if(!GL_ENTRY_PTR(glAccum_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glAccum_Idx))
    	{
            GL_ENTRY_PREV_TS(glAccum_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glAccum_wrp(op,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glAccum_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glAccum_Idx) ++;

        GL_ENTRY_LAST_TS(glAccum_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glAccum_Idx),
				 GL_ENTRY_LAST_TS(glAccum_Idx));
        if(last_diff > 1000000000){
            printf("glAccum %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glAccum_Idx),
	             GL_ENTRY_CALL_TIME(glAccum_Idx),
	             GL_ENTRY_CALL_TIME(glAccum_Idx) /
	             GL_ENTRY_CALL_COUNT(glAccum_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glAccum_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glAccum_Idx) = 0;
             GL_ENTRY_CALL_TIME(glAccum_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glAccum_Idx) = get_ts();
        }


	

}