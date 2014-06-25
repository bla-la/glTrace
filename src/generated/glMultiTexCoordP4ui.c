#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoordP4ui_wrp						\
    ((void  (*)(GLenum texture,GLenum type,GLuint coords                                        \
    ))GL_ENTRY_PTR(glMultiTexCoordP4ui_Idx))


GLAPI void  APIENTRY glMultiTexCoordP4ui(GLenum texture,GLenum type,GLuint coords)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexCoordP4ui_Idx))
	{
            GL_ENTRY_PTR(glMultiTexCoordP4ui_Idx) = dlsym(RTLD_NEXT,"glMultiTexCoordP4ui");
            if(!GL_ENTRY_PTR(glMultiTexCoordP4ui_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexCoordP4ui_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoordP4ui_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoordP4ui_wrp(texture,type,coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoordP4ui_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoordP4ui_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoordP4ui_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoordP4ui_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoordP4ui_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexCoordP4ui %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoordP4ui_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoordP4ui_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoordP4ui_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoordP4ui_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoordP4ui_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoordP4ui_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoordP4ui_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoordP4ui_Idx) = get_ts();
        }


	

}