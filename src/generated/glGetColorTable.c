#include <glTraceCommon.h>
#include <generated.h>

#define glGetColorTable_wrp						\
    ((void  (*)(GLenum target,GLenum format,GLenum type,void *table                                        \
    ))GL_ENTRY_PTR(glGetColorTable_Idx))


GLAPI void  APIENTRY glGetColorTable(GLenum target,GLenum format,GLenum type,void *table)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetColorTable_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetColorTable_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetColorTable_wrp(target,format,type,table);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetColorTable_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetColorTable_Idx) ++;

        GL_ENTRY_LAST_TS(glGetColorTable_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetColorTable_Idx),
				 GL_ENTRY_LAST_TS(glGetColorTable_Idx));


        if(last_diff > 1000000000){
            printf("glGetColorTable %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetColorTable_Idx),
	             GL_ENTRY_CALL_TIME(glGetColorTable_Idx),
	             GL_ENTRY_CALL_TIME(glGetColorTable_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetColorTable_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetColorTable_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetColorTable_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetColorTable_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetColorTable_Idx) = get_ts();
        }


	

}