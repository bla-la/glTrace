#include <glTraceCommon.h>
#include <generated.h>

#define glReplacementCodeuiTexCoord2fVertex3fSUN_wrp						\
    ((void  (*)(GLuint rc,GLfloat s,GLfloat t,GLfloat x,GLfloat y,GLfloat z                                        \
    ))GL_ENTRY_PTR(glReplacementCodeuiTexCoord2fVertex3fSUN_Idx))


GLAPI void  APIENTRY glReplacementCodeuiTexCoord2fVertex3fSUN(GLuint rc,GLfloat s,GLfloat t,GLfloat x,GLfloat y,GLfloat z)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glReplacementCodeuiTexCoord2fVertex3fSUN_Idx))
    	{
            GL_ENTRY_PREV_TS(glReplacementCodeuiTexCoord2fVertex3fSUN_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glReplacementCodeuiTexCoord2fVertex3fSUN_wrp(rc,s,t,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glReplacementCodeuiTexCoord2fVertex3fSUN_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glReplacementCodeuiTexCoord2fVertex3fSUN_Idx) ++;

        GL_ENTRY_LAST_TS(glReplacementCodeuiTexCoord2fVertex3fSUN_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glReplacementCodeuiTexCoord2fVertex3fSUN_Idx),
				 GL_ENTRY_LAST_TS(glReplacementCodeuiTexCoord2fVertex3fSUN_Idx));


        if(last_diff > 1000000000){
            printf("glReplacementCodeuiTexCoord2fVertex3fSUN %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glReplacementCodeuiTexCoord2fVertex3fSUN_Idx),
	             GL_ENTRY_CALL_TIME(glReplacementCodeuiTexCoord2fVertex3fSUN_Idx),
	             GL_ENTRY_CALL_TIME(glReplacementCodeuiTexCoord2fVertex3fSUN_Idx) /
	             GL_ENTRY_CALL_COUNT(glReplacementCodeuiTexCoord2fVertex3fSUN_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glReplacementCodeuiTexCoord2fVertex3fSUN_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glReplacementCodeuiTexCoord2fVertex3fSUN_Idx) = 0;
             GL_ENTRY_CALL_TIME(glReplacementCodeuiTexCoord2fVertex3fSUN_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glReplacementCodeuiTexCoord2fVertex3fSUN_Idx) = get_ts();
        }


	

}