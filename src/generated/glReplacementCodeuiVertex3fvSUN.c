#include <glTraceCommon.h>
#include <generated.h>

#define glReplacementCodeuiVertex3fvSUN_wrp						\
    ((void  (*)(const GLuint *rc,const GLfloat *v                                        \
    ))GL_ENTRY_PTR(glReplacementCodeuiVertex3fvSUN_Idx))


GLAPI void  APIENTRY glReplacementCodeuiVertex3fvSUN(const GLuint *rc,const GLfloat *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glReplacementCodeuiVertex3fvSUN_Idx))
	{
            GL_ENTRY_PTR(glReplacementCodeuiVertex3fvSUN_Idx) = dlsym(RTLD_NEXT,"glReplacementCodeuiVertex3fvSUN");
            if(!GL_ENTRY_PTR(glReplacementCodeuiVertex3fvSUN_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glReplacementCodeuiVertex3fvSUN_Idx))
    	{
            GL_ENTRY_PREV_TS(glReplacementCodeuiVertex3fvSUN_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glReplacementCodeuiVertex3fvSUN_wrp(rc,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glReplacementCodeuiVertex3fvSUN_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glReplacementCodeuiVertex3fvSUN_Idx) ++;

        GL_ENTRY_LAST_TS(glReplacementCodeuiVertex3fvSUN_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glReplacementCodeuiVertex3fvSUN_Idx),
				 GL_ENTRY_LAST_TS(glReplacementCodeuiVertex3fvSUN_Idx));
        if(last_diff > 1000000000){
            printf("glReplacementCodeuiVertex3fvSUN %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glReplacementCodeuiVertex3fvSUN_Idx),
	             GL_ENTRY_CALL_TIME(glReplacementCodeuiVertex3fvSUN_Idx),
	             GL_ENTRY_CALL_TIME(glReplacementCodeuiVertex3fvSUN_Idx) /
	             GL_ENTRY_CALL_COUNT(glReplacementCodeuiVertex3fvSUN_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glReplacementCodeuiVertex3fvSUN_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glReplacementCodeuiVertex3fvSUN_Idx) = 0;
             GL_ENTRY_CALL_TIME(glReplacementCodeuiVertex3fvSUN_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glReplacementCodeuiVertex3fvSUN_Idx) = get_ts();
        }


	

}