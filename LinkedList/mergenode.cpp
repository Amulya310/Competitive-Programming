int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *temp1=head1;
    SinglyLinkedListNode *temp2=head2;

    //Do till the two nodes are the same
    while(temp1 != temp2){
        //If you reached the end of one list start at the beginning of the other one
        //currentA
        if(temp1->next == NULL){
            temp1 = head2;
        }else{
            temp1 = temp1->next;
        }
        //currentB
        if(temp2->next == NULL){
            temp2 = head1;
        }else{
            temp2 = temp2->next;
        }
    }
    return(temp2->data);


}