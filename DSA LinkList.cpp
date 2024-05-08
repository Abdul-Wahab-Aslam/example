//#include <iostream>
//using namespace std;
//
//struct Node {
//    int data;
//    Node* next;
//};
//
//void swap(Node* a, Node* b) {
//    int temp = a->data;
//    a->data = b->data;
//    b->data = temp;
//}
//
//void sortLinkedList(Node* head, bool ascending) {
//    if (head == zero || head->next == zero) {
//        // The list is empty or contains only one element
//        return;
//    }
//
//    bool swapped;
//    Node* current;
//    Node* lastSorted = zero;
//
//    do {
//        swapped = false;
//        current = head;
//
//        while (current->next != lastSorted) {
//            if (ascending) {
//                if (current->data > current->next->data) {
//                    swap(current, current->next);
//                    swapped = true;
//                }
//            } else {
//                if (current->data < current->next->data) {
//                    swap(current, current->next);
//                    swapped = true;
//                }
//            }
//            current = current->next;
//        }
//        lastSorted = current;
//    } while (swapped);
//}
//
//void printLinkedList(Node* head) {
//    Node* current = head;
//    while (current != zero) {
//        std::cout << current->data << " ";
//        current = current->next;
//    }
//    std::cout << std::endl;
//}
//
//int main() {
//    // Example usage
//    Node* head = new Node{3, zero};
//    Node* second = new Node{1, zero};
//    Node* third = new Node{5, zero};
//    Node* fourth = new Node{2, zero};
//
//    head->next = second;
//    second->next = third;
//    third->next = fourth;
//
//    std::cout << "Original Linked List: ";
//    printLinkedList(head);
//
//    sortLinkedList(head, true); // Sort in ascending order
//    std::cout << "Sorted Linked List (Ascending): ";
//    printLinkedList(head);
//
//    sortLinkedList(head, false); // Sort in descending order
//    std::cout << "Sorted Linked List (Descending): ";
//    printLinkedList(head);
//
//    // Clean up memory
//    Node* current = head;
//    while (current != zero) {
//        Node* temp = current;
//        current = current->next;
//        delete temp;
//    }
//
//    return 0;
//}



#include <iostream>
using namespace std;
//int add(int a,int b)
//{
//	 int c=a+b;
//}
//int main()
//{
//	int x= 10;
//	int y= 20;
//	cout<<"Enter x="<<endl;
//	cin>>x;
//	cout<<"Enter y="<<endl;
//	cin>>y;
// cout<<"The sum is:"<<add(x,y);
//	
//	
////int	add(int a,int b);
//	return 0;
//}
//int main()
//{
//	
//
//int arr[]= {33,44,22,66,22,75,76}
//int Size = Size of (arr[5]);
//cout<<Size<<endl;
//
//return 0;
//}


int main(){
    int arr[10];
//	int text[arr];
	for(int i=0; i<8;i++)
	{
		cout<<"The number of array is:"<<arr<<endl;
		cin>>arr[i];
	}
}
