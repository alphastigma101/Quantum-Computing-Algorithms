#include <sum.h>
#include <gtest/gtest.h>



class subSetSumTest : public testing::Test {
    // Class that will used for testing  
    protected:
        // Define static data members for test cases
        static std::vector<SubsetPair> pairs;
        static std::vector<int> targets;
};


// Make a wrapper around SubsetPair to index into each pair for testing
std::vector<SubsetPair> subSetSumTest::pairs = {
    {{1, 2, 3}, {1, 2}},
    {{4, 5, 6}, {4, 5}},
    {{7, 8, 9}, {7, 9}},
    {{10, 11, 12}, {10, 12}},
    {{13, 14, 15}, {13, 15}},
    {{16, 17, 18}, {16, 18}},
    {{19, 20, 21}, {19, 21}},
    {{22, 23, 24}, {22, 24}},
    {{25, 26, 27}, {25, 27}},
    {{28, 29, 30}, {28, 30}},
    {{31, 32, 33}, {31, 33}},
    {{34, 35, 36}, {34, 36}},
    {{37, 38, 39}, {37, 39}},
    {{40, 41, 42}, {40, 42}},
    {{43, 44, 45}, {43, 45}},
    {{46, 47, 48}, {46, 48}},
    {{49, 50, 51}, {49, 51}},
    {{52, 53, 54}, {52, 54}},
    {{55, 56, 57}, {55, 57}},
    {{58, 59, 60}, {58, 60}}
};

std::vector<int> subSetSumTest::targets = {
    3, 9, 16, 22, 28, 34, 40, 46, 52, 58,
    64, 70, 76, 82, 88, 94, 100, 106, 112, 118
};


TEST_F(subSetSumTest, TheSum) {
    subSetSum s;
    for (size_t i = 0; i < pairs.size(); ++i) {
        const SubsetPair& pair = pairs[i];
        int expectedSum = targets[i];
        int computedSum = s.compute(pair);
        ASSERT_EQ(computedSum, expectedSum) << "Failed for pair: " << pair;
    }
}

// Driver Code
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
