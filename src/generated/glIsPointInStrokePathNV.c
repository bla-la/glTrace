#include <glTraceCommon.h>
#include <generated.h>

#define glIsPointInStrokePathNV_wrp						\
    ((GLboolean  (*)(GLuint path,GLfloat x,GLfloat y                                        \
    ))GL_ENTRY_PTR(glIsPointInStrokePathNV_Idx))


GLAPI GLboolean  APIENTRY glIsPointInStrokePathNV(GLuint path,GLfloat x,GLfloat y)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glIsPointInStrokePathNV_Idx))
	{
            GL_ENTRY_PTR(glIsPointInStrokePathNV_Idx) = dlsym(RTLD_NEXT,"glIsPointInStrokePathNV");
            if(!GL_ENTRY_PTR(glIsPointInStrokePathNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glIsPointInStrokePathNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsPointInStrokePathNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsPointInStrokePathNV_wrp(path,x,y);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsPointInStrokePathNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsPointInStrokePathNV_Idx) ++;

        GL_ENTRY_LAST_TS(glIsPointInStrokePathNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsPointInStrokePathNV_Idx),
				 GL_ENTRY_LAST_TS(glIsPointInStrokePathNV_Idx));
        if(last_diff > 1000000000){
            printf("glIsPointInStrokePathNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsPointInStrokePathNV_Idx),
	             GL_ENTRY_CALL_TIME(glIsPointInStrokePathNV_Idx),
	             GL_ENTRY_CALL_TIME(glIsPointInStrokePathNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsPointInStrokePathNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsPointInStrokePathNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsPointInStrokePathNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsPointInStrokePathNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsPointInStrokePathNV_Idx) = get_ts();
        }


	return retval;

}