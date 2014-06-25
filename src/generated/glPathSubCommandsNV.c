#include <glTraceCommon.h>
#include <generated.h>

#define glPathSubCommandsNV_wrp						\
    ((void  (*)(GLuint path,GLsizei commandStart,GLsizei commandsToDelete,GLsizei numCommands,const GLubyte *commands,GLsizei numCoords,GLenum coordType,const void *coords                                        \
    ))GL_ENTRY_PTR(glPathSubCommandsNV_Idx))


GLAPI void  APIENTRY glPathSubCommandsNV(GLuint path,GLsizei commandStart,GLsizei commandsToDelete,GLsizei numCommands,const GLubyte *commands,GLsizei numCoords,GLenum coordType,const void *coords)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPathSubCommandsNV_Idx))
	{
            GL_ENTRY_PTR(glPathSubCommandsNV_Idx) = dlsym(RTLD_NEXT,"glPathSubCommandsNV");
            if(!GL_ENTRY_PTR(glPathSubCommandsNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPathSubCommandsNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glPathSubCommandsNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPathSubCommandsNV_wrp(path,commandStart,commandsToDelete,numCommands,commands,numCoords,coordType,coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPathSubCommandsNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPathSubCommandsNV_Idx) ++;

        GL_ENTRY_LAST_TS(glPathSubCommandsNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPathSubCommandsNV_Idx),
				 GL_ENTRY_LAST_TS(glPathSubCommandsNV_Idx));
        if(last_diff > 1000000000){
            printf("glPathSubCommandsNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPathSubCommandsNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathSubCommandsNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathSubCommandsNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glPathSubCommandsNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPathSubCommandsNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPathSubCommandsNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPathSubCommandsNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPathSubCommandsNV_Idx) = get_ts();
        }


	

}