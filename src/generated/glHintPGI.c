#include <glTraceCommon.h>
#include <generated.h>

#define glHintPGI_wrp						\
    ((void  (*)(GLenum target,GLint mode                                        \
    ))GL_ENTRY_PTR(glHintPGI_Idx))


GLAPI void  APIENTRY glHintPGI(GLenum target,GLint mode)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glHintPGI_Idx))
    	{
            GL_ENTRY_PREV_TS(glHintPGI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glHintPGI_wrp(target,mode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glHintPGI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glHintPGI_Idx) ++;

        GL_ENTRY_LAST_TS(glHintPGI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glHintPGI_Idx),
				 GL_ENTRY_LAST_TS(glHintPGI_Idx));


        if(last_diff > 1000000000){
            printf("glHintPGI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glHintPGI_Idx),
	             GL_ENTRY_CALL_TIME(glHintPGI_Idx),
	             GL_ENTRY_CALL_TIME(glHintPGI_Idx) /
	             GL_ENTRY_CALL_COUNT(glHintPGI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glHintPGI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glHintPGI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glHintPGI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glHintPGI_Idx) = get_ts();
        }


	

}