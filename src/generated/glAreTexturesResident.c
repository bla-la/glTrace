#include <glTraceCommon.h>
#include <generated.h>

#define glAreTexturesResident_wrp						\
    ((GLboolean  (*)(GLsizei n,const GLuint *textures,GLboolean *residences                                        \
    ))GL_ENTRY_PTR(glAreTexturesResident_Idx))


GLAPI GLboolean  APIENTRY glAreTexturesResident(GLsizei n,const GLuint *textures,GLboolean *residences)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glAreTexturesResident_Idx))
    	{
            GL_ENTRY_PREV_TS(glAreTexturesResident_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glAreTexturesResident_wrp(n,textures,residences);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glAreTexturesResident_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glAreTexturesResident_Idx) ++;

        GL_ENTRY_LAST_TS(glAreTexturesResident_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glAreTexturesResident_Idx),
				 GL_ENTRY_LAST_TS(glAreTexturesResident_Idx));


        if(last_diff > 1000000000){
            printf("glAreTexturesResident %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glAreTexturesResident_Idx),
	             GL_ENTRY_CALL_TIME(glAreTexturesResident_Idx),
	             GL_ENTRY_CALL_TIME(glAreTexturesResident_Idx) /
	             GL_ENTRY_CALL_COUNT(glAreTexturesResident_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glAreTexturesResident_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glAreTexturesResident_Idx) = 0;
             GL_ENTRY_CALL_TIME(glAreTexturesResident_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glAreTexturesResident_Idx) = get_ts();
        }


	return retval;

}