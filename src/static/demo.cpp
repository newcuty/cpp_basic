
extern int non_static_function();
extern int static_function();

int test_static_function(){


    non_static_function();
    //static_function();         //this is will lead compile  error:undefined reference to `static_function()'
    return 0;
}