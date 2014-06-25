#include <glTraceCommon.h>
#include <generated.h>

#define glReplacementCodeuiColor4fNormal3fVertex3fvSUN_wrp						\
    ((void  (*)(const GLuint *rc,const GLfloat *c,const GLfloat *n,const GLfloat *v                                        \
    ))GL_ENTRY_PTR(glReplacementCodeuiColor4fNormal3fVertex3fvSUN_Idx))


GLAPI void  APIENTRY glReplacementCodeuiColor4fNormal3fVertex3fvSUN(const GLuint *rc,const GLfloat *c,const GLfloat *n,const GLfloat *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glReplacementCodeuiColor4fNormal3fVertex3fvSUN_Idx))
	{
            GL_ENTRY_PTR(glReplacementCodeuiColor4fNormal3fVertex3fvSUN_Idx) = dlsym(RTLD_NEXT,"glReplacementCodeuiColor4fNormal3fVertex3fvSUN");
            if(!GL_ENTRY_PTR(glReplacementCodeuiColor4fNormal3fVertex3fvSUN_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glReplacementCodeuiColor4fNormal3fVertex3fvSUN_Idx))
    	{
            GL_ENTRY_PREV_TS(glReplacementCodeuiColor4fNormal3fVertex3fvSUN_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glReplacementCodeuiColor4fNormal3fVertex3fvSUN_wrp(rc,c,n,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glReplacementCodeuiColor4fNormal3fVertex3fvSUN_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glReplacementCodeuiColor4fNormal3fVertex3fvSUN_Idx) ++;

        GL_ENTRY_LAST_TS(glReplacementCodeuiColor4fNormal3fVertex3fvSUN_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glReplacementCodeuiColor4fNormal3fVertex3fvSUN_Idx),
				 GL_ENTRY_LAST_TS(glReplacementCodeuiColor4fNormal3fVertex3fvSUN_Idx));
        if(last_diff > 1000000000){
            printf("glReplacementCodeuiColor4fNormal3fVertex3fvSUN %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glReplacementCodeuiColor4fNormal3fVertex3fvSUN_Idx),
	             GL_ENTRY_CALL_TIME(glReplacementCodeuiColor4fNormal3fVertex3fvSUN_Idx),
	             GL_ENTRY_CALL_TIME(glReplacementCodeuiColor4fNormal3fVertex3fvSUN_Idx) /
	             GL_ENTRY_CALL_COUNT(glReplacementCodeuiColor4fNormal3fVertex3fvSUN_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glReplacementCodeuiColor4fNormal3fVertex3fvSUN_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glReplacementCodeuiColor4fNormal3fVertex3fvSUN_Idx) = 0;
             GL_ENTRY_CALL_TIME(glReplacementCodeuiColor4fNormal3fVertex3fvSUN_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glReplacementCodeuiColor4fNormal3fVertex3fvSUN_Idx) = get_ts();
        }


	

}