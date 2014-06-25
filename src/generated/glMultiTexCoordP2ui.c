#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoordP2ui_wrp						\
    ((void  (*)(GLenum texture,GLenum type,GLuint coords                                        \
    ))GL_ENTRY_PTR(glMultiTexCoordP2ui_Idx))


GLAPI void  APIENTRY glMultiTexCoordP2ui(GLenum texture,GLenum type,GLuint coords)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexCoordP2ui_Idx))
	{
            GL_ENTRY_PTR(glMultiTexCoordP2ui_Idx) = dlsym(RTLD_NEXT,"glMultiTexCoordP2ui");
            if(!GL_ENTRY_PTR(glMultiTexCoordP2ui_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexCoordP2ui_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoordP2ui_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoordP2ui_wrp(texture,type,coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoordP2ui_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoordP2ui_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoordP2ui_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoordP2ui_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoordP2ui_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexCoordP2ui %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoordP2ui_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoordP2ui_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoordP2ui_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoordP2ui_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoordP2ui_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoordP2ui_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoordP2ui_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoordP2ui_Idx) = get_ts();
        }


	

}