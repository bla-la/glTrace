#include <glTraceCommon.h>
#include <generated.h>

#define glBindMultiTextureEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLuint texture                                        \
    ))GL_ENTRY_PTR(glBindMultiTextureEXT_Idx))


GLAPI void  APIENTRY glBindMultiTextureEXT(GLenum texunit,GLenum target,GLuint texture)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBindMultiTextureEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindMultiTextureEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindMultiTextureEXT_wrp(texunit,target,texture);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindMultiTextureEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindMultiTextureEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBindMultiTextureEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindMultiTextureEXT_Idx),
				 GL_ENTRY_LAST_TS(glBindMultiTextureEXT_Idx));


        if(last_diff > 1000000000){
            printf("glBindMultiTextureEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindMultiTextureEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBindMultiTextureEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBindMultiTextureEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindMultiTextureEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindMultiTextureEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindMultiTextureEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindMultiTextureEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindMultiTextureEXT_Idx) = get_ts();
        }


	

}