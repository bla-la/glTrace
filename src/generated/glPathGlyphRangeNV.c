#include <glTraceCommon.h>
#include <generated.h>

#define glPathGlyphRangeNV_wrp						\
    ((void  (*)(GLuint firstPathName,GLenum fontTarget,const void *fontName,GLbitfield fontStyle,GLuint firstGlyph,GLsizei numGlyphs,GLenum handleMissingGlyphs,GLuint pathParameterTemplate,GLfloat emScale                                        \
    ))GL_ENTRY_PTR(glPathGlyphRangeNV_Idx))


GLAPI void  APIENTRY glPathGlyphRangeNV(GLuint firstPathName,GLenum fontTarget,const void *fontName,GLbitfield fontStyle,GLuint firstGlyph,GLsizei numGlyphs,GLenum handleMissingGlyphs,GLuint pathParameterTemplate,GLfloat emScale)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPathGlyphRangeNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glPathGlyphRangeNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPathGlyphRangeNV_wrp(firstPathName,fontTarget,fontName,fontStyle,firstGlyph,numGlyphs,handleMissingGlyphs,pathParameterTemplate,emScale);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPathGlyphRangeNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPathGlyphRangeNV_Idx) ++;

        GL_ENTRY_LAST_TS(glPathGlyphRangeNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPathGlyphRangeNV_Idx),
				 GL_ENTRY_LAST_TS(glPathGlyphRangeNV_Idx));


        if(last_diff > 1000000000){
            printf("glPathGlyphRangeNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPathGlyphRangeNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathGlyphRangeNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathGlyphRangeNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glPathGlyphRangeNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPathGlyphRangeNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPathGlyphRangeNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPathGlyphRangeNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPathGlyphRangeNV_Idx) = get_ts();
        }


	

}