#include <glTraceCommon.h>
#include <generated.h>

#define glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN_wrp						\
    ((void  (*)(const GLuint *rc,const GLfloat *tc,const GLfloat *n,const GLfloat *v                                        \
    ))GL_ENTRY_PTR(glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN_Idx))


GLAPI void  APIENTRY glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(const GLuint *rc,const GLfloat *tc,const GLfloat *n,const GLfloat *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN_Idx))
    	{
            GL_ENTRY_PREV_TS(glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN_wrp(rc,tc,n,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN_Idx) ++;

        GL_ENTRY_LAST_TS(glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN_Idx),
				 GL_ENTRY_LAST_TS(glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN_Idx));


        if(last_diff > 1000000000){
            printf("glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN_Idx),
	             GL_ENTRY_CALL_TIME(glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN_Idx),
	             GL_ENTRY_CALL_TIME(glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN_Idx) /
	             GL_ENTRY_CALL_COUNT(glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN_Idx) = 0;
             GL_ENTRY_CALL_TIME(glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN_Idx) = get_ts();
        }


	

}