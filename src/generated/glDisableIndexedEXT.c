#include <glTraceCommon.h>
#include <generated.h>

#define glDisableIndexedEXT_wrp						\
    ((void  (*)(GLenum target,GLuint index                                        \
    ))GL_ENTRY_PTR(glDisableIndexedEXT_Idx))


GLAPI void  APIENTRY glDisableIndexedEXT(GLenum target,GLuint index)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDisableIndexedEXT_Idx))
	{
            GL_ENTRY_PTR(glDisableIndexedEXT_Idx) = dlsym(RTLD_NEXT,"glDisableIndexedEXT");
            if(!GL_ENTRY_PTR(glDisableIndexedEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDisableIndexedEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glDisableIndexedEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDisableIndexedEXT_wrp(target,index);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDisableIndexedEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDisableIndexedEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glDisableIndexedEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDisableIndexedEXT_Idx),
				 GL_ENTRY_LAST_TS(glDisableIndexedEXT_Idx));
        if(last_diff > 1000000000){
            printf("glDisableIndexedEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDisableIndexedEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDisableIndexedEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDisableIndexedEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glDisableIndexedEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDisableIndexedEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDisableIndexedEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDisableIndexedEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDisableIndexedEXT_Idx) = get_ts();
        }


	

}