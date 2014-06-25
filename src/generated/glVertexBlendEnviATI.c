#include <glTraceCommon.h>
#include <generated.h>

#define glVertexBlendEnviATI_wrp						\
    ((void  (*)(GLenum pname,GLint param                                        \
    ))GL_ENTRY_PTR(glVertexBlendEnviATI_Idx))


GLAPI void  APIENTRY glVertexBlendEnviATI(GLenum pname,GLint param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexBlendEnviATI_Idx))
	{
            GL_ENTRY_PTR(glVertexBlendEnviATI_Idx) = dlsym(RTLD_NEXT,"glVertexBlendEnviATI");
            if(!GL_ENTRY_PTR(glVertexBlendEnviATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexBlendEnviATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexBlendEnviATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexBlendEnviATI_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexBlendEnviATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexBlendEnviATI_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexBlendEnviATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexBlendEnviATI_Idx),
				 GL_ENTRY_LAST_TS(glVertexBlendEnviATI_Idx));
        if(last_diff > 1000000000){
            printf("glVertexBlendEnviATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexBlendEnviATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexBlendEnviATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexBlendEnviATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexBlendEnviATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexBlendEnviATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexBlendEnviATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexBlendEnviATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexBlendEnviATI_Idx) = get_ts();
        }


	

}