typedef struct s{
    int data;
    struct s *link;
}circularlinkedlistnode;
circularlinkedlistnode * insbegcll(int x,circularlinkedlistnode *first);
circularlinkedlistnode * inspos(int x,circularlinkedlistnode *first,int p);
circularlinkedlistnode * insord(int x,circularlinkedlistnode *first);
circularlinkedlistnode * deletesllnode(int x,circularlinkedlistnode *first);
void display(circularlinkedlistnode *first);