#include <glTraceCommon.h>
#include <generated.h>

#define glGetColorTableSGI_wrp						\
    ((void  (*)(GLenum target,GLenum format,GLenum type,void *table                                        \
    ))GL_ENTRY_PTR(glGetColorTableSGI_Idx))


GLAPI void  APIENTRY glGetColorTableSGI(GLenum target,GLenum format,GLenum type,void *table)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetColorTableSGI_Idx))
	{
            GL_ENTRY_PTR(glGetColorTableSGI_Idx) = dlsym(RTLD_NEXT,"glGetColorTableSGI");
            if(!GL_ENTRY_PTR(glGetColorTableSGI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetColorTableSGI_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetColorTableSGI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetColorTableSGI_wrp(target,format,type,table);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetColorTableSGI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetColorTableSGI_Idx) ++;

        GL_ENTRY_LAST_TS(glGetColorTableSGI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetColorTableSGI_Idx),
				 GL_ENTRY_LAST_TS(glGetColorTableSGI_Idx));
        if(last_diff > 1000000000){
            printf("glGetColorTableSGI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetColorTableSGI_Idx),
	             GL_ENTRY_CALL_TIME(glGetColorTableSGI_Idx),
	             GL_ENTRY_CALL_TIME(glGetColorTableSGI_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetColorTableSGI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetColorTableSGI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetColorTableSGI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetColorTableSGI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetColorTableSGI_Idx) = get_ts();
        }


	

}