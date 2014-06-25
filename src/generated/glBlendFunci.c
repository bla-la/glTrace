#include <glTraceCommon.h>
#include <generated.h>

#define glBlendFunci_wrp						\
    ((void  (*)(GLuint buf,GLenum src,GLenum dst                                        \
    ))GL_ENTRY_PTR(glBlendFunci_Idx))


GLAPI void  APIENTRY glBlendFunci(GLuint buf,GLenum src,GLenum dst)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBlendFunci_Idx))
	{
            GL_ENTRY_PTR(glBlendFunci_Idx) = dlsym(RTLD_NEXT,"glBlendFunci");
            if(!GL_ENTRY_PTR(glBlendFunci_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBlendFunci_Idx))
    	{
            GL_ENTRY_PREV_TS(glBlendFunci_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBlendFunci_wrp(buf,src,dst);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBlendFunci_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBlendFunci_Idx) ++;

        GL_ENTRY_LAST_TS(glBlendFunci_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBlendFunci_Idx),
				 GL_ENTRY_LAST_TS(glBlendFunci_Idx));
        if(last_diff > 1000000000){
            printf("glBlendFunci %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBlendFunci_Idx),
	             GL_ENTRY_CALL_TIME(glBlendFunci_Idx),
	             GL_ENTRY_CALL_TIME(glBlendFunci_Idx) /
	             GL_ENTRY_CALL_COUNT(glBlendFunci_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBlendFunci_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBlendFunci_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBlendFunci_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBlendFunci_Idx) = get_ts();
        }


	

}