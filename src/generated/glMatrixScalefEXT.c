#include <glTraceCommon.h>
#include <generated.h>

#define glMatrixScalefEXT_wrp						\
    ((void  (*)(GLenum mode,GLfloat x,GLfloat y,GLfloat z                                        \
    ))GL_ENTRY_PTR(glMatrixScalefEXT_Idx))


GLAPI void  APIENTRY glMatrixScalefEXT(GLenum mode,GLfloat x,GLfloat y,GLfloat z)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMatrixScalefEXT_Idx))
	{
            GL_ENTRY_PTR(glMatrixScalefEXT_Idx) = dlsym(RTLD_NEXT,"glMatrixScalefEXT");
            if(!GL_ENTRY_PTR(glMatrixScalefEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMatrixScalefEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMatrixScalefEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMatrixScalefEXT_wrp(mode,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMatrixScalefEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMatrixScalefEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMatrixScalefEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMatrixScalefEXT_Idx),
				 GL_ENTRY_LAST_TS(glMatrixScalefEXT_Idx));
        if(last_diff > 1000000000){
            printf("glMatrixScalefEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMatrixScalefEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixScalefEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixScalefEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMatrixScalefEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMatrixScalefEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMatrixScalefEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMatrixScalefEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMatrixScalefEXT_Idx) = get_ts();
        }


	

}