#include <glTraceCommon.h>
#include <generated.h>

#define glBlendFuncIndexedAMD_wrp						\
    ((void  (*)(GLuint buf,GLenum src,GLenum dst                                        \
    ))GL_ENTRY_PTR(glBlendFuncIndexedAMD_Idx))


GLAPI void  APIENTRY glBlendFuncIndexedAMD(GLuint buf,GLenum src,GLenum dst)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBlendFuncIndexedAMD_Idx))
    	{
            GL_ENTRY_PREV_TS(glBlendFuncIndexedAMD_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBlendFuncIndexedAMD_wrp(buf,src,dst);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBlendFuncIndexedAMD_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBlendFuncIndexedAMD_Idx) ++;

        GL_ENTRY_LAST_TS(glBlendFuncIndexedAMD_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBlendFuncIndexedAMD_Idx),
				 GL_ENTRY_LAST_TS(glBlendFuncIndexedAMD_Idx));


        if(last_diff > 1000000000){
            printf("glBlendFuncIndexedAMD %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBlendFuncIndexedAMD_Idx),
	             GL_ENTRY_CALL_TIME(glBlendFuncIndexedAMD_Idx),
	             GL_ENTRY_CALL_TIME(glBlendFuncIndexedAMD_Idx) /
	             GL_ENTRY_CALL_COUNT(glBlendFuncIndexedAMD_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBlendFuncIndexedAMD_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBlendFuncIndexedAMD_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBlendFuncIndexedAMD_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBlendFuncIndexedAMD_Idx) = get_ts();
        }


	

}