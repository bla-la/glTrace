#include <glTraceCommon.h>
#include <generated.h>

#define glPathGlyphsNV_wrp						\
    ((void  (*)(GLuint firstPathName,GLenum fontTarget,const void *fontName,GLbitfield fontStyle,GLsizei numGlyphs,GLenum type,const void *charcodes,GLenum handleMissingGlyphs,GLuint pathParameterTemplate,GLfloat emScale                                        \
    ))GL_ENTRY_PTR(glPathGlyphsNV_Idx))


GLAPI void  APIENTRY glPathGlyphsNV(GLuint firstPathName,GLenum fontTarget,const void *fontName,GLbitfield fontStyle,GLsizei numGlyphs,GLenum type,const void *charcodes,GLenum handleMissingGlyphs,GLuint pathParameterTemplate,GLfloat emScale)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPathGlyphsNV_Idx))
	{
            GL_ENTRY_PTR(glPathGlyphsNV_Idx) = dlsym(RTLD_NEXT,"glPathGlyphsNV");
            if(!GL_ENTRY_PTR(glPathGlyphsNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPathGlyphsNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glPathGlyphsNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPathGlyphsNV_wrp(firstPathName,fontTarget,fontName,fontStyle,numGlyphs,type,charcodes,handleMissingGlyphs,pathParameterTemplate,emScale);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPathGlyphsNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPathGlyphsNV_Idx) ++;

        GL_ENTRY_LAST_TS(glPathGlyphsNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPathGlyphsNV_Idx),
				 GL_ENTRY_LAST_TS(glPathGlyphsNV_Idx));
        if(last_diff > 1000000000){
            printf("glPathGlyphsNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPathGlyphsNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathGlyphsNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathGlyphsNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glPathGlyphsNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPathGlyphsNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPathGlyphsNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPathGlyphsNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPathGlyphsNV_Idx) = get_ts();
        }


	

}