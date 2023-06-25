
// /*
// Problem Statement: Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and 
// then return the matrix.
// */


// #include<iostream>
// #include<vector>


// void rowZero(std::vector<std::vector<int>> &matrix, int m, int n, int i) {
//     for(int j=0;j<m;j++) {
//         if(matrix[i][j] != 0) {
//             matrix[i][j] = -1;
//         }
//     }

// }


// void colZero(std::vector<std::vector<int>> &matrix, int m, int n, int j) {
//     for(int i=0;i<n;i++) {
//         if(matrix[i][j] != 0) {
//             matrix[i][j] = -1;
//         }
//     }
// }


// std::vector<std::vector<int>> zeroMatrix(std::vector<std::vector<int>> &matrix, int m, int n) {
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<m;j++) {
//             if(matrix[i][j] == 0) {
//                 rowZero(matrix, m, n, i);
//                 colZero(matrix, m, n, j);
//             }
//         }
//     }

//     for(int i=0;i<n;i++) {
//         for(int j = 0;j<m;j++) {
//             if(matrix[i][j] == -1) {
//                 matrix[i][j] = 0;
//             }
//         }
//     }

//     return matrix;
// }

// int main()
// {
//     std::vector<std::vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    
//     int n = matrix.size();
//     int m = matrix[0].size();

//     std::vector<std::vector<int>> result = zeroMatrix(matrix, m, n);

//     for(auto it : result) {
//         for(auto ele : it) {
//             std::cout<<ele<<"\t";
//         }
//         std::cout<<std::endl;
//     } 


//     return 0;
// }


// better approach

/**
 Solution
  1. create two array of size n and m.
  2. traverse throughout the matrix.
  3. If any cell (i,j) contains the value 0, we will mark ith index of row array i.e. row[i] and jth index of col array col[j] as 1. It signifies that all the elements in the ith row and jth column will be 0 in the final matrix.
  4. We will perform step 3 for every cell containing 0.
  5. Finally, we will again traverse the entire matrix and we will put 0 into all the cells (i, j) for which either row[i] or col[j] is marked as 1.
  6. Thus we will get our final matrix.
 **/


#include<iostream>
#include<vector>


std::vector<std::vector<int>> solution(std::vector<std::vector<int>> &matrix, int m, int n) {

    int row[m] = {0};
    int col[n] = {0};

    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            if(matrix[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }


    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            if(row[i] || col[j]) {
                matrix[i][j] = 0;
            }
        }
    }

    return matrix;
}

int main()
{
    std::vector<std::vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};

    int m = matrix.size();
    int n = matrix[0].size();

    std::vector<std::vector<int>> result = solution(matrix, m, n);


    for(auto it : result) {
        for(auto ele : it) {
            std::cout<<ele<<"\t";
        }
        std::cout<<"\n";
    }

    return 0;
}


/*
    Complexity

    O(2*(m*n)) - Time
    O(m+n) - Space
*/