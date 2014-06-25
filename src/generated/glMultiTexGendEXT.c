#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexGendEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum coord,GLenum pname,GLdouble param                                        \
    ))GL_ENTRY_PTR(glMultiTexGendEXT_Idx))


GLAPI void  APIENTRY glMultiTexGendEXT(GLenum texunit,GLenum coord,GLenum pname,GLdouble param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexGendEXT_Idx))
	{
            GL_ENTRY_PTR(glMultiTexGendEXT_Idx) = dlsym(RTLD_NEXT,"glMultiTexGendEXT");
            if(!GL_ENTRY_PTR(glMultiTexGendEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexGendEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexGendEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexGendEXT_wrp(texunit,coord,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexGendEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexGendEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexGendEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexGendEXT_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexGendEXT_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexGendEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexGendEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexGendEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexGendEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexGendEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexGendEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexGendEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexGendEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexGendEXT_Idx) = get_ts();
        }


	

}