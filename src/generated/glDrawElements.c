#include <glTraceCommon.h>
#include <generated.h>

#define glDrawElements_wrp						\
    ((void  (*)(GLenum mode,GLsizei count,GLenum type,const void *indices                                        \
    ))GL_ENTRY_PTR(glDrawElements_Idx))


GLAPI void  APIENTRY glDrawElements(GLenum mode,GLsizei count,GLenum type,const void *indices)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDrawElements_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawElements_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawElements_wrp(mode,count,type,indices);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawElements_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawElements_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawElements_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawElements_Idx),
				 GL_ENTRY_LAST_TS(glDrawElements_Idx));


        if(last_diff > 1000000000){
            printf("glDrawElements %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawElements_Idx),
	             GL_ENTRY_CALL_TIME(glDrawElements_Idx),
	             GL_ENTRY_CALL_TIME(glDrawElements_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawElements_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawElements_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawElements_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawElements_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawElements_Idx) = get_ts();
        }


	

}