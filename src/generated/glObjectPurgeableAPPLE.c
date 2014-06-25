#include <glTraceCommon.h>
#include <generated.h>

#define glObjectPurgeableAPPLE_wrp						\
    ((GLenum  (*)(GLenum objectType,GLuint name,GLenum option                                        \
    ))GL_ENTRY_PTR(glObjectPurgeableAPPLE_Idx))


GLAPI GLenum  APIENTRY glObjectPurgeableAPPLE(GLenum objectType,GLuint name,GLenum option)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glObjectPurgeableAPPLE_Idx))
	{
            GL_ENTRY_PTR(glObjectPurgeableAPPLE_Idx) = dlsym(RTLD_NEXT,"glObjectPurgeableAPPLE");
            if(!GL_ENTRY_PTR(glObjectPurgeableAPPLE_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glObjectPurgeableAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glObjectPurgeableAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLenum  retval = glObjectPurgeableAPPLE_wrp(objectType,name,option);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glObjectPurgeableAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glObjectPurgeableAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glObjectPurgeableAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glObjectPurgeableAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glObjectPurgeableAPPLE_Idx));
        if(last_diff > 1000000000){
            printf("glObjectPurgeableAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glObjectPurgeableAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glObjectPurgeableAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glObjectPurgeableAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glObjectPurgeableAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glObjectPurgeableAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glObjectPurgeableAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glObjectPurgeableAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glObjectPurgeableAPPLE_Idx) = get_ts();
        }


	return retval;

}