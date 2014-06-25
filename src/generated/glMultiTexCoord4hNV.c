#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord4hNV_wrp						\
    ((void  (*)(GLenum target,GLhalfNV s,GLhalfNV t,GLhalfNV r,GLhalfNV q                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord4hNV_Idx))


GLAPI void  APIENTRY glMultiTexCoord4hNV(GLenum target,GLhalfNV s,GLhalfNV t,GLhalfNV r,GLhalfNV q)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexCoord4hNV_Idx))
	{
            GL_ENTRY_PTR(glMultiTexCoord4hNV_Idx) = dlsym(RTLD_NEXT,"glMultiTexCoord4hNV");
            if(!GL_ENTRY_PTR(glMultiTexCoord4hNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexCoord4hNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord4hNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord4hNV_wrp(target,s,t,r,q);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord4hNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord4hNV_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord4hNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord4hNV_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord4hNV_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexCoord4hNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord4hNV_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord4hNV_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord4hNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord4hNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord4hNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord4hNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord4hNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord4hNV_Idx) = get_ts();
        }


	

}