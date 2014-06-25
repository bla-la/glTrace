#include <glTraceCommon.h>
#include <generated.h>

#define glDisableClientStateiEXT_wrp						\
    ((void  (*)(GLenum array,GLuint index                                        \
    ))GL_ENTRY_PTR(glDisableClientStateiEXT_Idx))


GLAPI void  APIENTRY glDisableClientStateiEXT(GLenum array,GLuint index)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDisableClientStateiEXT_Idx))
	{
            GL_ENTRY_PTR(glDisableClientStateiEXT_Idx) = dlsym(RTLD_NEXT,"glDisableClientStateiEXT");
            if(!GL_ENTRY_PTR(glDisableClientStateiEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDisableClientStateiEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glDisableClientStateiEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDisableClientStateiEXT_wrp(array,index);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDisableClientStateiEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDisableClientStateiEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glDisableClientStateiEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDisableClientStateiEXT_Idx),
				 GL_ENTRY_LAST_TS(glDisableClientStateiEXT_Idx));
        if(last_diff > 1000000000){
            printf("glDisableClientStateiEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDisableClientStateiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDisableClientStateiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDisableClientStateiEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glDisableClientStateiEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDisableClientStateiEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDisableClientStateiEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDisableClientStateiEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDisableClientStateiEXT_Idx) = get_ts();
        }


	

}