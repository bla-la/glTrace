#include <glTraceCommon.h>
#include <generated.h>

#define glPathColorGenNV_wrp						\
    ((void  (*)(GLenum color,GLenum genMode,GLenum colorFormat,const GLfloat *coeffs                                        \
    ))GL_ENTRY_PTR(glPathColorGenNV_Idx))


GLAPI void  APIENTRY glPathColorGenNV(GLenum color,GLenum genMode,GLenum colorFormat,const GLfloat *coeffs)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPathColorGenNV_Idx))
	{
            GL_ENTRY_PTR(glPathColorGenNV_Idx) = dlsym(RTLD_NEXT,"glPathColorGenNV");
            if(!GL_ENTRY_PTR(glPathColorGenNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPathColorGenNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glPathColorGenNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPathColorGenNV_wrp(color,genMode,colorFormat,coeffs);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPathColorGenNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPathColorGenNV_Idx) ++;

        GL_ENTRY_LAST_TS(glPathColorGenNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPathColorGenNV_Idx),
				 GL_ENTRY_LAST_TS(glPathColorGenNV_Idx));
        if(last_diff > 1000000000){
            printf("glPathColorGenNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPathColorGenNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathColorGenNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathColorGenNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glPathColorGenNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPathColorGenNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPathColorGenNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPathColorGenNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPathColorGenNV_Idx) = get_ts();
        }


	

}