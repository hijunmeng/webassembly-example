mergeInto(LibraryManager.library, {//LibraryManager.library可以简单的理解为JavaScript注入C环境的库
    js_add: function (a, b) {
        console.log("js_add");
        return a + b;
    },

    js_console_log_int: function (param) {
        console.log("js_console_log_int:" + param);
    },

    show_me_the_answer: function () {
        return jsShowMeTheAnswer();//需要在js中动态实现jsShowMeTheAnswer
    }
})