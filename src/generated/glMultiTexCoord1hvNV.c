#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord1hvNV_wrp						\
    ((void  (*)(GLenum target,const GLhalfNV *v                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord1hvNV_Idx))


GLAPI void  APIENTRY glMultiTexCoord1hvNV(GLenum target,const GLhalfNV *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexCoord1hvNV_Idx))
	{
            GL_ENTRY_PTR(glMultiTexCoord1hvNV_Idx) = dlsym(RTLD_NEXT,"glMultiTexCoord1hvNV");
            if(!GL_ENTRY_PTR(glMultiTexCoord1hvNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexCoord1hvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord1hvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord1hvNV_wrp(target,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord1hvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord1hvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord1hvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord1hvNV_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord1hvNV_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexCoord1hvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord1hvNV_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord1hvNV_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord1hvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord1hvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord1hvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord1hvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord1hvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord1hvNV_Idx) = get_ts();
        }


	

}