#include <glTraceCommon.h>
#include <generated.h>

#define glIsTexture_wrp						\
    ((GLboolean  (*)(GLuint texture                                        \
    ))GL_ENTRY_PTR(glIsTexture_Idx))


GLAPI GLboolean  APIENTRY glIsTexture(GLuint texture)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glIsTexture_Idx))
	{
            GL_ENTRY_PTR(glIsTexture_Idx) = dlsym(RTLD_NEXT,"glIsTexture");
            if(!GL_ENTRY_PTR(glIsTexture_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glIsTexture_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsTexture_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsTexture_wrp(texture);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsTexture_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsTexture_Idx) ++;

        GL_ENTRY_LAST_TS(glIsTexture_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsTexture_Idx),
				 GL_ENTRY_LAST_TS(glIsTexture_Idx));
        if(last_diff > 1000000000){
            printf("glIsTexture %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsTexture_Idx),
	             GL_ENTRY_CALL_TIME(glIsTexture_Idx),
	             GL_ENTRY_CALL_TIME(glIsTexture_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsTexture_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsTexture_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsTexture_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsTexture_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsTexture_Idx) = get_ts();
        }


	return retval;

}