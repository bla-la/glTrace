#include <glTraceCommon.h>
#include <generated.h>

#define glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN_wrp						\
    ((void  (*)(GLuint rc,GLfloat s,GLfloat t,GLfloat nx,GLfloat ny,GLfloat nz,GLfloat x,GLfloat y,GLfloat z                                        \
    ))GL_ENTRY_PTR(glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN_Idx))


GLAPI void  APIENTRY glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(GLuint rc,GLfloat s,GLfloat t,GLfloat nx,GLfloat ny,GLfloat nz,GLfloat x,GLfloat y,GLfloat z)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN_Idx))
	{
            GL_ENTRY_PTR(glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN_Idx) = dlsym(RTLD_NEXT,"glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN");
            if(!GL_ENTRY_PTR(glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN_Idx))
    	{
            GL_ENTRY_PREV_TS(glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN_wrp(rc,s,t,nx,ny,nz,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN_Idx) ++;

        GL_ENTRY_LAST_TS(glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN_Idx),
				 GL_ENTRY_LAST_TS(glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN_Idx));
        if(last_diff > 1000000000){
            printf("glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN_Idx),
	             GL_ENTRY_CALL_TIME(glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN_Idx),
	             GL_ENTRY_CALL_TIME(glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN_Idx) /
	             GL_ENTRY_CALL_COUNT(glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN_Idx) = 0;
             GL_ENTRY_CALL_TIME(glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN_Idx) = get_ts();
        }


	

}