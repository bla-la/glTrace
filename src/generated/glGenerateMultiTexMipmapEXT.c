#include <glTraceCommon.h>
#include <generated.h>

#define glGenerateMultiTexMipmapEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target                                        \
    ))GL_ENTRY_PTR(glGenerateMultiTexMipmapEXT_Idx))


GLAPI void  APIENTRY glGenerateMultiTexMipmapEXT(GLenum texunit,GLenum target)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGenerateMultiTexMipmapEXT_Idx))
	{
            GL_ENTRY_PTR(glGenerateMultiTexMipmapEXT_Idx) = dlsym(RTLD_NEXT,"glGenerateMultiTexMipmapEXT");
            if(!GL_ENTRY_PTR(glGenerateMultiTexMipmapEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGenerateMultiTexMipmapEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenerateMultiTexMipmapEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGenerateMultiTexMipmapEXT_wrp(texunit,target);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenerateMultiTexMipmapEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenerateMultiTexMipmapEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGenerateMultiTexMipmapEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenerateMultiTexMipmapEXT_Idx),
				 GL_ENTRY_LAST_TS(glGenerateMultiTexMipmapEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGenerateMultiTexMipmapEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenerateMultiTexMipmapEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGenerateMultiTexMipmapEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGenerateMultiTexMipmapEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenerateMultiTexMipmapEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenerateMultiTexMipmapEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenerateMultiTexMipmapEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenerateMultiTexMipmapEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenerateMultiTexMipmapEXT_Idx) = get_ts();
        }


	

}