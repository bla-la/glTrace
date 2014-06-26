#include <glTraceCommon.h>
#include <generated.h>

#define glIsTextureEXT_wrp						\
    ((GLboolean  (*)(GLuint texture                                        \
    ))GL_ENTRY_PTR(glIsTextureEXT_Idx))


GLAPI GLboolean  APIENTRY glIsTextureEXT(GLuint texture)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIsTextureEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsTextureEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsTextureEXT_wrp(texture);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsTextureEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsTextureEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glIsTextureEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsTextureEXT_Idx),
				 GL_ENTRY_LAST_TS(glIsTextureEXT_Idx));


        if(last_diff > 1000000000){
            printf("glIsTextureEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsTextureEXT_Idx),
	             GL_ENTRY_CALL_TIME(glIsTextureEXT_Idx),
	             GL_ENTRY_CALL_TIME(glIsTextureEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsTextureEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsTextureEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsTextureEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsTextureEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsTextureEXT_Idx) = get_ts();
        }


	return retval;

}