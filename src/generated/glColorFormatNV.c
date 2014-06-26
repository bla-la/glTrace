#include <glTraceCommon.h>
#include <generated.h>

#define glColorFormatNV_wrp						\
    ((void  (*)(GLint size,GLenum type,GLsizei stride                                        \
    ))GL_ENTRY_PTR(glColorFormatNV_Idx))


GLAPI void  APIENTRY glColorFormatNV(GLint size,GLenum type,GLsizei stride)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glColorFormatNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glColorFormatNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColorFormatNV_wrp(size,type,stride);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColorFormatNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColorFormatNV_Idx) ++;

        GL_ENTRY_LAST_TS(glColorFormatNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColorFormatNV_Idx),
				 GL_ENTRY_LAST_TS(glColorFormatNV_Idx));


        if(last_diff > 1000000000){
            printf("glColorFormatNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColorFormatNV_Idx),
	             GL_ENTRY_CALL_TIME(glColorFormatNV_Idx),
	             GL_ENTRY_CALL_TIME(glColorFormatNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glColorFormatNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColorFormatNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColorFormatNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColorFormatNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColorFormatNV_Idx) = get_ts();
        }


	

}