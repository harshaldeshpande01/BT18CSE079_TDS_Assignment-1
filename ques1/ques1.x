struct message{
    char msg[256];
};

program PROGRAM_PROG{
   version PROGRAM_VERS{
       message chat_func(message)=1;
   }=1;
}=0x12348765;