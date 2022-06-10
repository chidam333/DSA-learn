typedef struct s{
    int data;
    struct s *link;
}singlelinkedlistnode;
singlelinkedlistnode * insbegsll(int x,singlelinkedlistnode *first);
singlelinkedlistnode * inspos(int x,singlelinkedlistnode *first,int p);
singlelinkedlistnode * insord(int x,singlelinkedlistnode *first);
singlelinkedlistnode * deletesllnode(int x,singlelinkedlistnode *first);
void display(singlelinkedlistnode *first);