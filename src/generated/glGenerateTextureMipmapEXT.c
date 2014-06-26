#include <glTraceCommon.h>
#include <generated.h>

#define glGenerateTextureMipmapEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target                                        \
    ))GL_ENTRY_PTR(glGenerateTextureMipmapEXT_Idx))


GLAPI void  APIENTRY glGenerateTextureMipmapEXT(GLuint texture,GLenum target)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGenerateTextureMipmapEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenerateTextureMipmapEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGenerateTextureMipmapEXT_wrp(texture,target);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenerateTextureMipmapEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenerateTextureMipmapEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGenerateTextureMipmapEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenerateTextureMipmapEXT_Idx),
				 GL_ENTRY_LAST_TS(glGenerateTextureMipmapEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGenerateTextureMipmapEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenerateTextureMipmapEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGenerateTextureMipmapEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGenerateTextureMipmapEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenerateTextureMipmapEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenerateTextureMipmapEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenerateTextureMipmapEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenerateTextureMipmapEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenerateTextureMipmapEXT_Idx) = get_ts();
        }


	

}