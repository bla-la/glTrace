#include <glTraceCommon.h>
#include <generated.h>

#define glTexGendv_wrp						\
    ((void  (*)(GLenum coord,GLenum pname,const GLdouble *params                                        \
    ))GL_ENTRY_PTR(glTexGendv_Idx))


GLAPI void  APIENTRY glTexGendv(GLenum coord,GLenum pname,const GLdouble *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexGendv_Idx))
	{
            GL_ENTRY_PTR(glTexGendv_Idx) = dlsym(RTLD_NEXT,"glTexGendv");
            if(!GL_ENTRY_PTR(glTexGendv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexGendv_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexGendv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexGendv_wrp(coord,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexGendv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexGendv_Idx) ++;

        GL_ENTRY_LAST_TS(glTexGendv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexGendv_Idx),
				 GL_ENTRY_LAST_TS(glTexGendv_Idx));
        if(last_diff > 1000000000){
            printf("glTexGendv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexGendv_Idx),
	             GL_ENTRY_CALL_TIME(glTexGendv_Idx),
	             GL_ENTRY_CALL_TIME(glTexGendv_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexGendv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexGendv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexGendv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexGendv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexGendv_Idx) = get_ts();
        }


	

}