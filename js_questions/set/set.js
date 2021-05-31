class mySet {
    constructor(collection=[]) {
        this.collection = collection;
        this.size = collection.length;
    }

  has = (ele) => {
    if (this.collection.indexOf(ele) != -1) {
      return true;
    }
    return false;
  };

  add = (ele) => {
    if (this.has(ele)) return false;
    this.collection.push(ele);
    this.size++;
    return true;
  };

  delete = (ele) => {
    if (!this.has(ele)) return false;
    let index = this.collection.indexOf(ele);
    this.collection.splice(index, 1);
    this.size--;
    return true;
  };

  length = () => this.size;  

  union = (set2) => {
    let mySet1 = new mySet();
    this.collection.forEach((element) => {
      if (!set2.has(element)) {
        mySet1.add(element);
        this.size++;
      }
    });
    return mySet1;
  };

  intersection = (set2) => {
    let mySet1 = new mySet();
    this.collection.forEach((element) => {
      if (set2.has(element)) {
        mySet1.add(element);
      }
    });
    return mySet1;
  };
}


let set1 = new mySet([1,2,3,4,5]);
set1.add(1);
set1.add(7);
set1.add(8);
console.log(`ths current size is ${set1.length()}`);
set1.delete(3);
console.log(`ths current size is ${set1.length()}`);