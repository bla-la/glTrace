#include <glTraceCommon.h>
#include <generated.h>

#define glReplacementCodeuiVertex3fSUN_wrp						\
    ((void  (*)(GLuint rc,GLfloat x,GLfloat y,GLfloat z                                        \
    ))GL_ENTRY_PTR(glReplacementCodeuiVertex3fSUN_Idx))


GLAPI void  APIENTRY glReplacementCodeuiVertex3fSUN(GLuint rc,GLfloat x,GLfloat y,GLfloat z)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glReplacementCodeuiVertex3fSUN_Idx))
	{
            GL_ENTRY_PTR(glReplacementCodeuiVertex3fSUN_Idx) = dlsym(RTLD_NEXT,"glReplacementCodeuiVertex3fSUN");
            if(!GL_ENTRY_PTR(glReplacementCodeuiVertex3fSUN_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glReplacementCodeuiVertex3fSUN_Idx))
    	{
            GL_ENTRY_PREV_TS(glReplacementCodeuiVertex3fSUN_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glReplacementCodeuiVertex3fSUN_wrp(rc,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glReplacementCodeuiVertex3fSUN_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glReplacementCodeuiVertex3fSUN_Idx) ++;

        GL_ENTRY_LAST_TS(glReplacementCodeuiVertex3fSUN_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glReplacementCodeuiVertex3fSUN_Idx),
				 GL_ENTRY_LAST_TS(glReplacementCodeuiVertex3fSUN_Idx));
        if(last_diff > 1000000000){
            printf("glReplacementCodeuiVertex3fSUN %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glReplacementCodeuiVertex3fSUN_Idx),
	             GL_ENTRY_CALL_TIME(glReplacementCodeuiVertex3fSUN_Idx),
	             GL_ENTRY_CALL_TIME(glReplacementCodeuiVertex3fSUN_Idx) /
	             GL_ENTRY_CALL_COUNT(glReplacementCodeuiVertex3fSUN_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glReplacementCodeuiVertex3fSUN_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glReplacementCodeuiVertex3fSUN_Idx) = 0;
             GL_ENTRY_CALL_TIME(glReplacementCodeuiVertex3fSUN_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glReplacementCodeuiVertex3fSUN_Idx) = get_ts();
        }


	

}