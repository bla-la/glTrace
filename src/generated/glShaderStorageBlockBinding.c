#include <glTraceCommon.h>
#include <generated.h>

#define glShaderStorageBlockBinding_wrp						\
    ((void  (*)(GLuint program,GLuint storageBlockIndex,GLuint storageBlockBinding                                        \
    ))GL_ENTRY_PTR(glShaderStorageBlockBinding_Idx))


GLAPI void  APIENTRY glShaderStorageBlockBinding(GLuint program,GLuint storageBlockIndex,GLuint storageBlockBinding)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glShaderStorageBlockBinding_Idx))
	{
            GL_ENTRY_PTR(glShaderStorageBlockBinding_Idx) = dlsym(RTLD_NEXT,"glShaderStorageBlockBinding");
            if(!GL_ENTRY_PTR(glShaderStorageBlockBinding_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glShaderStorageBlockBinding_Idx))
    	{
            GL_ENTRY_PREV_TS(glShaderStorageBlockBinding_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glShaderStorageBlockBinding_wrp(program,storageBlockIndex,storageBlockBinding);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glShaderStorageBlockBinding_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glShaderStorageBlockBinding_Idx) ++;

        GL_ENTRY_LAST_TS(glShaderStorageBlockBinding_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glShaderStorageBlockBinding_Idx),
				 GL_ENTRY_LAST_TS(glShaderStorageBlockBinding_Idx));
        if(last_diff > 1000000000){
            printf("glShaderStorageBlockBinding %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glShaderStorageBlockBinding_Idx),
	             GL_ENTRY_CALL_TIME(glShaderStorageBlockBinding_Idx),
	             GL_ENTRY_CALL_TIME(glShaderStorageBlockBinding_Idx) /
	             GL_ENTRY_CALL_COUNT(glShaderStorageBlockBinding_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glShaderStorageBlockBinding_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glShaderStorageBlockBinding_Idx) = 0;
             GL_ENTRY_CALL_TIME(glShaderStorageBlockBinding_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glShaderStorageBlockBinding_Idx) = get_ts();
        }


	

}