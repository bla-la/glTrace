#include <glTraceCommon.h>
#include <generated.h>

#define glAreTexturesResidentEXT_wrp						\
    ((GLboolean  (*)(GLsizei n,const GLuint *textures,GLboolean *residences                                        \
    ))GL_ENTRY_PTR(glAreTexturesResidentEXT_Idx))


GLAPI GLboolean  APIENTRY glAreTexturesResidentEXT(GLsizei n,const GLuint *textures,GLboolean *residences)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glAreTexturesResidentEXT_Idx))
	{
            GL_ENTRY_PTR(glAreTexturesResidentEXT_Idx) = dlsym(RTLD_NEXT,"glAreTexturesResidentEXT");
            if(!GL_ENTRY_PTR(glAreTexturesResidentEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glAreTexturesResidentEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glAreTexturesResidentEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glAreTexturesResidentEXT_wrp(n,textures,residences);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glAreTexturesResidentEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glAreTexturesResidentEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glAreTexturesResidentEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glAreTexturesResidentEXT_Idx),
				 GL_ENTRY_LAST_TS(glAreTexturesResidentEXT_Idx));
        if(last_diff > 1000000000){
            printf("glAreTexturesResidentEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glAreTexturesResidentEXT_Idx),
	             GL_ENTRY_CALL_TIME(glAreTexturesResidentEXT_Idx),
	             GL_ENTRY_CALL_TIME(glAreTexturesResidentEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glAreTexturesResidentEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glAreTexturesResidentEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glAreTexturesResidentEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glAreTexturesResidentEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glAreTexturesResidentEXT_Idx) = get_ts();
        }


	return retval;

}