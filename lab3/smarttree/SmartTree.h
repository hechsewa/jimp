//
// Created by hushmans on 20.03.17.
//

#ifndef JIMP_EXERCISES_SMARTTREE_H
#define JIMP_EXERCISES_SMARTTREE_H
#include <ostream>
#include <string>
#include <regex>
#include <memory>

namespace datastructures {
    struct SmartTree{
        int value=0;
        SmartTree* parent;
        std::unique_ptr<SmartTree> left  = nullptr;
        std::unique_ptr<SmartTree> right = nullptr;
    };

    std::unique_ptr <SmartTree> CreateLeaf(int value); //tworzy nowy lisc
    std::unique_ptr <SmartTree> InsertLeftChild(std::unique_ptr <SmartTree> tree, std::unique_ptr <SmartTree> left_subtree);
    std::unique_ptr <SmartTree> InsertRightChild(std::unique_ptr <SmartTree> tree, std::unique_ptr <SmartTree> right_subtree);
    void PrintTreeInOrder(const std::unique_ptr <SmartTree> &unique_ptr, std::ostream *out);
    std::string DumpTree(const std::unique_ptr <SmartTree> &tree);
    std::unique_ptr <SmartTree> RestoreTree(const std::string &tree);
    //std::unique_ptr<SmartTree> ReadData(const std::string& tree, int * i);

}
#endif //JIMP_EXERCISES_SMARTTREE_H
