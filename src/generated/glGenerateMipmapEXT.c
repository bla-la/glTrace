#include <glTraceCommon.h>
#include <generated.h>

#define glGenerateMipmapEXT_wrp						\
    ((void  (*)(GLenum target                                        \
    ))GL_ENTRY_PTR(glGenerateMipmapEXT_Idx))


GLAPI void  APIENTRY glGenerateMipmapEXT(GLenum target)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGenerateMipmapEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenerateMipmapEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGenerateMipmapEXT_wrp(target);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenerateMipmapEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenerateMipmapEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGenerateMipmapEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenerateMipmapEXT_Idx),
				 GL_ENTRY_LAST_TS(glGenerateMipmapEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGenerateMipmapEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenerateMipmapEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGenerateMipmapEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGenerateMipmapEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenerateMipmapEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenerateMipmapEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenerateMipmapEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenerateMipmapEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenerateMipmapEXT_Idx) = get_ts();
        }


	

}