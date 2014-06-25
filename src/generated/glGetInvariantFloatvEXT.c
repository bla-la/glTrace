#include <glTraceCommon.h>
#include <generated.h>

#define glGetInvariantFloatvEXT_wrp						\
    ((void  (*)(GLuint id,GLenum value,GLfloat *data                                        \
    ))GL_ENTRY_PTR(glGetInvariantFloatvEXT_Idx))


GLAPI void  APIENTRY glGetInvariantFloatvEXT(GLuint id,GLenum value,GLfloat *data)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetInvariantFloatvEXT_Idx))
	{
            GL_ENTRY_PTR(glGetInvariantFloatvEXT_Idx) = dlsym(RTLD_NEXT,"glGetInvariantFloatvEXT");
            if(!GL_ENTRY_PTR(glGetInvariantFloatvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetInvariantFloatvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetInvariantFloatvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetInvariantFloatvEXT_wrp(id,value,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetInvariantFloatvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetInvariantFloatvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetInvariantFloatvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetInvariantFloatvEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetInvariantFloatvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetInvariantFloatvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetInvariantFloatvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetInvariantFloatvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetInvariantFloatvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetInvariantFloatvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetInvariantFloatvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetInvariantFloatvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetInvariantFloatvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetInvariantFloatvEXT_Idx) = get_ts();
        }


	

}