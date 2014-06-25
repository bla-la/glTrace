#include <glTraceCommon.h>
#include <generated.h>

#define glVertexArrayRangeNV_wrp						\
    ((void  (*)(GLsizei length,const void *pointer                                        \
    ))GL_ENTRY_PTR(glVertexArrayRangeNV_Idx))


GLAPI void  APIENTRY glVertexArrayRangeNV(GLsizei length,const void *pointer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexArrayRangeNV_Idx))
	{
            GL_ENTRY_PTR(glVertexArrayRangeNV_Idx) = dlsym(RTLD_NEXT,"glVertexArrayRangeNV");
            if(!GL_ENTRY_PTR(glVertexArrayRangeNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexArrayRangeNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexArrayRangeNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexArrayRangeNV_wrp(length,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexArrayRangeNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexArrayRangeNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexArrayRangeNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexArrayRangeNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexArrayRangeNV_Idx));
        if(last_diff > 1000000000){
            printf("glVertexArrayRangeNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexArrayRangeNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayRangeNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayRangeNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexArrayRangeNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexArrayRangeNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexArrayRangeNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexArrayRangeNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexArrayRangeNV_Idx) = get_ts();
        }


	

}