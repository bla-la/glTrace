#include <glTraceCommon.h>
#include <generated.h>

#define glPathCommandsNV_wrp						\
    ((void  (*)(GLuint path,GLsizei numCommands,const GLubyte *commands,GLsizei numCoords,GLenum coordType,const void *coords                                        \
    ))GL_ENTRY_PTR(glPathCommandsNV_Idx))


GLAPI void  APIENTRY glPathCommandsNV(GLuint path,GLsizei numCommands,const GLubyte *commands,GLsizei numCoords,GLenum coordType,const void *coords)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPathCommandsNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glPathCommandsNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPathCommandsNV_wrp(path,numCommands,commands,numCoords,coordType,coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPathCommandsNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPathCommandsNV_Idx) ++;

        GL_ENTRY_LAST_TS(glPathCommandsNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPathCommandsNV_Idx),
				 GL_ENTRY_LAST_TS(glPathCommandsNV_Idx));


        if(last_diff > 1000000000){
            printf("glPathCommandsNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPathCommandsNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathCommandsNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathCommandsNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glPathCommandsNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPathCommandsNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPathCommandsNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPathCommandsNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPathCommandsNV_Idx) = get_ts();
        }


	

}