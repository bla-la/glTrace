#include <glTraceCommon.h>
#include <generated.h>

#define glPointParameterfvSGIS_wrp						\
    ((void  (*)(GLenum pname,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glPointParameterfvSGIS_Idx))


GLAPI void  APIENTRY glPointParameterfvSGIS(GLenum pname,const GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPointParameterfvSGIS_Idx))
	{
            GL_ENTRY_PTR(glPointParameterfvSGIS_Idx) = dlsym(RTLD_NEXT,"glPointParameterfvSGIS");
            if(!GL_ENTRY_PTR(glPointParameterfvSGIS_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPointParameterfvSGIS_Idx))
    	{
            GL_ENTRY_PREV_TS(glPointParameterfvSGIS_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPointParameterfvSGIS_wrp(pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPointParameterfvSGIS_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPointParameterfvSGIS_Idx) ++;

        GL_ENTRY_LAST_TS(glPointParameterfvSGIS_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPointParameterfvSGIS_Idx),
				 GL_ENTRY_LAST_TS(glPointParameterfvSGIS_Idx));
        if(last_diff > 1000000000){
            printf("glPointParameterfvSGIS %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPointParameterfvSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glPointParameterfvSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glPointParameterfvSGIS_Idx) /
	             GL_ENTRY_CALL_COUNT(glPointParameterfvSGIS_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPointParameterfvSGIS_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPointParameterfvSGIS_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPointParameterfvSGIS_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPointParameterfvSGIS_Idx) = get_ts();
        }


	

}