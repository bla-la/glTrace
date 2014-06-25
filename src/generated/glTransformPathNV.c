#include <glTraceCommon.h>
#include <generated.h>

#define glTransformPathNV_wrp						\
    ((void  (*)(GLuint resultPath,GLuint srcPath,GLenum transformType,const GLfloat *transformValues                                        \
    ))GL_ENTRY_PTR(glTransformPathNV_Idx))


GLAPI void  APIENTRY glTransformPathNV(GLuint resultPath,GLuint srcPath,GLenum transformType,const GLfloat *transformValues)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTransformPathNV_Idx))
	{
            GL_ENTRY_PTR(glTransformPathNV_Idx) = dlsym(RTLD_NEXT,"glTransformPathNV");
            if(!GL_ENTRY_PTR(glTransformPathNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTransformPathNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glTransformPathNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTransformPathNV_wrp(resultPath,srcPath,transformType,transformValues);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTransformPathNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTransformPathNV_Idx) ++;

        GL_ENTRY_LAST_TS(glTransformPathNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTransformPathNV_Idx),
				 GL_ENTRY_LAST_TS(glTransformPathNV_Idx));
        if(last_diff > 1000000000){
            printf("glTransformPathNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTransformPathNV_Idx),
	             GL_ENTRY_CALL_TIME(glTransformPathNV_Idx),
	             GL_ENTRY_CALL_TIME(glTransformPathNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glTransformPathNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTransformPathNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTransformPathNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTransformPathNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTransformPathNV_Idx) = get_ts();
        }


	

}