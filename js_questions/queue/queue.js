class Queue{
    collections = [];
    
    enqueue = (ele) =>{
        this.collections.push(ele);
    }
    
    dequeue = () =>{
        this.collections.splice(0,1);
    }

    size = () => this.collections.length;
    
    front = () => this.collections[0];

    isEmpty = () => this.collections.length?false:true;
}


let q1 = new Queue();
q1.enqueue(1);
q1.enqueue(2);
q1.enqueue(3);
console.log(`the current size is ${q1.size()}`);
q1.dequeue();
console.log(`the current size is ${q1.size()}`);
console.log(`the queue is empty:${q1.isEmpty()}`);
console.log(`the current front element is ${q1.front()}`);

