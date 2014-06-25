#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord3hvNV_wrp						\
    ((void  (*)(GLenum target,const GLhalfNV *v                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord3hvNV_Idx))


GLAPI void  APIENTRY glMultiTexCoord3hvNV(GLenum target,const GLhalfNV *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexCoord3hvNV_Idx))
	{
            GL_ENTRY_PTR(glMultiTexCoord3hvNV_Idx) = dlsym(RTLD_NEXT,"glMultiTexCoord3hvNV");
            if(!GL_ENTRY_PTR(glMultiTexCoord3hvNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexCoord3hvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord3hvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord3hvNV_wrp(target,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord3hvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord3hvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord3hvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord3hvNV_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord3hvNV_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexCoord3hvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord3hvNV_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord3hvNV_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord3hvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord3hvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord3hvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord3hvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord3hvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord3hvNV_Idx) = get_ts();
        }


	

}