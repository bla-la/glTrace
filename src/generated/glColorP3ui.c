#include <glTraceCommon.h>
#include <generated.h>

#define glColorP3ui_wrp						\
    ((void  (*)(GLenum type,GLuint color                                        \
    ))GL_ENTRY_PTR(glColorP3ui_Idx))


GLAPI void  APIENTRY glColorP3ui(GLenum type,GLuint color)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glColorP3ui_Idx))
    	{
            GL_ENTRY_PREV_TS(glColorP3ui_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColorP3ui_wrp(type,color);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColorP3ui_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColorP3ui_Idx) ++;

        GL_ENTRY_LAST_TS(glColorP3ui_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColorP3ui_Idx),
				 GL_ENTRY_LAST_TS(glColorP3ui_Idx));


        if(last_diff > 1000000000){
            printf("glColorP3ui %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColorP3ui_Idx),
	             GL_ENTRY_CALL_TIME(glColorP3ui_Idx),
	             GL_ENTRY_CALL_TIME(glColorP3ui_Idx) /
	             GL_ENTRY_CALL_COUNT(glColorP3ui_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColorP3ui_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColorP3ui_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColorP3ui_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColorP3ui_Idx) = get_ts();
        }


	

}