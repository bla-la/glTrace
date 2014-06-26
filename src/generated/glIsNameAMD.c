#include <glTraceCommon.h>
#include <generated.h>

#define glIsNameAMD_wrp						\
    ((GLboolean  (*)(GLenum identifier,GLuint name                                        \
    ))GL_ENTRY_PTR(glIsNameAMD_Idx))


GLAPI GLboolean  APIENTRY glIsNameAMD(GLenum identifier,GLuint name)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIsNameAMD_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsNameAMD_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsNameAMD_wrp(identifier,name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsNameAMD_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsNameAMD_Idx) ++;

        GL_ENTRY_LAST_TS(glIsNameAMD_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsNameAMD_Idx),
				 GL_ENTRY_LAST_TS(glIsNameAMD_Idx));


        if(last_diff > 1000000000){
            printf("glIsNameAMD %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsNameAMD_Idx),
	             GL_ENTRY_CALL_TIME(glIsNameAMD_Idx),
	             GL_ENTRY_CALL_TIME(glIsNameAMD_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsNameAMD_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsNameAMD_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsNameAMD_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsNameAMD_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsNameAMD_Idx) = get_ts();
        }


	return retval;

}