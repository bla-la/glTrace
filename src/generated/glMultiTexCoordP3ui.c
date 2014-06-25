#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoordP3ui_wrp						\
    ((void  (*)(GLenum texture,GLenum type,GLuint coords                                        \
    ))GL_ENTRY_PTR(glMultiTexCoordP3ui_Idx))


GLAPI void  APIENTRY glMultiTexCoordP3ui(GLenum texture,GLenum type,GLuint coords)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexCoordP3ui_Idx))
	{
            GL_ENTRY_PTR(glMultiTexCoordP3ui_Idx) = dlsym(RTLD_NEXT,"glMultiTexCoordP3ui");
            if(!GL_ENTRY_PTR(glMultiTexCoordP3ui_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexCoordP3ui_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoordP3ui_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoordP3ui_wrp(texture,type,coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoordP3ui_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoordP3ui_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoordP3ui_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoordP3ui_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoordP3ui_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexCoordP3ui %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoordP3ui_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoordP3ui_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoordP3ui_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoordP3ui_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoordP3ui_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoordP3ui_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoordP3ui_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoordP3ui_Idx) = get_ts();
        }


	

}