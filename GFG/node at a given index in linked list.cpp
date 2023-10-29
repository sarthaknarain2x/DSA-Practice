int GetNth(struct node* head, int index){
  // Code here
  int cnt=1;
  while(cnt!=index){
      head=head->next;
      cnt++;
  }
  return head->data;
}
