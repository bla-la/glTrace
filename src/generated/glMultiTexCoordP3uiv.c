#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoordP3uiv_wrp						\
    ((void  (*)(GLenum texture,GLenum type,const GLuint *coords                                        \
    ))GL_ENTRY_PTR(glMultiTexCoordP3uiv_Idx))


GLAPI void  APIENTRY glMultiTexCoordP3uiv(GLenum texture,GLenum type,const GLuint *coords)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiTexCoordP3uiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoordP3uiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoordP3uiv_wrp(texture,type,coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoordP3uiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoordP3uiv_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoordP3uiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoordP3uiv_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoordP3uiv_Idx));


        if(last_diff > 1000000000){
            printf("glMultiTexCoordP3uiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoordP3uiv_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoordP3uiv_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoordP3uiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoordP3uiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoordP3uiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoordP3uiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoordP3uiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoordP3uiv_Idx) = get_ts();
        }


	

}