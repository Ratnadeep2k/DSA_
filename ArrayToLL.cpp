class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        // code here
        if(arr.empty()) return nullptr;
        Node* head = new Node(arr[0]);
        Node* curr = head ;
        for(int i =1;i<arr.size();i++)
            curr= curr ->next = new Node(arr[i]);
        return head;
    }
};