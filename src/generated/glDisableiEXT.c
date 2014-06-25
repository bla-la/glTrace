#include <glTraceCommon.h>
#include <generated.h>

#define glDisableiEXT_wrp						\
    ((void  (*)(GLenum target,GLuint index                                        \
    ))GL_ENTRY_PTR(glDisableiEXT_Idx))


GLAPI void  APIENTRY glDisableiEXT(GLenum target,GLuint index)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDisableiEXT_Idx))
	{
            GL_ENTRY_PTR(glDisableiEXT_Idx) = dlsym(RTLD_NEXT,"glDisableiEXT");
            if(!GL_ENTRY_PTR(glDisableiEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDisableiEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glDisableiEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDisableiEXT_wrp(target,index);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDisableiEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDisableiEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glDisableiEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDisableiEXT_Idx),
				 GL_ENTRY_LAST_TS(glDisableiEXT_Idx));
        if(last_diff > 1000000000){
            printf("glDisableiEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDisableiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDisableiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDisableiEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glDisableiEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDisableiEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDisableiEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDisableiEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDisableiEXT_Idx) = get_ts();
        }


	

}