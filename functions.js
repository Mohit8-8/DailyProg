// fucntions in JSON

// function funcName(){
//     //do something 

// }

// how to call a function 

// funcName()


// function hello(){
//     console.log('hello world ')
// }


// hello();

// function poem(){
//     console.log('twinke')
//     console.log('little')
// }

// //functions with arguments
// function funcname(args1,args2){
//     //do something
// }



// function Pname(name){
//     console.log(name)

// }


// Pname('Mohit')

// function table(num){
//     for (let i = num; i <= num*10; i+=num) {
//         console.log(i)
        
//     }
// }
// table(2)

//return keyword is used to return some value from the function



// function sum(a,b){
//     return a+b;
// }

// sum(4,6)
// sum(sum(31,341),2)


// //create a program which takes n number and returns the sum of n numbers

// function sum(n){
//     let sum=0
//     for(let i=0 ;i<=n;i++){
//         sum+=i
//     }
//     return sum
// }


// //create a function that returns the conacatenation of all strings in an array

// let str=['hi','bye','weold','mwoe']

// function concat(str){
//     let result;
//     for(let i = 0; i<str.length;i++)[
//         result+=str[i]
//     ]
//     return result
// }

//scope - determines the accessibility of variables objects and funtions from different parts of the code

// let sum = 35;              //global scope // outside of the function

// function calsum(a,b){
//     let sum = a+b;          //function scope    //inside of the function
//     sum;
// }

//in the case of priority the function scope wins because its more specific

//------------------------

// //block scope
// //var declared inside a {} cannnot be accessed from outside of block

// {
//     let a =23;
// }
// console.log(a) // cannot accesss


//----------
// LEXICAL SCOPE - a var defined outside a function can be accessible inside another function defined after the variable declaration 
//the opposite is NOT TRUE


// function outerfunc(){
//     let x=3
//     let y=21
//     function innerfunc(){
//         console.log(x,y);
//     }
//     innerfunc()
// }
// //-------------------------
// //function expressions 

// const var = function(args1,args2){
//     //do something
// }

// const sum = function(a,b){
//     return a + b;
// }

// sum(2,3);
//-----------------

// //HIGHER ORDER FUNCTIONS 
// //1 -       takes one or multiple func as argumernts 
// function mulgreet(func,count){
//     for(let i=1;i<=count;i++){
//         func();
//     }
// }
// let greet=function(){
//     console.log("hello")
// }

// mulgreet(greet, 5)

// mulgreet(function(){console.log('hello')},4)


// //2         returns a function
// function oddeven(req){
//     if(req == 'odd'){
//         return function(n){
//             console.log(!(n%2 == 0))
//         }
//     }else if(req == 'even'){
//         return function(n){
//             console.log(n%2 == 0);
//         }
//     }else{
//         console.log('wrong request')
//     }
// }
// let req='odd';


// //-----------------------------------------
// //METHODS - actions that can be performed on an object

// const calc ={
//     add: function (a,b){
//         return a+b
//     },
//     sub: function(a,b){
//         return a-b;
//     },
//     mul: function(a,b){
//         return a*b;
//     }
// };

// //METHOD SHORTCUT
// const calc={
//     add(a,b){
//         return a+b
//     },
//     sub(a,b){
//         return a-b
//     }
// }