#include <glTraceCommon.h>
#include <generated.h>

#define glPathStringNV_wrp						\
    ((void  (*)(GLuint path,GLenum format,GLsizei length,const void *pathString                                        \
    ))GL_ENTRY_PTR(glPathStringNV_Idx))


GLAPI void  APIENTRY glPathStringNV(GLuint path,GLenum format,GLsizei length,const void *pathString)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPathStringNV_Idx))
	{
            GL_ENTRY_PTR(glPathStringNV_Idx) = dlsym(RTLD_NEXT,"glPathStringNV");
            if(!GL_ENTRY_PTR(glPathStringNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPathStringNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glPathStringNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPathStringNV_wrp(path,format,length,pathString);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPathStringNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPathStringNV_Idx) ++;

        GL_ENTRY_LAST_TS(glPathStringNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPathStringNV_Idx),
				 GL_ENTRY_LAST_TS(glPathStringNV_Idx));
        if(last_diff > 1000000000){
            printf("glPathStringNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPathStringNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathStringNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathStringNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glPathStringNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPathStringNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPathStringNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPathStringNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPathStringNV_Idx) = get_ts();
        }


	

}