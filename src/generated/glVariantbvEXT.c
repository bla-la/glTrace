#include <glTraceCommon.h>
#include <generated.h>

#define glVariantbvEXT_wrp						\
    ((void  (*)(GLuint id,const GLbyte *addr                                        \
    ))GL_ENTRY_PTR(glVariantbvEXT_Idx))


GLAPI void  APIENTRY glVariantbvEXT(GLuint id,const GLbyte *addr)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVariantbvEXT_Idx))
	{
            GL_ENTRY_PTR(glVariantbvEXT_Idx) = dlsym(RTLD_NEXT,"glVariantbvEXT");
            if(!GL_ENTRY_PTR(glVariantbvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVariantbvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVariantbvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVariantbvEXT_wrp(id,addr);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVariantbvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVariantbvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVariantbvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVariantbvEXT_Idx),
				 GL_ENTRY_LAST_TS(glVariantbvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glVariantbvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVariantbvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVariantbvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVariantbvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVariantbvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVariantbvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVariantbvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVariantbvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVariantbvEXT_Idx) = get_ts();
        }


	

}