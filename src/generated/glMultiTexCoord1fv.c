#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord1fv_wrp						\
    ((void  (*)(GLenum target,const GLfloat *v                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord1fv_Idx))


GLAPI void  APIENTRY glMultiTexCoord1fv(GLenum target,const GLfloat *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexCoord1fv_Idx))
	{
            GL_ENTRY_PTR(glMultiTexCoord1fv_Idx) = dlsym(RTLD_NEXT,"glMultiTexCoord1fv");
            if(!GL_ENTRY_PTR(glMultiTexCoord1fv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexCoord1fv_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord1fv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord1fv_wrp(target,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord1fv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord1fv_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord1fv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord1fv_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord1fv_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexCoord1fv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord1fv_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord1fv_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord1fv_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord1fv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord1fv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord1fv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord1fv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord1fv_Idx) = get_ts();
        }


	

}