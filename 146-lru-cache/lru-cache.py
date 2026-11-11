class Node:
    def __init__(self,key=0,value=0):
        self.key=key
        self.val=value
        self.next=None
        self.next=None


class LRUCache:

    def __init__(self, capacity: int):
        self.cap=capacity
        self.map={}
        self.head=Node()
        self.tail=Node()
        self.head.next=self.tail
        self.tail.prev=self.head
    def _remove(self,node):
        node.prev.next=node.next
        node.next.prev=node.prev
    def _addfront(self,node):
        node.next=self.head.next
        node.prev=self.head
        self.head.next.prev=node
        self.head.next=node

        

    def get(self, key: int) -> int:
        if key not in self.map:
            return -1
        node=self.map[key]
        self._remove(node)
        self._addfront(node)
        return node.val
        

    def put(self, key: int, value: int) -> None:
        if key in self.map:
            node=self.map[key]
            node.val=value
            self._remove(node)
            self._addfront(node)
        else:
            if (len(self.map)==self.cap):
                lru=self.tail.prev
                self._remove(lru)
                del self.map[lru.key]
            node=Node(key,value)
            self.map[key]=node
            self._addfront(node)

        


# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)