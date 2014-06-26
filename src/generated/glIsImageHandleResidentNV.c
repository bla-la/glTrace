#include <glTraceCommon.h>
#include <generated.h>

#define glIsImageHandleResidentNV_wrp						\
    ((GLboolean  (*)(GLuint64 handle                                        \
    ))GL_ENTRY_PTR(glIsImageHandleResidentNV_Idx))


GLAPI GLboolean  APIENTRY glIsImageHandleResidentNV(GLuint64 handle)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIsImageHandleResidentNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsImageHandleResidentNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsImageHandleResidentNV_wrp(handle);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsImageHandleResidentNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsImageHandleResidentNV_Idx) ++;

        GL_ENTRY_LAST_TS(glIsImageHandleResidentNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsImageHandleResidentNV_Idx),
				 GL_ENTRY_LAST_TS(glIsImageHandleResidentNV_Idx));


        if(last_diff > 1000000000){
            printf("glIsImageHandleResidentNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsImageHandleResidentNV_Idx),
	             GL_ENTRY_CALL_TIME(glIsImageHandleResidentNV_Idx),
	             GL_ENTRY_CALL_TIME(glIsImageHandleResidentNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsImageHandleResidentNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsImageHandleResidentNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsImageHandleResidentNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsImageHandleResidentNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsImageHandleResidentNV_Idx) = get_ts();
        }


	return retval;

}