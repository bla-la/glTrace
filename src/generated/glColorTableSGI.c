#include <glTraceCommon.h>
#include <generated.h>

#define glColorTableSGI_wrp						\
    ((void  (*)(GLenum target,GLenum internalformat,GLsizei width,GLenum format,GLenum type,const void *table                                        \
    ))GL_ENTRY_PTR(glColorTableSGI_Idx))


GLAPI void  APIENTRY glColorTableSGI(GLenum target,GLenum internalformat,GLsizei width,GLenum format,GLenum type,const void *table)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glColorTableSGI_Idx))
    	{
            GL_ENTRY_PREV_TS(glColorTableSGI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColorTableSGI_wrp(target,internalformat,width,format,type,table);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColorTableSGI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColorTableSGI_Idx) ++;

        GL_ENTRY_LAST_TS(glColorTableSGI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColorTableSGI_Idx),
				 GL_ENTRY_LAST_TS(glColorTableSGI_Idx));


        if(last_diff > 1000000000){
            printf("glColorTableSGI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColorTableSGI_Idx),
	             GL_ENTRY_CALL_TIME(glColorTableSGI_Idx),
	             GL_ENTRY_CALL_TIME(glColorTableSGI_Idx) /
	             GL_ENTRY_CALL_COUNT(glColorTableSGI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColorTableSGI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColorTableSGI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColorTableSGI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColorTableSGI_Idx) = get_ts();
        }


	

}