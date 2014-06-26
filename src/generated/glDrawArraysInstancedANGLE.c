#include <glTraceCommon.h>
#include <generated.h>

#define glDrawArraysInstancedANGLE_wrp						\
    ((void  (*)(GLenum mode,GLint first,GLsizei count,GLsizei primcount                                        \
    ))GL_ENTRY_PTR(glDrawArraysInstancedANGLE_Idx))


GLAPI void  APIENTRY glDrawArraysInstancedANGLE(GLenum mode,GLint first,GLsizei count,GLsizei primcount)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDrawArraysInstancedANGLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawArraysInstancedANGLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawArraysInstancedANGLE_wrp(mode,first,count,primcount);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawArraysInstancedANGLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawArraysInstancedANGLE_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawArraysInstancedANGLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawArraysInstancedANGLE_Idx),
				 GL_ENTRY_LAST_TS(glDrawArraysInstancedANGLE_Idx));


        if(last_diff > 1000000000){
            printf("glDrawArraysInstancedANGLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawArraysInstancedANGLE_Idx),
	             GL_ENTRY_CALL_TIME(glDrawArraysInstancedANGLE_Idx),
	             GL_ENTRY_CALL_TIME(glDrawArraysInstancedANGLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawArraysInstancedANGLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawArraysInstancedANGLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawArraysInstancedANGLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawArraysInstancedANGLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawArraysInstancedANGLE_Idx) = get_ts();
        }


	

}