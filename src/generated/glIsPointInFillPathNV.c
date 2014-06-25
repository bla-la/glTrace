#include <glTraceCommon.h>
#include <generated.h>

#define glIsPointInFillPathNV_wrp						\
    ((GLboolean  (*)(GLuint path,GLuint mask,GLfloat x,GLfloat y                                        \
    ))GL_ENTRY_PTR(glIsPointInFillPathNV_Idx))


GLAPI GLboolean  APIENTRY glIsPointInFillPathNV(GLuint path,GLuint mask,GLfloat x,GLfloat y)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glIsPointInFillPathNV_Idx))
	{
            GL_ENTRY_PTR(glIsPointInFillPathNV_Idx) = dlsym(RTLD_NEXT,"glIsPointInFillPathNV");
            if(!GL_ENTRY_PTR(glIsPointInFillPathNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glIsPointInFillPathNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsPointInFillPathNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsPointInFillPathNV_wrp(path,mask,x,y);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsPointInFillPathNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsPointInFillPathNV_Idx) ++;

        GL_ENTRY_LAST_TS(glIsPointInFillPathNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsPointInFillPathNV_Idx),
				 GL_ENTRY_LAST_TS(glIsPointInFillPathNV_Idx));
        if(last_diff > 1000000000){
            printf("glIsPointInFillPathNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsPointInFillPathNV_Idx),
	             GL_ENTRY_CALL_TIME(glIsPointInFillPathNV_Idx),
	             GL_ENTRY_CALL_TIME(glIsPointInFillPathNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsPointInFillPathNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsPointInFillPathNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsPointInFillPathNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsPointInFillPathNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsPointInFillPathNV_Idx) = get_ts();
        }


	return retval;

}