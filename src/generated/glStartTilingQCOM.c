#include <glTraceCommon.h>
#include <generated.h>

#define glStartTilingQCOM_wrp						\
    ((void  (*)(GLuint x,GLuint y,GLuint width,GLuint height,GLbitfield preserveMask                                        \
    ))GL_ENTRY_PTR(glStartTilingQCOM_Idx))


GLAPI void  APIENTRY glStartTilingQCOM(GLuint x,GLuint y,GLuint width,GLuint height,GLbitfield preserveMask)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glStartTilingQCOM_Idx))
    	{
            GL_ENTRY_PREV_TS(glStartTilingQCOM_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glStartTilingQCOM_wrp(x,y,width,height,preserveMask);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glStartTilingQCOM_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glStartTilingQCOM_Idx) ++;

        GL_ENTRY_LAST_TS(glStartTilingQCOM_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glStartTilingQCOM_Idx),
				 GL_ENTRY_LAST_TS(glStartTilingQCOM_Idx));


        if(last_diff > 1000000000){
            printf("glStartTilingQCOM %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glStartTilingQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glStartTilingQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glStartTilingQCOM_Idx) /
	             GL_ENTRY_CALL_COUNT(glStartTilingQCOM_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glStartTilingQCOM_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glStartTilingQCOM_Idx) = 0;
             GL_ENTRY_CALL_TIME(glStartTilingQCOM_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glStartTilingQCOM_Idx) = get_ts();
        }


	

}