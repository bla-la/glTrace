#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoord4sv_wrp						\
    ((void  (*)(const GLshort *v                                        \
    ))GL_ENTRY_PTR(glTexCoord4sv_Idx))


GLAPI void  APIENTRY glTexCoord4sv(const GLshort *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexCoord4sv_Idx))
	{
            GL_ENTRY_PTR(glTexCoord4sv_Idx) = dlsym(RTLD_NEXT,"glTexCoord4sv");
            if(!GL_ENTRY_PTR(glTexCoord4sv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexCoord4sv_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoord4sv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoord4sv_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoord4sv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoord4sv_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoord4sv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoord4sv_Idx),
				 GL_ENTRY_LAST_TS(glTexCoord4sv_Idx));
        if(last_diff > 1000000000){
            printf("glTexCoord4sv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoord4sv_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord4sv_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord4sv_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoord4sv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoord4sv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoord4sv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoord4sv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoord4sv_Idx) = get_ts();
        }


	

}