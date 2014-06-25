#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord4fv_wrp						\
    ((void  (*)(GLenum target,const GLfloat *v                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord4fv_Idx))


GLAPI void  APIENTRY glMultiTexCoord4fv(GLenum target,const GLfloat *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexCoord4fv_Idx))
	{
            GL_ENTRY_PTR(glMultiTexCoord4fv_Idx) = dlsym(RTLD_NEXT,"glMultiTexCoord4fv");
            if(!GL_ENTRY_PTR(glMultiTexCoord4fv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexCoord4fv_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord4fv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord4fv_wrp(target,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord4fv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord4fv_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord4fv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord4fv_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord4fv_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexCoord4fv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord4fv_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord4fv_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord4fv_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord4fv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord4fv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord4fv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord4fv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord4fv_Idx) = get_ts();
        }


	

}