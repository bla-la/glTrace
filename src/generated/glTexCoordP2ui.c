#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoordP2ui_wrp						\
    ((void  (*)(GLenum type,GLuint coords                                        \
    ))GL_ENTRY_PTR(glTexCoordP2ui_Idx))


GLAPI void  APIENTRY glTexCoordP2ui(GLenum type,GLuint coords)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexCoordP2ui_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoordP2ui_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoordP2ui_wrp(type,coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoordP2ui_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoordP2ui_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoordP2ui_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoordP2ui_Idx),
				 GL_ENTRY_LAST_TS(glTexCoordP2ui_Idx));


        if(last_diff > 1000000000){
            printf("glTexCoordP2ui %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoordP2ui_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoordP2ui_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoordP2ui_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoordP2ui_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoordP2ui_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoordP2ui_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoordP2ui_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoordP2ui_Idx) = get_ts();
        }


	

}