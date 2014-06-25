#include <glTraceCommon.h>
#include <generated.h>

#define glVertexArrayParameteriAPPLE_wrp						\
    ((void  (*)(GLenum pname,GLint param                                        \
    ))GL_ENTRY_PTR(glVertexArrayParameteriAPPLE_Idx))


GLAPI void  APIENTRY glVertexArrayParameteriAPPLE(GLenum pname,GLint param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexArrayParameteriAPPLE_Idx))
	{
            GL_ENTRY_PTR(glVertexArrayParameteriAPPLE_Idx) = dlsym(RTLD_NEXT,"glVertexArrayParameteriAPPLE");
            if(!GL_ENTRY_PTR(glVertexArrayParameteriAPPLE_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexArrayParameteriAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexArrayParameteriAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexArrayParameteriAPPLE_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexArrayParameteriAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexArrayParameteriAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexArrayParameteriAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexArrayParameteriAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glVertexArrayParameteriAPPLE_Idx));
        if(last_diff > 1000000000){
            printf("glVertexArrayParameteriAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexArrayParameteriAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayParameteriAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayParameteriAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexArrayParameteriAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexArrayParameteriAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexArrayParameteriAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexArrayParameteriAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexArrayParameteriAPPLE_Idx) = get_ts();
        }


	

}