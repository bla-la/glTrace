#include <glTraceCommon.h>
#include <generated.h>

#define glPrimitiveBoundingBoxEXT_wrp						\
    ((void  (*)(GLfloat minX,GLfloat minY,GLfloat minZ,GLfloat minW,GLfloat maxX,GLfloat maxY,GLfloat maxZ,GLfloat maxW                                        \
    ))GL_ENTRY_PTR(glPrimitiveBoundingBoxEXT_Idx))


GLAPI void  APIENTRY glPrimitiveBoundingBoxEXT(GLfloat minX,GLfloat minY,GLfloat minZ,GLfloat minW,GLfloat maxX,GLfloat maxY,GLfloat maxZ,GLfloat maxW)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPrimitiveBoundingBoxEXT_Idx))
	{
            GL_ENTRY_PTR(glPrimitiveBoundingBoxEXT_Idx) = dlsym(RTLD_NEXT,"glPrimitiveBoundingBoxEXT");
            if(!GL_ENTRY_PTR(glPrimitiveBoundingBoxEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPrimitiveBoundingBoxEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glPrimitiveBoundingBoxEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPrimitiveBoundingBoxEXT_wrp(minX,minY,minZ,minW,maxX,maxY,maxZ,maxW);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPrimitiveBoundingBoxEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPrimitiveBoundingBoxEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glPrimitiveBoundingBoxEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPrimitiveBoundingBoxEXT_Idx),
				 GL_ENTRY_LAST_TS(glPrimitiveBoundingBoxEXT_Idx));
        if(last_diff > 1000000000){
            printf("glPrimitiveBoundingBoxEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPrimitiveBoundingBoxEXT_Idx),
	             GL_ENTRY_CALL_TIME(glPrimitiveBoundingBoxEXT_Idx),
	             GL_ENTRY_CALL_TIME(glPrimitiveBoundingBoxEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glPrimitiveBoundingBoxEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPrimitiveBoundingBoxEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPrimitiveBoundingBoxEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPrimitiveBoundingBoxEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPrimitiveBoundingBoxEXT_Idx) = get_ts();
        }


	

}