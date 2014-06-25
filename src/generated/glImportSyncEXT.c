#include <glTraceCommon.h>
#include <generated.h>

#define glImportSyncEXT_wrp						\
    ((GLsync  (*)(GLenum external_sync_type,GLintptr external_sync,GLbitfield flags                                        \
    ))GL_ENTRY_PTR(glImportSyncEXT_Idx))


GLAPI GLsync  APIENTRY glImportSyncEXT(GLenum external_sync_type,GLintptr external_sync,GLbitfield flags)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glImportSyncEXT_Idx))
	{
            GL_ENTRY_PTR(glImportSyncEXT_Idx) = dlsym(RTLD_NEXT,"glImportSyncEXT");
            if(!GL_ENTRY_PTR(glImportSyncEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glImportSyncEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glImportSyncEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLsync  retval = glImportSyncEXT_wrp(external_sync_type,external_sync,flags);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glImportSyncEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glImportSyncEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glImportSyncEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glImportSyncEXT_Idx),
				 GL_ENTRY_LAST_TS(glImportSyncEXT_Idx));
        if(last_diff > 1000000000){
            printf("glImportSyncEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glImportSyncEXT_Idx),
	             GL_ENTRY_CALL_TIME(glImportSyncEXT_Idx),
	             GL_ENTRY_CALL_TIME(glImportSyncEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glImportSyncEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glImportSyncEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glImportSyncEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glImportSyncEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glImportSyncEXT_Idx) = get_ts();
        }


	return retval;

}