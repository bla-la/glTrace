#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord3sv_wrp						\
    ((void  (*)(GLenum target,const GLshort *v                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord3sv_Idx))


GLAPI void  APIENTRY glMultiTexCoord3sv(GLenum target,const GLshort *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexCoord3sv_Idx))
	{
            GL_ENTRY_PTR(glMultiTexCoord3sv_Idx) = dlsym(RTLD_NEXT,"glMultiTexCoord3sv");
            if(!GL_ENTRY_PTR(glMultiTexCoord3sv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexCoord3sv_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord3sv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord3sv_wrp(target,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord3sv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord3sv_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord3sv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord3sv_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord3sv_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexCoord3sv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord3sv_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord3sv_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord3sv_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord3sv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord3sv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord3sv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord3sv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord3sv_Idx) = get_ts();
        }


	

}