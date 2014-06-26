#include <glTraceCommon.h>
#include <generated.h>

#define glSeparableFilter2DEXT_wrp						\
    ((void  (*)(GLenum target,GLenum internalformat,GLsizei width,GLsizei height,GLenum format,GLenum type,const void *row,const void *column                                        \
    ))GL_ENTRY_PTR(glSeparableFilter2DEXT_Idx))


GLAPI void  APIENTRY glSeparableFilter2DEXT(GLenum target,GLenum internalformat,GLsizei width,GLsizei height,GLenum format,GLenum type,const void *row,const void *column)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glSeparableFilter2DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glSeparableFilter2DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSeparableFilter2DEXT_wrp(target,internalformat,width,height,format,type,row,column);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSeparableFilter2DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSeparableFilter2DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glSeparableFilter2DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSeparableFilter2DEXT_Idx),
				 GL_ENTRY_LAST_TS(glSeparableFilter2DEXT_Idx));


        if(last_diff > 1000000000){
            printf("glSeparableFilter2DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSeparableFilter2DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSeparableFilter2DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSeparableFilter2DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glSeparableFilter2DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSeparableFilter2DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSeparableFilter2DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSeparableFilter2DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSeparableFilter2DEXT_Idx) = get_ts();
        }


	

}