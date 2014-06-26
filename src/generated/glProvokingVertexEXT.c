#include <glTraceCommon.h>
#include <generated.h>

#define glProvokingVertexEXT_wrp						\
    ((void  (*)(GLenum mode                                        \
    ))GL_ENTRY_PTR(glProvokingVertexEXT_Idx))


GLAPI void  APIENTRY glProvokingVertexEXT(GLenum mode)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glProvokingVertexEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glProvokingVertexEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProvokingVertexEXT_wrp(mode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProvokingVertexEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProvokingVertexEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glProvokingVertexEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProvokingVertexEXT_Idx),
				 GL_ENTRY_LAST_TS(glProvokingVertexEXT_Idx));


        if(last_diff > 1000000000){
            printf("glProvokingVertexEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProvokingVertexEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProvokingVertexEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProvokingVertexEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glProvokingVertexEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProvokingVertexEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProvokingVertexEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProvokingVertexEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProvokingVertexEXT_Idx) = get_ts();
        }


	

}