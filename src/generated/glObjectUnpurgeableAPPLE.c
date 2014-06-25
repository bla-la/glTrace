#include <glTraceCommon.h>
#include <generated.h>

#define glObjectUnpurgeableAPPLE_wrp						\
    ((GLenum  (*)(GLenum objectType,GLuint name,GLenum option                                        \
    ))GL_ENTRY_PTR(glObjectUnpurgeableAPPLE_Idx))


GLAPI GLenum  APIENTRY glObjectUnpurgeableAPPLE(GLenum objectType,GLuint name,GLenum option)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glObjectUnpurgeableAPPLE_Idx))
	{
            GL_ENTRY_PTR(glObjectUnpurgeableAPPLE_Idx) = dlsym(RTLD_NEXT,"glObjectUnpurgeableAPPLE");
            if(!GL_ENTRY_PTR(glObjectUnpurgeableAPPLE_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glObjectUnpurgeableAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glObjectUnpurgeableAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLenum  retval = glObjectUnpurgeableAPPLE_wrp(objectType,name,option);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glObjectUnpurgeableAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glObjectUnpurgeableAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glObjectUnpurgeableAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glObjectUnpurgeableAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glObjectUnpurgeableAPPLE_Idx));
        if(last_diff > 1000000000){
            printf("glObjectUnpurgeableAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glObjectUnpurgeableAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glObjectUnpurgeableAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glObjectUnpurgeableAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glObjectUnpurgeableAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glObjectUnpurgeableAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glObjectUnpurgeableAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glObjectUnpurgeableAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glObjectUnpurgeableAPPLE_Idx) = get_ts();
        }


	return retval;

}