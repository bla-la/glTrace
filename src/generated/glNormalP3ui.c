#include <glTraceCommon.h>
#include <generated.h>

#define glNormalP3ui_wrp						\
    ((void  (*)(GLenum type,GLuint coords                                        \
    ))GL_ENTRY_PTR(glNormalP3ui_Idx))


GLAPI void  APIENTRY glNormalP3ui(GLenum type,GLuint coords)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glNormalP3ui_Idx))
    	{
            GL_ENTRY_PREV_TS(glNormalP3ui_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNormalP3ui_wrp(type,coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNormalP3ui_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNormalP3ui_Idx) ++;

        GL_ENTRY_LAST_TS(glNormalP3ui_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNormalP3ui_Idx),
				 GL_ENTRY_LAST_TS(glNormalP3ui_Idx));


        if(last_diff > 1000000000){
            printf("glNormalP3ui %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNormalP3ui_Idx),
	             GL_ENTRY_CALL_TIME(glNormalP3ui_Idx),
	             GL_ENTRY_CALL_TIME(glNormalP3ui_Idx) /
	             GL_ENTRY_CALL_COUNT(glNormalP3ui_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNormalP3ui_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNormalP3ui_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNormalP3ui_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNormalP3ui_Idx) = get_ts();
        }


	

}