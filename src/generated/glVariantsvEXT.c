#include <glTraceCommon.h>
#include <generated.h>

#define glVariantsvEXT_wrp						\
    ((void  (*)(GLuint id,const GLshort *addr                                        \
    ))GL_ENTRY_PTR(glVariantsvEXT_Idx))


GLAPI void  APIENTRY glVariantsvEXT(GLuint id,const GLshort *addr)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVariantsvEXT_Idx))
	{
            GL_ENTRY_PTR(glVariantsvEXT_Idx) = dlsym(RTLD_NEXT,"glVariantsvEXT");
            if(!GL_ENTRY_PTR(glVariantsvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVariantsvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVariantsvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVariantsvEXT_wrp(id,addr);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVariantsvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVariantsvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVariantsvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVariantsvEXT_Idx),
				 GL_ENTRY_LAST_TS(glVariantsvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glVariantsvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVariantsvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVariantsvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVariantsvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVariantsvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVariantsvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVariantsvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVariantsvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVariantsvEXT_Idx) = get_ts();
        }


	

}