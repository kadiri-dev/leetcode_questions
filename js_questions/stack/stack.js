class Stack {
    count = 0;
    array = [];
    
    push = (ele) => {
        this.array[this.count++]=ele;
    }

    pop = () => {
        if(this.count == 0){
            return undefined;
        }
        this.count--;
        let result = this.array[this.count];
        delete this.array[this.count];        
        return result;
    }

    peek = () => {
        if(this.count == 0){
            return undefined;
        }
        return this.array[this.count-1];
    }

    size = () => {
        return this.count;
    }

};


var myStack = new Stack();
myStack.push(1);
myStack.push(2);
myStack.push(3);
console.log(myStack.peek());
console.log(`the size currently is ${myStack.size()}`);
console.log(myStack.pop());
console.log(`the size currently is ${myStack.size()}`);
