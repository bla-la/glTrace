#include <glTraceCommon.h>
#include <generated.h>

#define glTextureParameteriEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLenum pname,GLint param                                        \
    ))GL_ENTRY_PTR(glTextureParameteriEXT_Idx))


GLAPI void  APIENTRY glTextureParameteriEXT(GLuint texture,GLenum target,GLenum pname,GLint param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTextureParameteriEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTextureParameteriEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTextureParameteriEXT_wrp(texture,target,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTextureParameteriEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTextureParameteriEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTextureParameteriEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTextureParameteriEXT_Idx),
				 GL_ENTRY_LAST_TS(glTextureParameteriEXT_Idx));


        if(last_diff > 1000000000){
            printf("glTextureParameteriEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTextureParameteriEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureParameteriEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureParameteriEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTextureParameteriEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTextureParameteriEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTextureParameteriEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTextureParameteriEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTextureParameteriEXT_Idx) = get_ts();
        }


	

}