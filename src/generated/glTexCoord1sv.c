#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoord1sv_wrp						\
    ((void  (*)(const GLshort *v                                        \
    ))GL_ENTRY_PTR(glTexCoord1sv_Idx))


GLAPI void  APIENTRY glTexCoord1sv(const GLshort *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexCoord1sv_Idx))
	{
            GL_ENTRY_PTR(glTexCoord1sv_Idx) = dlsym(RTLD_NEXT,"glTexCoord1sv");
            if(!GL_ENTRY_PTR(glTexCoord1sv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexCoord1sv_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoord1sv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoord1sv_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoord1sv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoord1sv_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoord1sv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoord1sv_Idx),
				 GL_ENTRY_LAST_TS(glTexCoord1sv_Idx));
        if(last_diff > 1000000000){
            printf("glTexCoord1sv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoord1sv_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord1sv_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord1sv_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoord1sv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoord1sv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoord1sv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoord1sv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoord1sv_Idx) = get_ts();
        }


	

}