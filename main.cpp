#include "SA.cpp"

int main(int argc, char* argv[]){
    SA sa;
    srand(time(NULL));

    sa.build(argv[1]);
    sa.buildBST();
    while(true){
        sa.simulateAnnealing();
        if(sa.isValid()) break;
    }
    sa.printOutput(argv[2]);

    return 0;
}