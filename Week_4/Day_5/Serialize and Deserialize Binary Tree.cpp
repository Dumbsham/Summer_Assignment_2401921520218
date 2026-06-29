#include <string>
#include <sstream>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Codec {
private:
    void serializeHelper(TreeNode* root, ostringstream& out) {
        if (!root) {
            out << "# ";
            return;
        }
        out << root->val << " ";
        serializeHelper(root->left, out);
        serializeHelper(root->right, out);
    }
    
    TreeNode* deserializeHelper(istringstream& in) {
        string val;
        in >> val;
        if (val == "#" || val.empty()) return nullptr;
        TreeNode* root = new TreeNode(stoi(val));
        root->left = deserializeHelper(in);
        root->right = deserializeHelper(in);
        return root;
    }
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        ostringstream out;
        serializeHelper(root, out);
        return out.str();
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        istringstream in(data);
        return deserializeHelper(in);
    }
};
