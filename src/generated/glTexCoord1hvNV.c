#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoord1hvNV_wrp						\
    ((void  (*)(const GLhalfNV *v                                        \
    ))GL_ENTRY_PTR(glTexCoord1hvNV_Idx))


GLAPI void  APIENTRY glTexCoord1hvNV(const GLhalfNV *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexCoord1hvNV_Idx))
	{
            GL_ENTRY_PTR(glTexCoord1hvNV_Idx) = dlsym(RTLD_NEXT,"glTexCoord1hvNV");
            if(!GL_ENTRY_PTR(glTexCoord1hvNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexCoord1hvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoord1hvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoord1hvNV_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoord1hvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoord1hvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoord1hvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoord1hvNV_Idx),
				 GL_ENTRY_LAST_TS(glTexCoord1hvNV_Idx));
        if(last_diff > 1000000000){
            printf("glTexCoord1hvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoord1hvNV_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord1hvNV_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord1hvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoord1hvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoord1hvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoord1hvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoord1hvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoord1hvNV_Idx) = get_ts();
        }


	

}