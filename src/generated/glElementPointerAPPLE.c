#include <glTraceCommon.h>
#include <generated.h>

#define glElementPointerAPPLE_wrp						\
    ((void  (*)(GLenum type,const void *pointer                                        \
    ))GL_ENTRY_PTR(glElementPointerAPPLE_Idx))


GLAPI void  APIENTRY glElementPointerAPPLE(GLenum type,const void *pointer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glElementPointerAPPLE_Idx))
	{
            GL_ENTRY_PTR(glElementPointerAPPLE_Idx) = dlsym(RTLD_NEXT,"glElementPointerAPPLE");
            if(!GL_ENTRY_PTR(glElementPointerAPPLE_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glElementPointerAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glElementPointerAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glElementPointerAPPLE_wrp(type,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glElementPointerAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glElementPointerAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glElementPointerAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glElementPointerAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glElementPointerAPPLE_Idx));
        if(last_diff > 1000000000){
            printf("glElementPointerAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glElementPointerAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glElementPointerAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glElementPointerAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glElementPointerAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glElementPointerAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glElementPointerAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glElementPointerAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glElementPointerAPPLE_Idx) = get_ts();
        }


	

}