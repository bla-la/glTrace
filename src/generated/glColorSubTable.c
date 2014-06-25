#include <glTraceCommon.h>
#include <generated.h>

#define glColorSubTable_wrp						\
    ((void  (*)(GLenum target,GLsizei start,GLsizei count,GLenum format,GLenum type,const void *data                                        \
    ))GL_ENTRY_PTR(glColorSubTable_Idx))


GLAPI void  APIENTRY glColorSubTable(GLenum target,GLsizei start,GLsizei count,GLenum format,GLenum type,const void *data)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glColorSubTable_Idx))
	{
            GL_ENTRY_PTR(glColorSubTable_Idx) = dlsym(RTLD_NEXT,"glColorSubTable");
            if(!GL_ENTRY_PTR(glColorSubTable_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glColorSubTable_Idx))
    	{
            GL_ENTRY_PREV_TS(glColorSubTable_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColorSubTable_wrp(target,start,count,format,type,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColorSubTable_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColorSubTable_Idx) ++;

        GL_ENTRY_LAST_TS(glColorSubTable_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColorSubTable_Idx),
				 GL_ENTRY_LAST_TS(glColorSubTable_Idx));
        if(last_diff > 1000000000){
            printf("glColorSubTable %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColorSubTable_Idx),
	             GL_ENTRY_CALL_TIME(glColorSubTable_Idx),
	             GL_ENTRY_CALL_TIME(glColorSubTable_Idx) /
	             GL_ENTRY_CALL_COUNT(glColorSubTable_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColorSubTable_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColorSubTable_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColorSubTable_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColorSubTable_Idx) = get_ts();
        }


	

}