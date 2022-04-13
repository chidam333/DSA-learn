function enque(){
    var queue = [];
    var enqueue = function(item){
        queue.push(item);
    };
    var dequeue = function(){
        return queue.shift();
    };
    var size = function(){
        return queue.length;
    };
    var isEmpty = function(){
        return queue.length === 0;
    };
    return {
        enqueue: enqueue,
        dequeue: dequeue,
        size: size,
        isEmpty: isEmpty
    };
}