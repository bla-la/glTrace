#include <glTraceCommon.h>
#include <generated.h>

#define glVariantArrayObjectATI_wrp						\
    ((void  (*)(GLuint id,GLenum type,GLsizei stride,GLuint buffer,GLuint offset                                        \
    ))GL_ENTRY_PTR(glVariantArrayObjectATI_Idx))


GLAPI void  APIENTRY glVariantArrayObjectATI(GLuint id,GLenum type,GLsizei stride,GLuint buffer,GLuint offset)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVariantArrayObjectATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glVariantArrayObjectATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVariantArrayObjectATI_wrp(id,type,stride,buffer,offset);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVariantArrayObjectATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVariantArrayObjectATI_Idx) ++;

        GL_ENTRY_LAST_TS(glVariantArrayObjectATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVariantArrayObjectATI_Idx),
				 GL_ENTRY_LAST_TS(glVariantArrayObjectATI_Idx));


        if(last_diff > 1000000000){
            printf("glVariantArrayObjectATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVariantArrayObjectATI_Idx),
	             GL_ENTRY_CALL_TIME(glVariantArrayObjectATI_Idx),
	             GL_ENTRY_CALL_TIME(glVariantArrayObjectATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glVariantArrayObjectATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVariantArrayObjectATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVariantArrayObjectATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVariantArrayObjectATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVariantArrayObjectATI_Idx) = get_ts();
        }


	

}