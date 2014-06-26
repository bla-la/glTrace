#include <glTraceCommon.h>
#include <generated.h>

#define glPathTexGenNV_wrp						\
    ((void  (*)(GLenum texCoordSet,GLenum genMode,GLint components,const GLfloat *coeffs                                        \
    ))GL_ENTRY_PTR(glPathTexGenNV_Idx))


GLAPI void  APIENTRY glPathTexGenNV(GLenum texCoordSet,GLenum genMode,GLint components,const GLfloat *coeffs)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPathTexGenNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glPathTexGenNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPathTexGenNV_wrp(texCoordSet,genMode,components,coeffs);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPathTexGenNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPathTexGenNV_Idx) ++;

        GL_ENTRY_LAST_TS(glPathTexGenNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPathTexGenNV_Idx),
				 GL_ENTRY_LAST_TS(glPathTexGenNV_Idx));


        if(last_diff > 1000000000){
            printf("glPathTexGenNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPathTexGenNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathTexGenNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathTexGenNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glPathTexGenNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPathTexGenNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPathTexGenNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPathTexGenNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPathTexGenNV_Idx) = get_ts();
        }


	

}