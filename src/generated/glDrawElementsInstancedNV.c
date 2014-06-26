#include <glTraceCommon.h>
#include <generated.h>

#define glDrawElementsInstancedNV_wrp						\
    ((void  (*)(GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei primcount                                        \
    ))GL_ENTRY_PTR(glDrawElementsInstancedNV_Idx))


GLAPI void  APIENTRY glDrawElementsInstancedNV(GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei primcount)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDrawElementsInstancedNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawElementsInstancedNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawElementsInstancedNV_wrp(mode,count,type,indices,primcount);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawElementsInstancedNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawElementsInstancedNV_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawElementsInstancedNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawElementsInstancedNV_Idx),
				 GL_ENTRY_LAST_TS(glDrawElementsInstancedNV_Idx));


        if(last_diff > 1000000000){
            printf("glDrawElementsInstancedNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawElementsInstancedNV_Idx),
	             GL_ENTRY_CALL_TIME(glDrawElementsInstancedNV_Idx),
	             GL_ENTRY_CALL_TIME(glDrawElementsInstancedNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawElementsInstancedNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawElementsInstancedNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawElementsInstancedNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawElementsInstancedNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawElementsInstancedNV_Idx) = get_ts();
        }


	

}