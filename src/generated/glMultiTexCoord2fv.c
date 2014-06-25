#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord2fv_wrp						\
    ((void  (*)(GLenum target,const GLfloat *v                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord2fv_Idx))


GLAPI void  APIENTRY glMultiTexCoord2fv(GLenum target,const GLfloat *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexCoord2fv_Idx))
	{
            GL_ENTRY_PTR(glMultiTexCoord2fv_Idx) = dlsym(RTLD_NEXT,"glMultiTexCoord2fv");
            if(!GL_ENTRY_PTR(glMultiTexCoord2fv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexCoord2fv_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord2fv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord2fv_wrp(target,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord2fv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord2fv_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord2fv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord2fv_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord2fv_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexCoord2fv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord2fv_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord2fv_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord2fv_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord2fv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord2fv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord2fv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord2fv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord2fv_Idx) = get_ts();
        }


	

}