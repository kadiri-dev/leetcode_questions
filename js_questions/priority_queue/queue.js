

class Queue{
    collection = [];
    
    enqueue = (ele) =>{
        if(!this.collection.length){
            this.collection.push(ele);            
            return;
        }
        for(let i=0;i<this.collection.length;i++){
            if(ele<this.collection[i]){
                this.collection.splice(i,0,this.collection[i]);
            }
        }

    }

    dequeue = () => {
        if(!this.collection.length){
            return  false;
        }
        this.collection.splice(0,1);
    }

    size = () => this.collection.length;
};


let q = new Queue();
q.enqueue(1);
q.enqueue(4);
q.enqueue(2);
q.enqueue(3);


