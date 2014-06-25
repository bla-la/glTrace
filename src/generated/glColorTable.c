#include <glTraceCommon.h>
#include <generated.h>

#define glColorTable_wrp						\
    ((void  (*)(GLenum target,GLenum internalformat,GLsizei width,GLenum format,GLenum type,const void *table                                        \
    ))GL_ENTRY_PTR(glColorTable_Idx))


GLAPI void  APIENTRY glColorTable(GLenum target,GLenum internalformat,GLsizei width,GLenum format,GLenum type,const void *table)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glColorTable_Idx))
	{
            GL_ENTRY_PTR(glColorTable_Idx) = dlsym(RTLD_NEXT,"glColorTable");
            if(!GL_ENTRY_PTR(glColorTable_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glColorTable_Idx))
    	{
            GL_ENTRY_PREV_TS(glColorTable_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColorTable_wrp(target,internalformat,width,format,type,table);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColorTable_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColorTable_Idx) ++;

        GL_ENTRY_LAST_TS(glColorTable_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColorTable_Idx),
				 GL_ENTRY_LAST_TS(glColorTable_Idx));
        if(last_diff > 1000000000){
            printf("glColorTable %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColorTable_Idx),
	             GL_ENTRY_CALL_TIME(glColorTable_Idx),
	             GL_ENTRY_CALL_TIME(glColorTable_Idx) /
	             GL_ENTRY_CALL_COUNT(glColorTable_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColorTable_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColorTable_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColorTable_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColorTable_Idx) = get_ts();
        }


	

}