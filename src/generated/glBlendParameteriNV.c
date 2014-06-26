#include <glTraceCommon.h>
#include <generated.h>

#define glBlendParameteriNV_wrp						\
    ((void  (*)(GLenum pname,GLint value                                        \
    ))GL_ENTRY_PTR(glBlendParameteriNV_Idx))


GLAPI void  APIENTRY glBlendParameteriNV(GLenum pname,GLint value)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBlendParameteriNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glBlendParameteriNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBlendParameteriNV_wrp(pname,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBlendParameteriNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBlendParameteriNV_Idx) ++;

        GL_ENTRY_LAST_TS(glBlendParameteriNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBlendParameteriNV_Idx),
				 GL_ENTRY_LAST_TS(glBlendParameteriNV_Idx));


        if(last_diff > 1000000000){
            printf("glBlendParameteriNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBlendParameteriNV_Idx),
	             GL_ENTRY_CALL_TIME(glBlendParameteriNV_Idx),
	             GL_ENTRY_CALL_TIME(glBlendParameteriNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glBlendParameteriNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBlendParameteriNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBlendParameteriNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBlendParameteriNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBlendParameteriNV_Idx) = get_ts();
        }


	

}