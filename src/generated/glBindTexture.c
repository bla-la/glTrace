#include <glTraceCommon.h>
#include <generated.h>

#define glBindTexture_wrp						\
    ((void  (*)(GLenum target,GLuint texture                                        \
    ))GL_ENTRY_PTR(glBindTexture_Idx))


GLAPI void  APIENTRY glBindTexture(GLenum target,GLuint texture)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBindTexture_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindTexture_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindTexture_wrp(target,texture);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindTexture_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindTexture_Idx) ++;

        GL_ENTRY_LAST_TS(glBindTexture_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindTexture_Idx),
				 GL_ENTRY_LAST_TS(glBindTexture_Idx));


        if(last_diff > 1000000000){
            printf("glBindTexture %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindTexture_Idx),
	             GL_ENTRY_CALL_TIME(glBindTexture_Idx),
	             GL_ENTRY_CALL_TIME(glBindTexture_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindTexture_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindTexture_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindTexture_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindTexture_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindTexture_Idx) = get_ts();
        }


	

}