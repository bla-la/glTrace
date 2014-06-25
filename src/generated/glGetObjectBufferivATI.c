#include <glTraceCommon.h>
#include <generated.h>

#define glGetObjectBufferivATI_wrp						\
    ((void  (*)(GLuint buffer,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetObjectBufferivATI_Idx))


GLAPI void  APIENTRY glGetObjectBufferivATI(GLuint buffer,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetObjectBufferivATI_Idx))
	{
            GL_ENTRY_PTR(glGetObjectBufferivATI_Idx) = dlsym(RTLD_NEXT,"glGetObjectBufferivATI");
            if(!GL_ENTRY_PTR(glGetObjectBufferivATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetObjectBufferivATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetObjectBufferivATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetObjectBufferivATI_wrp(buffer,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetObjectBufferivATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetObjectBufferivATI_Idx) ++;

        GL_ENTRY_LAST_TS(glGetObjectBufferivATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetObjectBufferivATI_Idx),
				 GL_ENTRY_LAST_TS(glGetObjectBufferivATI_Idx));
        if(last_diff > 1000000000){
            printf("glGetObjectBufferivATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetObjectBufferivATI_Idx),
	             GL_ENTRY_CALL_TIME(glGetObjectBufferivATI_Idx),
	             GL_ENTRY_CALL_TIME(glGetObjectBufferivATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetObjectBufferivATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetObjectBufferivATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetObjectBufferivATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetObjectBufferivATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetObjectBufferivATI_Idx) = get_ts();
        }


	

}