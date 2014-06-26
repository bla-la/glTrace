#include <glTraceCommon.h>
#include <generated.h>

#define glTextureMaterialEXT_wrp						\
    ((void  (*)(GLenum face,GLenum mode                                        \
    ))GL_ENTRY_PTR(glTextureMaterialEXT_Idx))


GLAPI void  APIENTRY glTextureMaterialEXT(GLenum face,GLenum mode)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTextureMaterialEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTextureMaterialEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTextureMaterialEXT_wrp(face,mode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTextureMaterialEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTextureMaterialEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTextureMaterialEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTextureMaterialEXT_Idx),
				 GL_ENTRY_LAST_TS(glTextureMaterialEXT_Idx));


        if(last_diff > 1000000000){
            printf("glTextureMaterialEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTextureMaterialEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureMaterialEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureMaterialEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTextureMaterialEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTextureMaterialEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTextureMaterialEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTextureMaterialEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTextureMaterialEXT_Idx) = get_ts();
        }


	

}