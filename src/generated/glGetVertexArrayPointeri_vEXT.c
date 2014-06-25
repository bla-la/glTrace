#include <glTraceCommon.h>
#include <generated.h>

#define glGetVertexArrayPointeri_vEXT_wrp						\
    ((void  (*)(GLuint vaobj,GLuint index,GLenum pname,void **param                                        \
    ))GL_ENTRY_PTR(glGetVertexArrayPointeri_vEXT_Idx))


GLAPI void  APIENTRY glGetVertexArrayPointeri_vEXT(GLuint vaobj,GLuint index,GLenum pname,void **param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetVertexArrayPointeri_vEXT_Idx))
	{
            GL_ENTRY_PTR(glGetVertexArrayPointeri_vEXT_Idx) = dlsym(RTLD_NEXT,"glGetVertexArrayPointeri_vEXT");
            if(!GL_ENTRY_PTR(glGetVertexArrayPointeri_vEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetVertexArrayPointeri_vEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVertexArrayPointeri_vEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVertexArrayPointeri_vEXT_wrp(vaobj,index,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVertexArrayPointeri_vEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVertexArrayPointeri_vEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVertexArrayPointeri_vEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVertexArrayPointeri_vEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetVertexArrayPointeri_vEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetVertexArrayPointeri_vEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVertexArrayPointeri_vEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexArrayPointeri_vEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexArrayPointeri_vEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVertexArrayPointeri_vEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVertexArrayPointeri_vEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVertexArrayPointeri_vEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVertexArrayPointeri_vEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVertexArrayPointeri_vEXT_Idx) = get_ts();
        }


	

}