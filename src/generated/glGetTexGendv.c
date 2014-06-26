#include <glTraceCommon.h>
#include <generated.h>

#define glGetTexGendv_wrp						\
    ((void  (*)(GLenum coord,GLenum pname,GLdouble *params                                        \
    ))GL_ENTRY_PTR(glGetTexGendv_Idx))


GLAPI void  APIENTRY glGetTexGendv(GLenum coord,GLenum pname,GLdouble *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetTexGendv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTexGendv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTexGendv_wrp(coord,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTexGendv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTexGendv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTexGendv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTexGendv_Idx),
				 GL_ENTRY_LAST_TS(glGetTexGendv_Idx));


        if(last_diff > 1000000000){
            printf("glGetTexGendv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTexGendv_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexGendv_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexGendv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTexGendv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTexGendv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTexGendv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTexGendv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTexGendv_Idx) = get_ts();
        }


	

}