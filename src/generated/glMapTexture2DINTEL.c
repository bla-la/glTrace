#include <glTraceCommon.h>
#include <generated.h>

#define glMapTexture2DINTEL_wrp						\
    ((void * (*)(GLuint texture,GLint level,GLbitfield access,GLint *stride,GLenum *layout                                        \
    ))GL_ENTRY_PTR(glMapTexture2DINTEL_Idx))


GLAPI void * APIENTRY glMapTexture2DINTEL(GLuint texture,GLint level,GLbitfield access,GLint *stride,GLenum *layout)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMapTexture2DINTEL_Idx))
    	{
            GL_ENTRY_PREV_TS(glMapTexture2DINTEL_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	void * retval = glMapTexture2DINTEL_wrp(texture,level,access,stride,layout);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMapTexture2DINTEL_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMapTexture2DINTEL_Idx) ++;

        GL_ENTRY_LAST_TS(glMapTexture2DINTEL_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMapTexture2DINTEL_Idx),
				 GL_ENTRY_LAST_TS(glMapTexture2DINTEL_Idx));


        if(last_diff > 1000000000){
            printf("glMapTexture2DINTEL %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMapTexture2DINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glMapTexture2DINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glMapTexture2DINTEL_Idx) /
	             GL_ENTRY_CALL_COUNT(glMapTexture2DINTEL_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMapTexture2DINTEL_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMapTexture2DINTEL_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMapTexture2DINTEL_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMapTexture2DINTEL_Idx) = get_ts();
        }


	return retval;

}