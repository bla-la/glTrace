#include <glTraceCommon.h>
#include <generated.h>

#define glTextureLightEXT_wrp						\
    ((void  (*)(GLenum pname                                        \
    ))GL_ENTRY_PTR(glTextureLightEXT_Idx))


GLAPI void  APIENTRY glTextureLightEXT(GLenum pname)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTextureLightEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTextureLightEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTextureLightEXT_wrp(pname);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTextureLightEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTextureLightEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTextureLightEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTextureLightEXT_Idx),
				 GL_ENTRY_LAST_TS(glTextureLightEXT_Idx));


        if(last_diff > 1000000000){
            printf("glTextureLightEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTextureLightEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureLightEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureLightEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTextureLightEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTextureLightEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTextureLightEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTextureLightEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTextureLightEXT_Idx) = get_ts();
        }


	

}