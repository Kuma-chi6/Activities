#include <iostream>

int main()
{

    int list[2][3][4] = {
        {
            {2,4,6,8},
            {1,3,5,7},
            {9,8,7,6}
        },
        {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        }
    };

    for(int table = 0; table < 2; table++){
        for(int row = 0; row < 3; row++){
            for(int col = 0; col < 4; col++){
                std::cout << "Arrays [" << table << "][" << row << "][" << col << "][" << " = "  << list[table][row][col] << std::endl;
            }
            std::cout<<std::endl;
        }
    }

    std::cout << "\nUpdating Array" << std::endl;

    for(int table = 0; table < 2; table++){
        for(int row = 0; row < 3; row++){
            for(int col = 0; col < 4; col++){
                std::cout << "Arrays [" << table << "][" << row << "][" << col << "][" << " = ";
                std::cin >> list[table][row][col]; 
            }
            std::cout<<std::endl;
        }
    }

    std::cout << "\nUpdated Array" << std::endl;

    for(int table = 0; table < 2; table++){
        for(int row = 0; row < 3; row++){
            for(int col = 0; col < 4; col++){
                std::cout << "Arrays [" << table << "][" << row << "][" << col << "][" << " = "  << list[table][row][col] << std::endl;
            }
            std::cout<<std::endl;
        }
    }

    

   return 0;

}