#include <glTraceCommon.h>
#include <generated.h>

#define glNormalFormatNV_wrp						\
    ((void  (*)(GLenum type,GLsizei stride                                        \
    ))GL_ENTRY_PTR(glNormalFormatNV_Idx))


GLAPI void  APIENTRY glNormalFormatNV(GLenum type,GLsizei stride)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glNormalFormatNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glNormalFormatNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNormalFormatNV_wrp(type,stride);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNormalFormatNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNormalFormatNV_Idx) ++;

        GL_ENTRY_LAST_TS(glNormalFormatNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNormalFormatNV_Idx),
				 GL_ENTRY_LAST_TS(glNormalFormatNV_Idx));


        if(last_diff > 1000000000){
            printf("glNormalFormatNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNormalFormatNV_Idx),
	             GL_ENTRY_CALL_TIME(glNormalFormatNV_Idx),
	             GL_ENTRY_CALL_TIME(glNormalFormatNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glNormalFormatNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNormalFormatNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNormalFormatNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNormalFormatNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNormalFormatNV_Idx) = get_ts();
        }


	

}