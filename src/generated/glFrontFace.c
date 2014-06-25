#include <glTraceCommon.h>
#include <generated.h>

#define glFrontFace_wrp						\
    ((void  (*)(GLenum mode                                        \
    ))GL_ENTRY_PTR(glFrontFace_Idx))


GLAPI void  APIENTRY glFrontFace(GLenum mode)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glFrontFace_Idx))
	{
            GL_ENTRY_PTR(glFrontFace_Idx) = dlsym(RTLD_NEXT,"glFrontFace");
            if(!GL_ENTRY_PTR(glFrontFace_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glFrontFace_Idx))
    	{
            GL_ENTRY_PREV_TS(glFrontFace_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFrontFace_wrp(mode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFrontFace_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFrontFace_Idx) ++;

        GL_ENTRY_LAST_TS(glFrontFace_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFrontFace_Idx),
				 GL_ENTRY_LAST_TS(glFrontFace_Idx));
        if(last_diff > 1000000000){
            printf("glFrontFace %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFrontFace_Idx),
	             GL_ENTRY_CALL_TIME(glFrontFace_Idx),
	             GL_ENTRY_CALL_TIME(glFrontFace_Idx) /
	             GL_ENTRY_CALL_COUNT(glFrontFace_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFrontFace_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFrontFace_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFrontFace_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFrontFace_Idx) = get_ts();
        }


	

}